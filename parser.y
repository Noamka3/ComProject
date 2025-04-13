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

%token DEF RETURNS RETURN IF ELSE ELIF WHILE FOR DO VAR BEGIN_T END_T CALL NULL_T TRUE FALSE
%token INT REAL CHAR BOOL STRING INT_PTR REAL_PTR CHAR_PTR
%token AND OR NOT
%token EQ NE LE GE LT GT ASSIGN
%token ADD SUB MUL DIV ADDR DEREF
%token <str> IDENTIFIER INT_LITERAL REAL_LITERAL CHAR_LITERAL STRING_LITERAL

%type <node> program funcs func parameters parameter ret_type type var_decls var_decl stmts stmt expr args block

%%

program : funcs { root = create_node("CODE", 1, $1); }
;

funcs : func funcs { $$ = create_node("FUNC", 2, $1, $2); }
      | /* empty */ { $$ = create_node("FUNC", 0); }
;

func : DEF IDENTIFIER '(' parameters ')' ':' RETURNS ret_type var_decls block
{ $$ = create_node($2, 4, $4, create_node("RET", 1, $8), create_node("BODY", 1, $10), $9); }
| DEF IDENTIFIER '(' parameters ')' ':' var_decls block
{ $$ = create_node($2, 4, $4, create_node("RET", 1, create_node("NONE", 0)), create_node("BODY", 1, $8), $7); }
;


parameters : parameter ';' parameters
{
    Node* temp = create_node("PARS", $3->child_count + 1, $1);
    for (int i = 0; i < $3->child_count; i++)
        temp->children[i+1] = $3->children[i];
    $$ = temp;
}
| parameter { $$ = create_node("PARS", 1, $1); }
| /* empty */ { $$ = create_node("PARS", 1, create_node("NONE", 0)); }
;

parameter : IDENTIFIER type ':' IDENTIFIER
{
    char temp[100];
    sprintf(temp, "(%s %s %s)", $1, $2->name, $4);
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
;

var_decls : var_decl var_decls { $$ = create_node("BLOCK", 2, $1, $2); }
          | /* empty */ { $$ = create_node("BLOCK", 0); }
;

var_decl : VAR type ':' IDENTIFIER ';'
{
    char temp[100];
    sprintf(temp, "(%s %s)", $2->name, $4);
    $$ = create_node(temp, 0);
}
;

block : BEGIN_T stmts END_T { $$ = create_node("BLOCK", 1, $2); }
;

stmts : stmt stmts { $$ = create_node("BLOCK", 2, $1, $2); }
      | stmt { $$ = $1; }
;

stmt : IDENTIFIER ASSIGN expr ';' { $$ = create_node("=", 2, create_node($1, 0), $3); }
     | DEREF IDENTIFIER ASSIGN expr ';' { $$ = create_node("= *", 2, create_node($2, 0), $4); }
     | RETURN expr ';' { $$ = create_node("RET", 1, $2); }
     | CALL IDENTIFIER '(' args ')' ';' { $$ = create_node("CALL", 2, create_node($2, 0), $4); }
     | IF expr ':' block ELSE ':' block { $$ = create_node("IF-ELSE", 3, $2, $4, $7); }
     | IF expr ':' block { $$ = create_node("IF", 2, $2, $4); }
     | WHILE expr ':' block { $$ = create_node("WHILE", 2, $2, $4); }
     | FOR '(' stmt expr ';' stmt ')' ':' block { $$ = create_node("FOR", 4, $3, $4, $6, $9); }
     | DO ':' block WHILE ':' expr ';' { $$ = create_node("DO-WHILE", 2, $3, $6); }
     | block { $$ = $1; }
;

args : expr ',' args { $$ = create_node("ARGS", 2, $1, $3); }
     | expr { $$ = create_node("ARGS", 1, $1); }
     | /* empty */ { $$ = create_node("ARGS", 0); }
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
     | DEREF IDENTIFIER { $$ = create_node("*", 1, create_node($2, 0)); }
     | ADDR IDENTIFIER { $$ = create_node("&", 1, create_node($2, 0)); }
     | IDENTIFIER { $$ = create_node($1, 0); }
     | INT_LITERAL { $$ = create_node($1, 0); }
     | REAL_LITERAL { $$ = create_node($1, 0); }
     | CHAR_LITERAL { $$ = create_node($1, 0); }
     | STRING_LITERAL { $$ = create_node($1, 0); }
     | TRUE { $$ = create_node("TRUE", 0); }
     | FALSE { $$ = create_node("FALSE", 0); }
     | NULL_T { $$ = create_node("NULL", 0); }
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

