%{
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "parser.h">
#include "parser.tab.h"
%}

%option noyywrap

%%
"def"       { return DEF; }
"returns"   { return RETURNS; }
"begin"     { return BEGIN_BLOCK; }
"end"       { return END; }
"var"       { return VAR; }
"return"    { return RETURN; }
"if"        { return IF; }
"else"      { return ELSE; }
"elif"      { return ELIF; }
"while"     { return WHILE; }
"do"        { return DO; }
"for"       { return FOR; }
"call"      { return CALL; }
"bool"      { yylval.str = strdup("bool"); return TYPE; }
"TRUE"      { yylval.str = strdup("true"); return BOOL_LITERAL; }
"FALSE"     { yylval.str = strdup("false"); return BOOL_LITERAL; }
"int"       { yylval.str = strdup("int"); return TYPE; }
"char"      { yylval.str = strdup("char"); return TYPE; }
"real"      { yylval.str = strdup("real"); return TYPE; }
"string"    { yylval.str = strdup("string"); return TYPE; }
"int*"      { yylval.str = strdup("int*"); return INT_PTR; }
"char*"     { yylval.str = strdup("char*"); return CHAR_PTR; }
"real*"     { yylval.str = strdup("real*"); return REAL_PTR; }
"null"      { return NULLPTR; }
"void"      { yylval.str = strdup("void"); return VOID; }
[ \t\n]+    ;
"#->"([^<]|<[^-])*"<-#"  ;
"=="        { return EQ; }
"!="        { return NEQ; }
">="        { return GTE; }
"<="        { return LTE; }
">"         { return GT; }
"<"         { return LT; }
"="         { return ASSIGN; }
";"         { return SEMICOLON; }
","         { return COMMA; }
":"         { return COLON; }
"("         { return LPAREN; }
")"         { return RPAREN; }
"["         { return LBRACKET; }
"]"         { return RBRACKET; }
"+"         { return PLUS; }
"-"         { return MINUS; }
"*"         { return MULT; }
"/"         { return DIV; }
"&"         { return AMP; }
"|"         { return BAR; }
"not"       { return NOT; }
"and"       { return AND; }
"or"        { return OR; }
[0-9]+                           { yylval.str = strdup(yytext); return INT_LITERAL; }
0[xX][0-9A-Fa-f]+                { yylval.str = strdup(yytext); return INT_LITERAL; }
[0-9]+\.[0-9]*([Ee][-+]?[0-9]+)? { yylval.str = strdup(yytext); return REAL_LITERAL; }
[a-zA-Z_][a-zA-Z0-9_]*           { yylval.str = strdup(yytext); return IDENTIFIER; }
\'[^\']\'                        { yylval.str = strdup(yytext); return CHAR_LITERAL; }
\"[^\"]*\"                       { yylval.str = strdup(yytext); return STRING_LITERAL; }
.                                { printf("Unrecognized character: %s\n", yytext); return 0; }
%%

