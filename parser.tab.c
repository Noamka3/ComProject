/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "parser.h"

extern int yylineno;
extern int yylex();
void yyerror(const char* s);

Node* root;

#line 84 "parser.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_DEF = 3,                        /* DEF  */
  YYSYMBOL_RETURNS = 4,                    /* RETURNS  */
  YYSYMBOL_RETURN = 5,                     /* RETURN  */
  YYSYMBOL_IF = 6,                         /* IF  */
  YYSYMBOL_ELSE = 7,                       /* ELSE  */
  YYSYMBOL_ELIF = 8,                       /* ELIF  */
  YYSYMBOL_WHILE = 9,                      /* WHILE  */
  YYSYMBOL_FOR = 10,                       /* FOR  */
  YYSYMBOL_DO = 11,                        /* DO  */
  YYSYMBOL_VAR = 12,                       /* VAR  */
  YYSYMBOL_BEGIN_T = 13,                   /* BEGIN_T  */
  YYSYMBOL_END_T = 14,                     /* END_T  */
  YYSYMBOL_CALL = 15,                      /* CALL  */
  YYSYMBOL_NULL_T = 16,                    /* NULL_T  */
  YYSYMBOL_TRUE = 17,                      /* TRUE  */
  YYSYMBOL_FALSE = 18,                     /* FALSE  */
  YYSYMBOL_TYPE = 19,                      /* TYPE  */
  YYSYMBOL_INT = 20,                       /* INT  */
  YYSYMBOL_REAL = 21,                      /* REAL  */
  YYSYMBOL_CHAR = 22,                      /* CHAR  */
  YYSYMBOL_BOOL = 23,                      /* BOOL  */
  YYSYMBOL_STRING = 24,                    /* STRING  */
  YYSYMBOL_INT_PTR = 25,                   /* INT_PTR  */
  YYSYMBOL_REAL_PTR = 26,                  /* REAL_PTR  */
  YYSYMBOL_CHAR_PTR = 27,                  /* CHAR_PTR  */
  YYSYMBOL_AND = 28,                       /* AND  */
  YYSYMBOL_OR = 29,                        /* OR  */
  YYSYMBOL_NOT = 30,                       /* NOT  */
  YYSYMBOL_EQ = 31,                        /* EQ  */
  YYSYMBOL_NE = 32,                        /* NE  */
  YYSYMBOL_LE = 33,                        /* LE  */
  YYSYMBOL_GE = 34,                        /* GE  */
  YYSYMBOL_LT = 35,                        /* LT  */
  YYSYMBOL_GT = 36,                        /* GT  */
  YYSYMBOL_ASSIGN = 37,                    /* ASSIGN  */
  YYSYMBOL_ADD = 38,                       /* ADD  */
  YYSYMBOL_SUB = 39,                       /* SUB  */
  YYSYMBOL_MUL = 40,                       /* MUL  */
  YYSYMBOL_DIV = 41,                       /* DIV  */
  YYSYMBOL_ADDR = 42,                      /* ADDR  */
  YYSYMBOL_DEREF = 43,                     /* DEREF  */
  YYSYMBOL_IDENTIFIER = 44,                /* IDENTIFIER  */
  YYSYMBOL_INT_LITERAL = 45,               /* INT_LITERAL  */
  YYSYMBOL_REAL_LITERAL = 46,              /* REAL_LITERAL  */
  YYSYMBOL_CHAR_LITERAL = 47,              /* CHAR_LITERAL  */
  YYSYMBOL_STRING_LITERAL = 48,            /* STRING_LITERAL  */
  YYSYMBOL_LOWER_THAN_ELSE = 49,           /* LOWER_THAN_ELSE  */
  YYSYMBOL_50_ = 50,                       /* '('  */
  YYSYMBOL_51_ = 51,                       /* ')'  */
  YYSYMBOL_52_ = 52,                       /* ':'  */
  YYSYMBOL_53_ = 53,                       /* ';'  */
  YYSYMBOL_54_ = 54,                       /* ','  */
  YYSYMBOL_YYACCEPT = 55,                  /* $accept  */
  YYSYMBOL_program = 56,                   /* program  */
  YYSYMBOL_funcs = 57,                     /* funcs  */
  YYSYMBOL_func = 58,                      /* func  */
  YYSYMBOL_parameters = 59,                /* parameters  */
  YYSYMBOL_parameter = 60,                 /* parameter  */
  YYSYMBOL_ret_type = 61,                  /* ret_type  */
  YYSYMBOL_type = 62,                      /* type  */
  YYSYMBOL_var_decls = 63,                 /* var_decls  */
  YYSYMBOL_var_decl_list = 64,             /* var_decl_list  */
  YYSYMBOL_var_single_decl = 65,           /* var_single_decl  */
  YYSYMBOL_block = 66,                     /* block  */
  YYSYMBOL_inner_block = 67,               /* inner_block  */
  YYSYMBOL_stmts = 68,                     /* stmts  */
  YYSYMBOL_stmt = 69,                      /* stmt  */
  YYSYMBOL_args = 70,                      /* args  */
  YYSYMBOL_expr = 71                       /* expr  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   250

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  17
/* YYNRULES -- Number of rules.  */
#define YYNRULES  75
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  133

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   304


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      50,    51,     2,     2,    54,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    52,    53,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    40,    40,    43,    44,    45,    49,    58,    69,    78,
      79,    82,    90,    91,    92,    93,    94,    95,    96,    99,
     100,   101,   102,   103,   104,   105,   108,   109,   112,   115,
     118,   125,   131,   132,   137,   145,   146,   147,   151,   152,
     165,   166,   167,   168,   169,   170,   171,   172,   175,   176,
     177,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "DEF", "RETURNS",
  "RETURN", "IF", "ELSE", "ELIF", "WHILE", "FOR", "DO", "VAR", "BEGIN_T",
  "END_T", "CALL", "NULL_T", "TRUE", "FALSE", "TYPE", "INT", "REAL",
  "CHAR", "BOOL", "STRING", "INT_PTR", "REAL_PTR", "CHAR_PTR", "AND", "OR",
  "NOT", "EQ", "NE", "LE", "GE", "LT", "GT", "ASSIGN", "ADD", "SUB", "MUL",
  "DIV", "ADDR", "DEREF", "IDENTIFIER", "INT_LITERAL", "REAL_LITERAL",
  "CHAR_LITERAL", "STRING_LITERAL", "LOWER_THAN_ELSE", "'('", "')'", "':'",
  "';'", "','", "$accept", "program", "funcs", "func", "parameters",
  "parameter", "ret_type", "type", "var_decls", "var_decl_list",
  "var_single_decl", "block", "inner_block", "stmts", "stmt", "args",
  "expr", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-72)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       5,   -32,    16,   -72,     5,   -27,   -72,   -72,   -22,   215,
     -25,   -26,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -19,
     -18,   -22,    -8,     3,   -72,   -72,   223,    18,    25,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,    29,   215,    18,   -72,
      15,   -72,    25,     4,   -72,    44,    44,    44,   -72,    14,
     -31,    26,   -72,    49,    50,    26,   -72,    21,   -72,   -72,
     -72,    44,    23,    24,    19,   -72,   -72,   -72,   -72,    44,
      90,   138,   153,    36,    44,    44,   -72,   -72,   -72,   -72,
      32,   -72,   -72,   -72,    44,   168,    44,    44,    44,    44,
      44,    44,    44,    44,    44,    44,    44,    44,   -72,    25,
      25,    44,   106,    28,    73,   -72,    48,   -72,   193,   182,
      42,    42,    57,    57,    57,    57,   -30,   -30,   -72,   -72,
      80,   -72,   122,   -72,    40,    44,   -72,    58,   -72,   -72,
     -72,    25,   -72
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       5,     0,     0,     2,     3,     0,     1,     4,    10,     0,
       0,     9,    19,    20,    21,    22,    23,    24,    25,     0,
       0,    10,     0,    27,     8,    11,     0,     0,     0,    12,
      13,    14,    15,    16,    17,    18,    27,     0,    26,    29,
       0,     7,     0,     0,    28,     0,     0,     0,    33,     0,
       0,    35,    47,     0,     0,    38,     6,     0,    75,    73,
      74,     0,     0,     0,    67,    69,    70,    71,    72,     0,
       0,     0,     0,     0,     0,    50,    34,    32,    31,    39,
       0,    63,    65,    66,    50,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    42,     0,
       0,     0,     0,     0,    48,    30,     0,    64,    61,    62,
      55,    56,    60,    58,    59,    57,    51,    52,    53,    54,
      45,    46,     0,    40,     0,    50,    68,     0,    41,    43,
      49,     0,    44
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -72,   -72,     0,   -72,    79,   -72,   -72,    78,    81,   -72,
      82,   -28,   -72,   -46,   -72,   -71,   -44
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,     3,     4,    10,    11,    36,    19,    28,    38,
      39,    52,    53,    54,    55,   103,   104
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      41,    70,    71,    72,     7,    76,    74,    26,     1,    79,
      96,    97,     5,   106,    56,    27,     6,    81,     1,    75,
      45,    46,     9,     8,    47,    85,    20,    21,    40,    48,
     102,    45,    46,    22,    23,    47,    25,    37,    40,    40,
      51,    27,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   130,    49,    57,   122,    73,    50,
      58,    59,    60,    77,    78,    80,    49,    82,    83,    84,
      50,   120,   121,   101,    61,    90,    91,    92,    93,   124,
      94,    95,    96,    97,    62,   105,    63,   127,    64,    65,
      66,    67,    68,   129,    69,    94,    95,    96,    97,   126,
      24,    86,    87,   132,    88,    89,    90,    91,    92,    93,
     131,    94,    95,    96,    97,    43,     0,    42,    86,    87,
      44,    88,    89,    90,    91,    92,    93,   125,    94,    95,
      96,    97,     0,     0,    86,    87,     0,    88,    89,    90,
      91,    92,    93,    98,    94,    95,    96,    97,     0,     0,
      86,    87,     0,    88,    89,    90,    91,    92,    93,   123,
      94,    95,    96,    97,     0,     0,    86,    87,     0,    88,
      89,    90,    91,    92,    93,   128,    94,    95,    96,    97,
       0,    86,    87,     0,    88,    89,    90,    91,    92,    93,
      99,    94,    95,    96,    97,     0,    86,    87,     0,    88,
      89,    90,    91,    92,    93,   100,    94,    95,    96,    97,
      86,     0,     0,    88,    89,    90,    91,    92,    93,   107,
      94,    95,    96,    97,    88,    89,    90,    91,    92,    93,
       0,    94,    95,    96,    97,    12,    13,    14,    15,     0,
      16,    17,    18,    29,    30,    31,    32,     0,    33,    34,
      35
};

