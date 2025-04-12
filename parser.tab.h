/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    DEF = 258,                     /* DEF  */
    RETURNS = 259,                 /* RETURNS  */
    BEGIN_BLOCK = 260,             /* BEGIN_BLOCK  */
    END = 261,                     /* END  */
    VAR = 262,                     /* VAR  */
    RETURN = 263,                  /* RETURN  */
    IF = 264,                      /* IF  */
    ELSE = 265,                    /* ELSE  */
    ELIF = 266,                    /* ELIF  */
    WHILE = 267,                   /* WHILE  */
    DO = 268,                      /* DO  */
    FOR = 269,                     /* FOR  */
    CALL = 270,                    /* CALL  */
    EQ = 271,                      /* EQ  */
    NEQ = 272,                     /* NEQ  */
    GTE = 273,                     /* GTE  */
    LTE = 274,                     /* LTE  */
    GT = 275,                      /* GT  */
    LT = 276,                      /* LT  */
    ASSIGN = 277,                  /* ASSIGN  */
    SEMICOLON = 278,               /* SEMICOLON  */
    COMMA = 279,                   /* COMMA  */
    COLON = 280,                   /* COLON  */
    LPAREN = 281,                  /* LPAREN  */
    RPAREN = 282,                  /* RPAREN  */
    LBRACKET = 283,                /* LBRACKET  */
    RBRACKET = 284,                /* RBRACKET  */
    PLUS = 285,                    /* PLUS  */
    MINUS = 286,                   /* MINUS  */
    MULT = 287,                    /* MULT  */
    DIV = 288,                     /* DIV  */
    AMP = 289,                     /* AMP  */
    BAR = 290,                     /* BAR  */
    NOT = 291,                     /* NOT  */
    AND = 292,                     /* AND  */
    OR = 293,                      /* OR  */
    IDENTIFIER = 294,              /* IDENTIFIER  */
    INT_LITERAL = 295,             /* INT_LITERAL  */
    REAL_LITERAL = 296,            /* REAL_LITERAL  */
    CHAR_LITERAL = 297,            /* CHAR_LITERAL  */
    STRING_LITERAL = 298,          /* STRING_LITERAL  */
    BOOL_LITERAL = 299,            /* BOOL_LITERAL  */
    TYPE = 300,                    /* TYPE  */
    INT = 301,                     /* INT  */
    REAL = 302,                    /* REAL  */
    CHAR = 303,                    /* CHAR  */
    STRING = 304,                  /* STRING  */
    INT_PTR = 305,                 /* INT_PTR  */
    REAL_PTR = 306,                /* REAL_PTR  */
    CHAR_PTR = 307,                /* CHAR_PTR  */
    VOID = 308,                    /* VOID  */
    NULLPTR = 309                  /* NULLPTR  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 47 "parser.y"

    char* str;
    Node* node;

#line 123 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
