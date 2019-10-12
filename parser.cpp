/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "parser.y" /* yacc.c:339  */

	#include <cstdio>
	#include <iostream>
	#include <string>
	#include "cafezinho.h"

	extern int yylineno;
	extern int yylex();
	void yyerror(const char* s);

#line 77 "parser.cpp" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.hpp".  */
#ifndef YY_YY_PARSER_HPP_INCLUDED
# define YY_YY_PARSER_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ID = 258,
    TIPO = 259,
    INTCONST = 260,
    carconst = 261,
    cadeiaCaracteres = 262,
    SE = 263,
    SENAO = 264,
    LEIA = 265,
    ESCREVA = 266,
    NOVALINHA = 267,
    ENTAO = 268,
    OR = 269,
    EQUAL = 270,
    DIF = 271,
    GEQ = 272,
    LEQ = 273,
    EXECUTE = 274,
    ENQUANTO = 275,
    RETURN = 276,
    PROGRAMA = 277,
    STRING = 278
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 12 "parser.y" /* yacc.c:355  */

	int *lex;

#line 145 "parser.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 162 "parser.cpp" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   183

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  25
/* YYNRULES -- Number of rules.  */
#define YYNRULES  72
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  159

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   279

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    43,     2,     2,     2,    42,     2,     2,
      28,    29,    40,    38,    27,    39,     2,    41,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    34,    24,
      36,    32,    37,    33,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    25,     2,    26,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    30,     2,    31,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21,    22,    23,    35
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    24,    24,    27,    28,    29,    30,    33,    36,    37,
      38,    41,    44,    45,    48,    49,    50,    51,    54,    55,
      58,    59,    60,    63,    64,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    80,    83,    84,    87,
      88,    91,    92,    95,    96,    99,   100,   101,   104,   105,
     106,   107,   108,   111,   112,   113,   116,   117,   118,   119,
     122,   123,   124,   127,   128,   131,   132,   133,   134,   135,
     136,   139,   140
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "TIPO", "INTCONST", "carconst",
  "cadeiaCaracteres", "SE", "SENAO", "LEIA", "ESCREVA", "NOVALINHA",
  "ENTAO", "OR", "EQUAL", "DIF", "GEQ", "LEQ", "EXECUTE", "ENQUANTO",
  "RETURN", "PROGRAMA", "STRING", "';'", "'['", "']'", "','", "'('", "')'",
  "'{'", "'}'", "'='", "'?'", "':'", "\"e\"", "'<'", "'>'", "'+'", "'-'",
  "'*'", "'/'", "'%'", "'!'", "$accept", "Programa", "DeclFuncVar",
  "DeclProg", "DeclVar", "DeclFunc", "ListaParametros",
  "ListaParametrosCont", "Bloco", "ListaDeclVar", "ListaComando",
  "Comando", "Expr", "AssignExpr", "CondExpr", "OrExpr", "AndExpr",
  "EqExpr", "DesigExpr", "AddExpr", "MulExpr", "UnExpr", "LValueExpr",
  "PrimExpr", "ListExpr", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,    59,    91,    93,    44,    40,    41,
     123,   125,    61,    63,    58,   279,    60,    62,    43,    45,
      42,    47,    37,    33
};
# endif

#define YYPACT_NINF -121

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-121)))