static const yytype_int16 yycheck[] =
{
      28,    45,    46,    47,     4,    51,    37,     4,     3,    55,
      40,    41,    44,    84,    42,    12,     0,    61,     3,    50,
       5,     6,    44,    50,     9,    69,    51,    53,    13,    14,
      74,     5,     6,    52,    52,     9,    44,    19,    13,    13,
      40,    12,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,   125,    40,    52,   101,    44,    44,
      16,    17,    18,    14,    14,    44,    40,    44,    44,    50,
      44,    99,   100,    37,    30,    33,    34,    35,    36,    51,
      38,    39,    40,    41,    40,    53,    42,     7,    44,    45,
      46,    47,    48,    53,    50,    38,    39,    40,    41,    51,
      21,    28,    29,   131,    31,    32,    33,    34,    35,    36,
      52,    38,    39,    40,    41,    37,    -1,    36,    28,    29,
      38,    31,    32,    33,    34,    35,    36,    54,    38,    39,
      40,    41,    -1,    -1,    28,    29,    -1,    31,    32,    33,
      34,    35,    36,    53,    38,    39,    40,    41,    -1,    -1,
      28,    29,    -1,    31,    32,    33,    34,    35,    36,    53,
      38,    39,    40,    41,    -1,    -1,    28,    29,    -1,    31,
      32,    33,    34,    35,    36,    53,    38,    39,    40,    41,
      -1,    28,    29,    -1,    31,    32,    33,    34,    35,    36,
      52,    38,    39,    40,    41,    -1,    28,    29,    -1,    31,
      32,    33,    34,    35,    36,    52,    38,    39,    40,    41,
      28,    -1,    -1,    31,    32,    33,    34,    35,    36,    51,
      38,    39,    40,    41,    31,    32,    33,    34,    35,    36,
      -1,    38,    39,    40,    41,    20,    21,    22,    23,    -1,
      25,    26,    27,    20,    21,    22,    23,    -1,    25,    26,
      27
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    56,    57,    58,    44,     0,    57,    50,    44,
      59,    60,    20,    21,    22,    23,    25,    26,    27,    62,
      51,    53,    52,    52,    59,    44,     4,    12,    63,    20,
      21,    22,    23,    25,    26,    27,    61,    19,    64,    65,
      13,    66,    63,    62,    65,     5,     6,     9,    14,    40,
      44,    57,    66,    67,    68,    69,    66,    52,    16,    17,
      18,    30,    40,    42,    44,    45,    46,    47,    48,    50,
      71,    71,    71,    44,    37,    50,    68,    14,    14,    68,
      44,    71,    44,    44,    50,    71,    28,    29,    31,    32,
      33,    34,    35,    36,    38,    39,    40,    41,    53,    52,
      52,    37,    71,    70,    71,    53,    70,    51,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      66,    66,    71,    53,    51,    54,    51,     7,    53,    53,
      70,    52,    66
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    55,    56,    57,    57,    57,    58,    58,    59,    59,
      59,    60,    61,    61,    61,    61,    61,    61,    61,    62,
      62,    62,    62,    62,    62,    62,    63,    63,    64,    64,
      65,    66,    66,    66,    67,    67,    67,    67,    68,    68,
      69,    69,    69,    69,    69,    69,    69,    69,    70,    70,
      70,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     0,    10,     8,     3,     1,
       0,     4,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     0,     2,     1,
       5,     3,     3,     2,     2,     1,     1,     0,     1,     2,
       4,     5,     3,     5,     7,     4,     4,     1,     1,     3,
       0,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     3,     2,     2,     1,     4,     1,
       1,     1,     1,     1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* program: funcs  */
#line 40 "parser.y"
                { root = create_node("CODE", 1, (yyvsp[0].node)); }
#line 1254 "parser.tab.c"
    break;

  case 3: /* funcs: func  */
#line 43 "parser.y"
             { (yyval.node) = (yyvsp[0].node); }
#line 1260 "parser.tab.c"
    break;

  case 4: /* funcs: func funcs  */
#line 44 "parser.y"
                   { (yyval.node) = create_node("FUNC", 2, (yyvsp[-1].node), (yyvsp[0].node)); }
#line 1266 "parser.tab.c"
    break;

  case 5: /* funcs: %empty  */
#line 45 "parser.y"
                    { (yyval.node) = NULL; }
#line 1272 "parser.tab.c"
    break;

  case 6: /* func: DEF IDENTIFIER '(' parameters ')' ':' RETURNS ret_type var_decls block  */
#line 50 "parser.y"
{
    Node* ret = create_node("RET", 1, (yyvsp[-2].node));
    Node* body = create_node("BODY", 1, (yyvsp[0].node));
    if ((yyvsp[-1].node)->child_count == 0)
        (yyval.node) = create_node((yyvsp[-8].str), 3, (yyvsp[-6].node), ret, body);
    else
        (yyval.node) = create_node((yyvsp[-8].str), 4, (yyvsp[-6].node), ret, (yyvsp[-1].node), body);
}
#line 1285 "parser.tab.c"
    break;

  case 7: /* func: DEF IDENTIFIER '(' parameters ')' ':' var_decls block  */
#line 59 "parser.y"
{
    Node* ret = create_node("RET NONE", 0);
    Node* body = create_node("BODY", 1, (yyvsp[0].node));
    if ((yyvsp[-1].node)->child_count == 0)
        (yyval.node) = create_node((yyvsp[-6].str), 3, (yyvsp[-4].node), ret, body);
    else
        (yyval.node) = create_node((yyvsp[-6].str), 4, (yyvsp[-4].node), ret, (yyvsp[-1].node), body);
}
#line 1298 "parser.tab.c"
    break;

  case 8: /* parameters: parameter ';' parameters  */
#line 70 "parser.y"
{
    Node* pars = create_node("PARS", (yyvsp[0].node)->child_count + 1);
    pars->children[0] = (yyvsp[-2].node);
    for (int i = 0; i < (yyvsp[0].node)->child_count; i++) {
        pars->children[i+1] = (yyvsp[0].node)->children[i];
    }
    (yyval.node) = pars;
}
#line 1311 "parser.tab.c"
    break;

  case 9: /* parameters: parameter  */
#line 78 "parser.y"
            { (yyval.node) = create_node("PARS", 1, (yyvsp[0].node)); }
#line 1317 "parser.tab.c"
    break;

  case 10: /* parameters: %empty  */
#line 79 "parser.y"
              { (yyval.node) = create_node("PARS NONE", 0); }
#line 1323 "parser.tab.c"
    break;

  case 11: /* parameter: IDENTIFIER type ':' IDENTIFIER  */
#line 83 "parser.y"
{
    char temp[100];
    sprintf(temp, "par%s %s %s", (yyvsp[-3].str) + 3, (yyvsp[-2].node)->name, (yyvsp[0].str));
    (yyval.node) = create_node(temp, 0);
}
#line 1333 "parser.tab.c"
    break;

  case 12: /* ret_type: INT  */
#line 90 "parser.y"
               { (yyval.node) = create_node("INT", 0); }
#line 1339 "parser.tab.c"
    break;

  case 13: /* ret_type: REAL  */
#line 91 "parser.y"
                { (yyval.node) = create_node("REAL", 0); }
#line 1345 "parser.tab.c"
    break;

  case 14: /* ret_type: CHAR  */
#line 92 "parser.y"
                { (yyval.node) = create_node("CHAR", 0); }
#line 1351 "parser.tab.c"
    break;

  case 15: /* ret_type: BOOL  */
#line 93 "parser.y"
                { (yyval.node) = create_node("BOOL", 0); }
#line 1357 "parser.tab.c"
    break;

  case 16: /* ret_type: INT_PTR  */
#line 94 "parser.y"
                   { (yyval.node) = create_node("INT_PTR", 0); }
#line 1363 "parser.tab.c"
    break;

  case 17: /* ret_type: REAL_PTR  */
#line 95 "parser.y"
                    { (yyval.node) = create_node("REAL_PTR", 0); }
#line 1369 "parser.tab.c"
    break;

  case 18: /* ret_type: CHAR_PTR  */
#line 96 "parser.y"
                    { (yyval.node) = create_node("CHAR_PTR", 0); }
#line 1375 "parser.tab.c"
    break;

  case 19: /* type: INT  */
#line 99 "parser.y"
           { (yyval.node) = create_node("INT", 0); }
#line 1381 "parser.tab.c"
    break;

  case 20: /* type: REAL  */
#line 100 "parser.y"
            { (yyval.node) = create_node("REAL", 0); }
#line 1387 "parser.tab.c"
    break;

  case 21: /* type: CHAR  */
#line 101 "parser.y"
            { (yyval.node) = create_node("CHAR", 0); }
#line 1393 "parser.tab.c"
    break;

  case 22: /* type: BOOL  */
#line 102 "parser.y"
            { (yyval.node) = create_node("BOOL", 0); }
#line 1399 "parser.tab.c"
    break;

  case 23: /* type: INT_PTR  */
#line 103 "parser.y"
               { (yyval.node) = create_node("INT_PTR", 0); }
#line 1405 "parser.tab.c"
    break;

  case 24: /* type: REAL_PTR  */
#line 104 "parser.y"
                { (yyval.node) = create_node("REAL_PTR", 0); }
#line 1411 "parser.tab.c"
    break;

  case 25: /* type: CHAR_PTR  */
#line 105 "parser.y"
                { (yyval.node) = create_node("CHAR_PTR", 0); }
#line 1417 "parser.tab.c"
    break;

  case 26: /* var_decls: VAR var_decl_list  */
#line 108 "parser.y"
                              { (yyval.node) = (yyvsp[0].node); }
#line 1423 "parser.tab.c"
    break;

  case 27: /* var_decls: %empty  */
#line 109 "parser.y"
                        { (yyval.node) = create_node("BLOCK", 0); }
#line 1429 "parser.tab.c"
    break;

  case 28: /* var_decl_list: var_decl_list var_single_decl  */
#line 112 "parser.y"
                                              {
    (yyval.node) = create_node("BLOCK", 2, (yyvsp[-1].node), (yyvsp[0].node));
}
#line 1437 "parser.tab.c"
    break;

  case 29: /* var_decl_list: var_single_decl  */
#line 115 "parser.y"
                  { (yyval.node) = create_node("BLOCK", 1, (yyvsp[0].node)); }
#line 1443 "parser.tab.c"
    break;

  case 30: /* var_single_decl: TYPE type ':' IDENTIFIER ';'  */
#line 118 "parser.y"
                                               {
    char temp[100];
    sprintf(temp, "%s %s", (yyvsp[-3].node)->name, (yyvsp[-1].str));
    (yyval.node) = create_node(temp, 0);
}
#line 1453 "parser.tab.c"
    break;

  case 31: /* block: BEGIN_T stmts END_T  */
#line 125 "parser.y"
                            {
      if (strcmp((yyvsp[-1].node)->name, "BLOCK") == 0)
          (yyval.node) = (yyvsp[-1].node);
      else
          (yyval.node) = create_node("BLOCK", 1, (yyvsp[-1].node));
  }
#line 1464 "parser.tab.c"
    break;

  case 32: /* block: BEGIN_T inner_block END_T  */
#line 131 "parser.y"
                              { (yyval.node) = (yyvsp[-1].node); }
#line 1470 "parser.tab.c"
    break;

  case 33: /* block: BEGIN_T END_T  */
#line 132 "parser.y"
                  { (yyval.node) = create_node("BLOCK", 0); }
#line 1476 "parser.tab.c"
    break;

  case 34: /* inner_block: funcs stmts  */
#line 137 "parser.y"
                {
      if ((yyvsp[0].node)->child_count == 0)
          (yyval.node) = (yyvsp[-1].node);
      else if ((yyvsp[-1].node)->child_count == 0)
          (yyval.node) = (yyvsp[0].node);
      else
          (yyval.node) = create_node("BLOCK", 2, (yyvsp[-1].node), (yyvsp[0].node));
  }
#line 1489 "parser.tab.c"
    break;

  case 35: /* inner_block: funcs  */
#line 145 "parser.y"
          { (yyval.node) = (yyvsp[0].node); }
#line 1495 "parser.tab.c"
    break;

  case 36: /* inner_block: stmts  */
#line 146 "parser.y"
          { (yyval.node) = (yyvsp[0].node); }
#line 1501 "parser.tab.c"
    break;

  case 37: /* inner_block: %empty  */
#line 147 "parser.y"
                { (yyval.node) = create_node("BLOCK", 0); }
#line 1507 "parser.tab.c"
    break;

  case 38: /* stmts: stmt  */
#line 151 "parser.y"
             { (yyval.node) = (yyvsp[0].node); }
#line 1513 "parser.tab.c"
    break;

  case 39: /* stmts: stmt stmts  */
#line 152 "parser.y"
                   {
        if (strcmp((yyvsp[0].node)->name, "BLOCK") == 0) {
            Node* merged = create_node("BLOCK", 1 + (yyvsp[0].node)->child_count);
            merged->children[0] = (yyvsp[-1].node);
            for (int i = 0; i < (yyvsp[0].node)->child_count; i++)
                merged->children[i+1] = (yyvsp[0].node)->children[i];
            (yyval.node) = merged;
        } else {
            (yyval.node) = create_node("BLOCK", 2, (yyvsp[-1].node), (yyvsp[0].node));
        }
      }
#line 1529 "parser.tab.c"
    break;

  case 40: /* stmt: IDENTIFIER ASSIGN expr ';'  */
#line 165 "parser.y"
                                  { (yyval.node) = create_node("=", 2, create_node((yyvsp[-3].str), 0), (yyvsp[-1].node)); }
#line 1535 "parser.tab.c"
    break;

  case 41: /* stmt: MUL IDENTIFIER ASSIGN expr ';'  */
#line 166 "parser.y"
                                      { (yyval.node) = create_node("= *", 2, create_node((yyvsp[-3].str), 0), (yyvsp[-1].node)); }
#line 1541 "parser.tab.c"
    break;

  case 42: /* stmt: RETURN expr ';'  */
#line 167 "parser.y"
                       { (yyval.node) = create_node("RET", 1, (yyvsp[-1].node)); }
#line 1547 "parser.tab.c"
    break;

  case 43: /* stmt: IDENTIFIER '(' args ')' ';'  */
#line 168 "parser.y"
                                   { (yyval.node) = create_node("CALL", 2, create_node((yyvsp[-4].str), 0), (yyvsp[-2].node)); }
#line 1553 "parser.tab.c"
    break;

  case 44: /* stmt: IF expr ':' block ELSE ':' block  */
#line 169 "parser.y"
                                        { (yyval.node) = create_node("IF-ELSE", 3, (yyvsp[-5].node), (yyvsp[-3].node), (yyvsp[0].node)); }
#line 1559 "parser.tab.c"
    break;

  case 45: /* stmt: IF expr ':' block  */
#line 170 "parser.y"
                                               { (yyval.node) = create_node("IF", 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1565 "parser.tab.c"
    break;

  case 46: /* stmt: WHILE expr ':' block  */
#line 171 "parser.y"
                            { (yyval.node) = create_node("WHILE", 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1571 "parser.tab.c"
    break;

  case 47: /* stmt: block  */
#line 172 "parser.y"
             { (yyval.node) = (yyvsp[0].node); }
#line 1577 "parser.tab.c"
    break;

  case 48: /* args: expr  */
#line 175 "parser.y"
            { (yyval.node) = create_node("ARGS", 1, (yyvsp[0].node)); }
#line 1583 "parser.tab.c"
    break;

  case 49: /* args: expr ',' args  */
#line 176 "parser.y"
                     { (yyval.node) = create_node("ARGS", 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1589 "parser.tab.c"
    break;

  case 50: /* args: %empty  */
#line 177 "parser.y"
                   { (yyval.node) = create_node("ARGS NONE", 0); }
#line 1595 "parser.tab.c"
    break;

  case 51: /* expr: expr ADD expr  */
#line 180 "parser.y"
                     { (yyval.node) = create_node("+", 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1601 "parser.tab.c"
    break;

  case 52: /* expr: expr SUB expr  */
#line 181 "parser.y"
                     { (yyval.node) = create_node("-", 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1607 "parser.tab.c"
    break;

  case 53: /* expr: expr MUL expr  */
#line 182 "parser.y"
                     { (yyval.node) = create_node("*", 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1613 "parser.tab.c"
    break;

  case 54: /* expr: expr DIV expr  */
#line 183 "parser.y"
                     { (yyval.node) = create_node("/", 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1619 "parser.tab.c"
    break;

  case 55: /* expr: expr EQ expr  */
#line 184 "parser.y"
                    { (yyval.node) = create_node("==", 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1625 "parser.tab.c"
    break;

  case 56: /* expr: expr NE expr  */
#line 185 "parser.y"
                    { (yyval.node) = create_node("!=", 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1631 "parser.tab.c"
    break;

  case 57: /* expr: expr GT expr  */
#line 186 "parser.y"
                    { (yyval.node) = create_node(">", 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1637 "parser.tab.c"
    break;

  case 58: /* expr: expr GE expr  */
#line 187 "parser.y"
                    { (yyval.node) = create_node(">=", 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1643 "parser.tab.c"
    break;

  case 59: /* expr: expr LT expr  */
#line 188 "parser.y"
                    { (yyval.node) = create_node("<", 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1649 "parser.tab.c"
    break;

  case 60: /* expr: expr LE expr  */
#line 189 "parser.y"
                    { (yyval.node) = create_node("<=", 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1655 "parser.tab.c"
    break;

  case 61: /* expr: expr AND expr  */
#line 190 "parser.y"
                     { (yyval.node) = create_node("AND", 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1661 "parser.tab.c"
    break;

  case 62: /* expr: expr OR expr  */
#line 191 "parser.y"
                    { (yyval.node) = create_node("OR", 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1667 "parser.tab.c"
    break;

  case 63: /* expr: NOT expr  */
#line 192 "parser.y"
                { (yyval.node) = create_node("NOT", 1, (yyvsp[0].node)); }
#line 1673 "parser.tab.c"
    break;

  case 64: /* expr: '(' expr ')'  */
#line 193 "parser.y"
                    { (yyval.node) = (yyvsp[-1].node); }
#line 1679 "parser.tab.c"
    break;

  case 65: /* expr: MUL IDENTIFIER  */
#line 194 "parser.y"
                      { (yyval.node) = create_node("*", 1, create_node((yyvsp[0].str), 0)); }
#line 1685 "parser.tab.c"
    break;

  case 66: /* expr: ADDR IDENTIFIER  */
#line 195 "parser.y"
                       { (yyval.node) = create_node("&", 1, create_node((yyvsp[0].str), 0)); }
#line 1691 "parser.tab.c"
    break;

  case 67: /* expr: IDENTIFIER  */
#line 196 "parser.y"
                  { (yyval.node) = create_node((yyvsp[0].str), 0); }
#line 1697 "parser.tab.c"
    break;

  case 68: /* expr: IDENTIFIER '(' args ')'  */
#line 197 "parser.y"
                               { (yyval.node) = create_node("CALL", 2, create_node((yyvsp[-3].str), 0), (yyvsp[-1].node)); }
#line 1703 "parser.tab.c"
    break;

  case 69: /* expr: INT_LITERAL  */
#line 198 "parser.y"
                   { (yyval.node) = create_node((yyvsp[0].str), 0); }
#line 1709 "parser.tab.c"
    break;

  case 70: /* expr: REAL_LITERAL  */
#line 199 "parser.y"
                    { (yyval.node) = create_node((yyvsp[0].str), 0); }
#line 1715 "parser.tab.c"
    break;

  case 71: /* expr: CHAR_LITERAL  */
#line 200 "parser.y"
                    { (yyval.node) = create_node((yyvsp[0].str), 0); }
#line 1721 "parser.tab.c"
    break;

  case 72: /* expr: STRING_LITERAL  */
#line 201 "parser.y"
                      { (yyval.node) = create_node((yyvsp[0].str), 0); }
#line 1727 "parser.tab.c"
    break;

  case 73: /* expr: TRUE  */
#line 202 "parser.y"
            { (yyval.node) = create_node("TRUE", 0); }
#line 1733 "parser.tab.c"
    break;

  case 74: /* expr: FALSE  */
#line 203 "parser.y"
             { (yyval.node) = create_node("FALSE", 0); }
#line 1739 "parser.tab.c"
    break;

  case 75: /* expr: NULL_T  */
#line 204 "parser.y"
              { (yyval.node) = create_node("NULL", 0); }
#line 1745 "parser.tab.c"
    break;


#line 1749 "parser.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 207 "parser.y"


void yyerror(const char* s) {
    printf("Syntax error at line %d: %s\n", yylineno, s);
    exit(1);
}

int main() {
    if (yyparse() == 0)
        print_ast(root, 0);
    return 0;
}

