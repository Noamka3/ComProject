%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "parser.h"

extern int yylineno;
extern int yylex();
void yyerror(const char* s);

Node* root;
%}

%union {
    char* str;
    Node* node;
}

%token DEF RETURNS RETURN IF ELSE ELIF WHILE FOR DO VAR BEGIN_T END_T CALL NULL_T TRUE FALSE TYPE
%token INT REAL CHAR BOOL STRING INT_PTR REAL_PTR CHAR_PTR
%token AND OR NOT
%token EQ NE LE GE LT GT ASSIGN
%token ADD SUB MUL DIV ADDR DEREF EPIPE
%token <str> IDENTIFIER INT_LITERAL REAL_LITERAL CHAR_LITERAL STRING_LITERAL

%type <node> program funcs func parameters parameter ret_type type var_decls optional_var_list var_decl_list var_single_decl string_decl_list string_decl stmts stmt expr args block inner_block

%left OR
%left AND
%left EQ NE
%left LT LE GT GE
%left ADD SUB
%left MUL DIV
%right NOT ADDR
%nonassoc LOWER_THAN_ELSE
%nonassoc ELSE

%%

program : funcs { root = create_node("CODE", 1, $1); }
;

funcs : func { $$ = $1; }
      | func funcs { $$ = create_node("FUNC", 2, $1, $2); }
      | /* empty */ { $$ = NULL; }
;

func 
  : DEF IDENTIFIER '(' parameters ')' ':' RETURNS ret_type var_decls block
{
    Node* ret = create_node("RET", 1, $8);
    Node* body = create_node("BODY", 1, $10);
    if ($9->child_count == 0)
        $$ = create_node($2, 3, $4, ret, body);
    else
        $$ = create_node($2, 4, $4, ret, $9, body);
}
| DEF IDENTIFIER '(' parameters ')' ':' var_decls block
{
    Node* ret = create_node("RET NONE", 0);
    Node* body = create_node("BODY", 1, $8);
    if ($7->child_count == 0)
        $$ = create_node($2, 3, $4, ret, body);
    else
        $$ = create_node($2, 4, $4, ret, $7, body);
}
;

parameters : parameter ';' parameters
{
    Node* pars = create_node("PARS", $3->child_count + 1);
    pars->children[0] = $1;
    for (int i = 0; i < $3->child_count; i++) {
        pars->children[i+1] = $3->children[i];
    }
    $$ = pars;
}
| parameter { $$ = create_node("PARS", 1, $1); }
| /* empty */ { $$ = create_node("PARS NONE", 0); }
;

parameter : IDENTIFIER type ':' IDENTIFIER
{
    char temp[100];
    sprintf(temp, "par%s %s %s", $1 + 3, $2->name, $4);
    $$ = create_node(temp, 0);
}
;

ret_type : INT { $$ = create_node("INT", 0); }
         | REAL { $$ = create_node("REAL", 0); }
         | CHAR { $$ = create_node("CHAR", 0); }
         | BOOL { $$ = create_node("BOOL", 0); }
         | INT_PTR { $$ = create_node("INT_PTR", 0); }
         | REAL_PTR { $$ = create_node("REAL_PTR", 0); }
         | CHAR_PTR { $$ = create_node("CHAR_PTR", 0); }
;

type : INT { $$ = create_node("INT", 0); }
     | REAL { $$ = create_node("REAL", 0); }
     | CHAR { $$ = create_node("CHAR", 0); }
     | BOOL { $$ = create_node("BOOL", 0); }
     | INT_PTR { $$ = create_node("INT_PTR", 0); }
     | REAL_PTR { $$ = create_node("REAL_PTR", 0); }
     | CHAR_PTR { $$ = create_node("CHAR_PTR", 0); }
     | STRING { $$ = create_node("STRING", 0); }
;

var_decls : VAR optional_var_list { $$ = $2; }
          | /* empty */ { $$ = create_node("BLOCK", 0); }
;

optional_var_list
  : var_decl_list { $$ = $1; }
  | /* empty */   { $$ = create_node("BLOCK", 0); }
;

var_decl_list : var_decl_list var_single_decl {
    $$ = create_node("BLOCK", 2, $1, $2);
}
| var_single_decl { $$ = create_node("BLOCK", 1, $1); }
;

var_single_decl : TYPE type ':' IDENTIFIER ';' {
    char temp[100];
    sprintf(temp, "%s %s", $2->name, $4);
    $$ = create_node(temp, 0);
}
| TYPE type ':' string_decl_list ';' {
    $$ = $4;
}
;

string_decl_list
  : string_decl_list ',' string_decl {
      Node* block = create_node("BLOCK", $1->child_count + 1);
      for (int i = 0; i < $1->child_count; ++i)
          block->children[i] = $1->children[i];
      block->children[$1->child_count] = $3;
      $$ = block;
  }
  | string_decl {
      $$ = create_node("BLOCK", 1, $1);
  }
;