#define YYTABLE_NINF -65

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      31,    45,    57,    50,    72,  -121,    59,  -121,    75,   100,
     114,    82,    31,   121,  -121,   104,    51,   131,   106,  -121,
      31,  -121,   133,    21,   110,   134,  -121,    85,    59,  -121,
      99,    38,  -121,   112,   135,    16,   117,   115,    15,  -121,
      15,  -121,     8,     8,  -121,   111,    74,   120,  -121,  -121,
      -8,   113,     7,    91,    23,   -25,  -121,   118,  -121,   122,
     119,   123,   114,  -121,   142,   127,    15,    62,    15,   128,
     130,   132,   136,  -121,    15,   137,   126,    22,  -121,  -121,
    -121,  -121,  -121,    68,    15,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    15,    31,   110,
     125,  -121,   138,   121,   139,  -121,  -121,   102,   129,    15,
    -121,  -121,  -121,   140,  -121,  -121,    15,   113,   141,     7,
      91,    91,    23,    23,    23,    23,   -25,   -25,  -121,  -121,
    -121,  -121,  -121,  -121,   114,   110,  -121,   144,    15,  -121,
     146,   145,   143,   147,    68,  -121,   148,  -121,    74,  -121,
      74,  -121,  -121,   121,   154,  -121,  -121,    74,  -121
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       6,     0,     0,     0,    10,     1,     0,     2,     0,     0,
      12,     0,     6,    20,     7,     0,    10,     0,     0,    13,
       6,     5,     0,     0,    10,     0,     8,    14,     0,     3,
      10,    68,    70,     0,     0,     0,     0,     0,     0,    25,
       0,    19,     0,     0,    35,     0,    23,     0,    36,    37,
      39,    42,    44,    47,    52,    55,    59,     0,    62,     0,
       0,     0,     0,    11,     0,     0,     0,     0,     0,    64,
       0,     0,     0,    31,     0,     0,     0,    68,    60,    61,
      18,    24,    26,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     6,    10,
      15,    16,     0,    20,     0,    66,    71,     0,     0,     0,
      28,    30,    29,     0,    27,    69,     0,    41,     0,    43,
      45,    46,    50,    51,    48,    49,    53,    54,    56,    57,
      58,    38,     4,     9,     0,    10,    21,    67,     0,    65,
       0,     0,     0,     0,     0,    17,     0,    72,     0,    63,
       0,    67,    40,    20,    32,    34,    22,     0,    33
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -121,  -121,   -11,  -121,   -16,  -121,  -121,   -60,    -1,  -100,
     124,  -120,   -28,   -63,    13,  -121,    83,    89,   -18,    32,
       0,    20,   149,    90,  -121
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,     7,    11,    12,    18,    19,    44,    23,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,   107
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      26,    21,   101,   136,   106,    14,    83,    72,    59,    29,
      75,    77,    76,    32,    65,    94,    95,    96,    31,    31,
      32,    32,    86,    87,    31,    84,    32,    63,   154,    33,
     155,    34,    35,    36,   131,     1,    40,   158,   104,    71,
     108,    37,    38,    40,    40,    39,   113,   116,     4,    40,
      67,    13,    41,   156,    42,    42,   118,     5,    43,    43,
      42,    92,    93,    66,    43,    31,    67,    32,   120,   121,
     -64,    77,     6,    32,   145,   147,    25,    31,     9,    32,
      15,   141,    33,   133,    34,    35,    36,   132,   143,    13,
      40,   105,   126,   127,    37,    38,    40,     8,    39,     9,
      10,    42,    40,    16,    13,    43,    20,    42,    88,    89,
      61,    43,    62,    42,   128,   129,   130,    43,    17,   146,
     122,   123,   124,   125,    64,    22,     9,    90,    91,   138,
      24,   139,    78,    79,    27,    28,    30,     9,    69,    60,
      68,    73,    80,    74,    82,    99,    98,   102,    85,   100,
      97,   103,   134,   109,   110,   115,   111,   152,   140,   148,
     112,   114,   150,   157,   135,   137,   117,     0,     0,   142,
      81,   149,   153,   151,   119,   144,   -63,     0,     0,     0,
       0,     0,     0,    70
};

