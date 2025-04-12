%{
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include "parser.h">

Node* root;


Node* create_node(char* name, int child_count, ...) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->name = strdup(name);
    node->child_count = child_count;
    node->children = (Node**)malloc(sizeof(Node*) * child_count);

    va_list args;
    va_start(args, child_count);
    for (int i = 0; i < child_count; i++)
        node->children[i] = va_arg(args, Node*);
    va_end(args);

    return node;
}

void print_ast(Node* node, int depth) {
    for (int i = 0; i < depth; i++) printf("  ");
    printf("(%s\n", node->name);
    for (int i = 0; i < node->child_count; i++)
        print_ast(node->children[i], depth + 1);
    for (int i = 0; i < depth; i++) printf("  ");
    printf(")\n");
}

void yyerror(const char* s) { fprintf(stderr, "Syntax error: %s\n", s); }
int yylex();
%}


%token DEF RETURNS BEGIN_BLOCK END VAR RETURN IF ELSE ELIF WHILE DO FOR CALL
%token EQ NEQ GTE LTE GT LT ASSIGN SEMICOLON COMMA COLON LPAREN RPAREN LBRACKET RBRACKET PLUS MINUS MULT DIV AMP BAR NOT AND OR
%token <str> IDENTIFIER INT_LITERAL REAL_LITERAL CHAR_LITERAL STRING_LITERAL BOOL_LITERAL
%token <str> TYPE INT REAL CHAR STRING INT_PTR REAL_PTR CHAR_PTR VOID NULLPTR

%type <node> program function params param_list body stmt stmt_list expr expr_list type

%union {
    char* str;
    Node* node;
}

%%
program:
    function                      { root = $1; $$ = $1; }
  | program function              { $$ = create_node("CODE", 2, $1, $2); }
  ;

function:
    DEF IDENTIFIER LPAREN params RPAREN COLON RETURNS type body {
        $$ = create_node("FUNC", 4, create_node($2, 0), $4, create_node("RET", 1, $8), $9);
    }
  | DEF IDENTIFIER LPAREN params RPAREN COLON body {
        $$ = create_node("FUNC", 4, create_node($2, 0), $4, create_node("RET NONE", 0), $7);
    }
  ;

params:
    /* empty */                  { $$ = create_node("PARS NONE", 0); }
  | param_list                   { $$ = create_node("PARS", 1, $1); }
  ;

param_list:
    TYPE IDENTIFIER              { $$ = create_node("PARAM", 2, create_node($1, 0), create_node($2, 0)); }
  | param_list COMMA TYPE IDENTIFIER {
        $$ = create_node("PARAMS", 2, $1, create_node("PARAM", 2, create_node($3, 0), create_node($4, 0)));
    }
  ;

body:
    BEGIN_BLOCK stmt_list END    { $$ = create_node("BODY", 1, $2); }
  ;

stmt_list:
    stmt                         { $$ = $1; }
  | stmt_list stmt               { $$ = create_node("STMTS", 2, $1, $2); }
  ;

stmt:
    RETURN expr SEMICOLON        { $$ = create_node("RET", 1, $2); }
  | IF expr COLON body ELSE COLON body {
        $$ = create_node("IF-ELSE", 3, $2, $4, $7);
    }
  | IF expr COLON body           { $$ = create_node("IF", 2, $2, $4); }
  | WHILE expr COLON body        { $$ = create_node("WHILE", 2, $2, $4); }
  | expr ASSIGN expr SEMICOLON   { $$ = create_node("=", 2, $1, $3); }
  | CALL IDENTIFIER LPAREN expr_list RPAREN SEMICOLON {
        $$ = create_node("CALL", 2, create_node($2, 0), $4);
    }
  | CALL IDENTIFIER LPAREN RPAREN SEMICOLON {
        $$ = create_node("CALL", 2, create_node($2, 0), create_node("ARGS NONE", 0));
    }
  ;

expr_list:
    expr                         { $$ = create_node("ARGS", 1, $1); }
  | expr_list COMMA expr         { $$ = create_node("ARGS", 2, $1, $3); }
  ;

expr:
    IDENTIFIER                   { $$ = create_node($1, 0); }
  | INT_LITERAL                  { $$ = create_node($1, 0); }
  | REAL_LITERAL                 { $$ = create_node($1, 0); }
  | CHAR_LITERAL                 { $$ = create_node($1, 0); }
  | STRING_LITERAL               { $$ = create_node($1, 0); }
  | BOOL_LITERAL                 { $$ = create_node($1, 0); }
  | expr PLUS expr               { $$ = create_node("+", 2, $1, $3); }
  | expr MINUS expr              { $$ = create_node("-", 2, $1, $3); }
  | expr MULT expr               { $$ = create_node("*", 2, $1, $3); }
  | expr DIV expr                { $$ = create_node("/", 2, $1, $3); }
  | NOT expr                     { $$ = create_node("NOT", 1, $2); }
  | LPAREN expr RPAREN           { $$ = $2; }
  ;

type:
    TYPE                         { $$ = create_node($1, 0); }
  | INT_PTR                      { $$ = create_node("INT*", 0); }
  | REAL_PTR                     { $$ = create_node("REAL*", 0); }
  | CHAR_PTR                     { $$ = create_node("CHAR*", 0); }
  | VOID                         { $$ = create_node("VOID", 0); }
  ;
%%

int main() {
    if(yyparse() == 0)
        print_ast(root, 0);
    return 0;
}