string_decl
  : IDENTIFIER '[' INT_LITERAL ']' {
      char temp[100];
      sprintf(temp, "STR %s[%s]", $1, $3);
      $$ = create_node(temp, 0);
  }
  | IDENTIFIER '[' INT_LITERAL ']' ':' STRING_LITERAL {
      char temp[100];
      sprintf(temp, "STR %s[%s]:%s", $1, $3, $5);
      $$ = create_node(temp, 0);
  }
;

block
  : BEGIN_T optional_var_list stmts END_T {
      if ($2->child_count == 0 && $3->child_count == 0)
          $$ = create_node("BLOCK", 0);
      else if ($2->child_count == 0)
          $$ = create_node("BLOCK", 1, $3);
      else if ($3->child_count == 0)
          $$ = create_node("BLOCK", 1, $2);
      else
          $$ = create_node("BLOCK", 2, $2, $3);
  }
  | BEGIN_T optional_var_list END_T {
      $$ = create_node("BLOCK", 1, $2);
  }
  | BEGIN_T END_T {
      $$ = create_node("BLOCK", 0);
  }
;


inner_block 
  : funcs stmts {
      if ($2->child_count == 0)
          $$ = $1;
      else if ($1->child_count == 0)
          $$ = $2;
      else
          $$ = create_node("BLOCK", 2, $1, $2);
  }
  | funcs { $$ = $1; }
  | stmts { $$ = $1; }
  | /* empty */ { $$ = create_node("BLOCK", 0); }
;

stmts : stmt { $$ = $1; }
      | stmt stmts {
        if (strcmp($2->name, "BLOCK") == 0) {
            Node* merged = create_node("BLOCK", 1 + $2->child_count);
            merged->children[0] = $1;
            for (int i = 0; i < $2->child_count; i++)
                merged->children[i+1] = $2->children[i];
            $$ = merged;
        } else {
            $$ = create_node("BLOCK", 2, $1, $2);
        }
      }
;

stmt : IDENTIFIER ASSIGN expr ';' { $$ = create_node("=", 2, create_node($1, 0), $3); }
     | MUL IDENTIFIER ASSIGN expr ';' { $$ = create_node("= *", 2, create_node($2, 0), $4); }
     | RETURN expr ';' { $$ = create_node("RET", 1, $2); }
     | IDENTIFIER '(' args ')' ';' { $$ = create_node("CALL", 2, create_node($1, 0), $3); }
     | IF expr ':' block ELSE ':' block { $$ = create_node("IF-ELSE", 3, $2, $4, $7); }
     | IF expr ':' block %prec LOWER_THAN_ELSE { $$ = create_node("IF", 2, $2, $4); }
     | WHILE expr ':' block { $$ = create_node("WHILE", 2, $2, $4); }
     | block { $$ = $1; }
;

args : expr { $$ = create_node("ARGS", 1, $1); }
     | expr ',' args { $$ = create_node("ARGS", 2, $1, $3); }
     | /* empty */ { $$ = create_node("ARGS NONE", 0); }
;

expr : expr ADD expr { $$ = create_node("+", 2, $1, $3); }
     | expr SUB expr { $$ = create_node("-", 2, $1, $3); }
     | expr MUL expr { $$ = create_node("*", 2, $1, $3); }
     | expr DIV expr { $$ = create_node("/", 2, $1, $3); }
     | expr EQ expr { $$ = create_node("==", 2, $1, $3); }
     | expr NE expr { $$ = create_node("!=", 2, $1, $3); }
     | expr GT expr { $$ = create_node(">", 2, $1, $3); }
     | expr GE expr { $$ = create_node(">=", 2, $1, $3); }
     | expr LT expr { $$ = create_node("<", 2, $1, $3); }
     | expr LE expr { $$ = create_node("<=", 2, $1, $3); }
     | expr AND expr { $$ = create_node("AND", 2, $1, $3); }
     | expr OR expr { $$ = create_node("OR", 2, $1, $3); }
     | NOT expr { $$ = create_node("NOT", 1, $2); }
     | '(' expr ')' { $$ = $2; }
     | MUL IDENTIFIER { $$ = create_node("*", 1, create_node($2, 0)); }
     | ADDR IDENTIFIER { $$ = create_node("&", 1, create_node($2, 0)); }
     | IDENTIFIER { $$ = create_node($1, 0); }
     | IDENTIFIER '(' args ')' { $$ = create_node("CALL", 2, create_node($1, 0), $3); }
     | INT_LITERAL { $$ = create_node($1, 0); }
     | REAL_LITERAL { $$ = create_node($1, 0); }
     | CHAR_LITERAL { $$ = create_node($1, 0); }
     | STRING_LITERAL { $$ = create_node($1, 0); }
     | TRUE { $$ = create_node("TRUE", 0); }
     | FALSE { $$ = create_node("FALSE", 0); }
     | NULL_T { $$ = create_node("NULL", 0); }
     | EPIPE IDENTIFIER EPIPE { $$ = create_node("LEN", 1, create_node($2, 0)); }
;

%%

void yyerror(const char* s) {
    printf("Syntax error at line %d: %s\n", yylineno, s);
    exit(1);
}

int main() {
    if (yyparse() == 0)
        print_ast(root, 0);
    return 0;
}