static const yytype_int16 yycheck[] =
{
      16,    12,    62,   103,    67,     6,    14,    35,    24,    20,
      38,     3,    40,     5,    30,    40,    41,    42,     3,     3,
       5,     5,    15,    16,     3,    33,     5,    28,   148,     8,
     150,    10,    11,    12,    97,     4,    28,   157,    66,    23,
      68,    20,    21,    28,    28,    24,    74,    25,     3,    28,
      28,    30,    31,   153,    39,    39,    84,     0,    43,    43,
      39,    38,    39,    25,    43,     3,    28,     5,    86,    87,
      32,     3,    22,     5,   134,   138,    25,     3,    27,     5,
       5,   109,     8,    99,    10,    11,    12,    98,   116,    30,
      28,    29,    92,    93,    20,    21,    28,    25,    24,    27,
      28,    39,    28,     3,    30,    43,    24,    39,    17,    18,
      25,    43,    27,    39,    94,    95,    96,    43,     4,   135,
      88,    89,    90,    91,    25,     4,    27,    36,    37,    27,
      26,    29,    42,    43,     3,    29,     3,    27,     3,     5,
      28,    24,    31,    28,    24,    26,    24,     5,    35,    26,
      32,    24,    27,    25,    24,    29,    24,   144,    29,    13,
      24,    24,    19,     9,    26,    26,    83,    -1,    -1,    29,
      46,    26,    24,    26,    85,    34,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    34
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,    45,    46,     3,     0,    22,    47,    25,    27,
      28,    48,    49,    30,    52,     5,     3,     4,    50,    51,
      24,    46,     4,    53,    26,    25,    48,     3,    29,    46,
       3,     3,     5,     8,    10,    11,    12,    20,    21,    24,
      28,    31,    39,    43,    52,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    48,
       5,    25,    27,    52,    25,    48,    25,    28,    28,     3,
      66,    23,    56,    24,    28,    56,    56,     3,    67,    67,
      31,    54,    24,    14,    33,    35,    15,    16,    17,    18,
      36,    37,    38,    39,    40,    41,    42,    32,    24,    26,
      26,    51,     5,    24,    56,    29,    57,    68,    56,    25,
      24,    24,    24,    56,    24,    29,    25,    60,    56,    61,
      62,    62,    63,    63,    63,    63,    64,    64,    65,    65,
      65,    57,    46,    48,    27,    26,    53,    26,    27,    29,
      29,    56,    29,    56,    34,    51,    48,    57,    13,    26,
      19,    26,    58,    24,    55,    55,    53,     9,    55
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    44,    45,    46,    46,    46,    46,    47,    48,    48,
      48,    49,    50,    50,    51,    51,    51,    51,    52,    52,
      53,    53,    53,    54,    54,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    55,    56,    57,    57,    58,
      58,    59,    59,    60,    60,    61,    61,    61,    62,    62,
      62,    62,    62,    63,    63,    63,    64,    64,    64,    64,
      65,    65,    65,    66,    66,    67,    67,    67,    67,    67,
      67,    68,    68
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     5,     8,     4,     0,     2,     3,     6,
       0,     4,     0,     1,     2,     4,     4,     6,     4,     3,
       0,     5,     8,     1,     2,     1,     2,     3,     3,     3,
       3,     2,     6,     8,     6,     1,     1,     1,     3,     1,
       5,     3,     1,     3,     1,     3,     3,     1,     3,     3,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     1,
       2,     2,     1,     4,     1,     4,     3,     4,     1,     3,
       1,     1,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
        case 2:
#line 24 "parser.y" /* yacc.c:1646  */
    {printf("1\n");}
#line 1348 "parser.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 27 "parser.y" /* yacc.c:1646  */
    {printf("2\n");}
#line 1354 "parser.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 28 "parser.y" /* yacc.c:1646  */
    {printf("3\n");}
#line 1360 "parser.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 29 "parser.y" /* yacc.c:1646  */
    {printf("4\n");}
#line 1366 "parser.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 30 "parser.y" /* yacc.c:1646  */
    {printf("5\n");}
#line 1372 "parser.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 33 "parser.y" /* yacc.c:1646  */
    {printf("6\n");}
#line 1378 "parser.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 36 "parser.y" /* yacc.c:1646  */
    {printf("7\n");}
#line 1384 "parser.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 37 "parser.y" /* yacc.c:1646  */
    {printf("8\n");}
#line 1390 "parser.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 38 "parser.y" /* yacc.c:1646  */
    {printf("9\n");}
#line 1396 "parser.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 41 "parser.y" /* yacc.c:1646  */
    {printf("10\n");}
#line 1402 "parser.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 44 "parser.y" /* yacc.c:1646  */
    {printf("11\n");}
#line 1408 "parser.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 45 "parser.y" /* yacc.c:1646  */
    {printf("12\n");}
#line 1414 "parser.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 48 "parser.y" /* yacc.c:1646  */
    {printf("13\n");}
#line 1420 "parser.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 49 "parser.y" /* yacc.c:1646  */
    {printf("14\n");}
#line 1426 "parser.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 50 "parser.y" /* yacc.c:1646  */
    {printf("15\n");}
#line 1432 "parser.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 51 "parser.y" /* yacc.c:1646  */
    {printf("16\n");}
#line 1438 "parser.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 54 "parser.y" /* yacc.c:1646  */
    {printf("17\n");}
#line 1444 "parser.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 55 "parser.y" /* yacc.c:1646  */
    {printf("18\n");}
#line 1450 "parser.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 58 "parser.y" /* yacc.c:1646  */
    {printf("19\n");}
#line 1456 "parser.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 59 "parser.y" /* yacc.c:1646  */
    {printf("20\n");}
#line 1462 "parser.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 60 "parser.y" /* yacc.c:1646  */
    {printf("21\n");}
#line 1468 "parser.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 63 "parser.y" /* yacc.c:1646  */
    {printf("22\n");}
#line 1474 "parser.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 64 "parser.y" /* yacc.c:1646  */
    {printf("23\n");}
#line 1480 "parser.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 67 "parser.y" /* yacc.c:1646  */
    {printf("24\n");}
#line 1486 "parser.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 68 "parser.y" /* yacc.c:1646  */
    {printf("25\n");}
#line 1492 "parser.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 69 "parser.y" /* yacc.c:1646  */
    {printf("26\n");}
#line 1498 "parser.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 70 "parser.y" /* yacc.c:1646  */
    {printf("27\n");}
#line 1504 "parser.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 71 "parser.y" /* yacc.c:1646  */
    {printf("28\n");}
#line 1510 "parser.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 72 "parser.y" /* yacc.c:1646  */
    {printf("29\n");}
#line 1516 "parser.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 73 "parser.y" /* yacc.c:1646  */
    {printf("30\n");}
#line 1522 "parser.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 74 "parser.y" /* yacc.c:1646  */
    {printf("31!\n");}
#line 1528 "parser.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 75 "parser.y" /* yacc.c:1646  */
    {printf("32!\n");}
#line 1534 "parser.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 76 "parser.y" /* yacc.c:1646  */
    {printf("33\n");}
#line 1540 "parser.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 77 "parser.y" /* yacc.c:1646  */
    {printf("34\n");}
#line 1546 "parser.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 80 "parser.y" /* yacc.c:1646  */
    {printf("35\n");}
#line 1552 "parser.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 83 "parser.y" /* yacc.c:1646  */
    {printf("36\n");}
#line 1558 "parser.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 84 "parser.y" /* yacc.c:1646  */
    {printf("37\n");}
#line 1564 "parser.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 87 "parser.y" /* yacc.c:1646  */
    {printf("38\n");}
#line 1570 "parser.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 88 "parser.y" /* yacc.c:1646  */
    {printf("39\n");}
#line 1576 "parser.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 91 "parser.y" /* yacc.c:1646  */
    {printf("40\n");}
#line 1582 "parser.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 92 "parser.y" /* yacc.c:1646  */
    {printf("41\n");}
#line 1588 "parser.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 95 "parser.y" /* yacc.c:1646  */
    {printf("42\n");}
#line 1594 "parser.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 96 "parser.y" /* yacc.c:1646  */
    {printf("43\n");}
#line 1600 "parser.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 99 "parser.y" /* yacc.c:1646  */
    {printf("44\n");}
#line 1606 "parser.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 100 "parser.y" /* yacc.c:1646  */
    {printf("45\n");}
#line 1612 "parser.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 101 "parser.y" /* yacc.c:1646  */
    {printf("46\n");}
#line 1618 "parser.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 104 "parser.y" /* yacc.c:1646  */
    {printf("47\n");}
#line 1624 "parser.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 105 "parser.y" /* yacc.c:1646  */
    {printf("48\n");}
#line 1630 "parser.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 106 "parser.y" /* yacc.c:1646  */
    {printf("49\n");}
#line 1636 "parser.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 107 "parser.y" /* yacc.c:1646  */
    {printf("50\n");}
#line 1642 "parser.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 108 "parser.y" /* yacc.c:1646  */
    {printf("51\n");}
#line 1648 "parser.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 111 "parser.y" /* yacc.c:1646  */
    {printf("52\n");}
#line 1654 "parser.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 112 "parser.y" /* yacc.c:1646  */
    {printf("53\n");}
#line 1660 "parser.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 113 "parser.y" /* yacc.c:1646  */
    {printf("54\n");}
#line 1666 "parser.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 116 "parser.y" /* yacc.c:1646  */
    {printf("55\n");}
#line 1672 "parser.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 117 "parser.y" /* yacc.c:1646  */
    {printf("56\n");}
#line 1678 "parser.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 118 "parser.y" /* yacc.c:1646  */
    {printf("57\n");}
#line 1684 "parser.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 119 "parser.y" /* yacc.c:1646  */
    {printf("58\n");}
#line 1690 "parser.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 122 "parser.y" /* yacc.c:1646  */
    {printf("59\n");}
#line 1696 "parser.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 123 "parser.y" /* yacc.c:1646  */
    {printf("60\n");}
#line 1702 "parser.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 124 "parser.y" /* yacc.c:1646  */
    {printf("61\n");}
#line 1708 "parser.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 127 "parser.y" /* yacc.c:1646  */
    {printf("62");}
#line 1714 "parser.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 128 "parser.y" /* yacc.c:1646  */
    {printf("63\n");}
#line 1720 "parser.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 131 "parser.y" /* yacc.c:1646  */
    {printf("64\n");}
#line 1726 "parser.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 132 "parser.y" /* yacc.c:1646  */
    {printf("65\n");}
#line 1732 "parser.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 133 "parser.y" /* yacc.c:1646  */
    {printf("66\n");}
#line 1738 "parser.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 134 "parser.y" /* yacc.c:1646  */
    {printf("67\n");}
#line 1744 "parser.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 135 "parser.y" /* yacc.c:1646  */
    {printf("68\n");}
#line 1750 "parser.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 139 "parser.y" /* yacc.c:1646  */
    {printf("69\n");}
#line 1756 "parser.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 140 "parser.y" /* yacc.c:1646  */
    {printf("70\n");}
#line 1762 "parser.cpp" /* yacc.c:1646  */
    break;


#line 1766 "parser.cpp" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
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
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 142 "parser.y" /* yacc.c:1906  */


void yyerror(const char *s) {
	fprintf(stderr, "ERRO! Linha: %d - %s\n", yylineno, s );
	exit(1);
}

int main(){

	yyparse();

	return 0;
}