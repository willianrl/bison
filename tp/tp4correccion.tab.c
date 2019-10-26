
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "tp4correccion.y"


#include <stdio.h>
#include <stdlib.h> // para el itoa y el malloc
#include "funcionesDeLista.h"
#define YYDEBUG 1

extern FILE *yyin;

Lista listaIdentificador = NULL,lista = NULL;

int flag_error = 0, 
    flag_SentDeclaraciones = 0, 
    flag_SentCompuesta = 0, 
    flag_SentIteracion = 0, 
    flag_SentExpresion = 0, 
    flag_SentControl = 0, 
    flag_funciones = 0,
    flag_expresion = 0,
    flag_sentencia = 0,
    flag_general = 0,
    flag_if = 0,
    flag_datos = 0,
    flag_bucles = 0;

char *funcion;



/* Line 189 of yacc.c  */
#line 103 "tp4correccion.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     NUM = 258,
     TIPODATO = 259,
     IDENTIFICADOR = 260,
     IF = 261,
     ELSEIF = 262,
     ELSE = 263,
     SWITCH = 264,
     DO = 265,
     WHILE = 266,
     FOR = 267,
     RETURN = 268,
     CCARACTER = 269,
     LITERALESCADENA = 270,
     AUTOASIGNACION = 271,
     COMPARACION = 272
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 30 "tp4correccion.y"

struct{
  char cadena[30];
  char caracter;
  int entero;
  int tipo;
}s;




/* Line 214 of yacc.c  */
#line 168 "tp4correccion.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 180 "tp4correccion.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   584

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  36
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  53
/* YYNRULES -- Number of rules.  */
#define YYNRULES  120
/* YYNRULES -- Number of states.  */
#define YYNSTATES  192

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   272

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      18,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    27,     2,     2,     2,    26,    21,     2,
      30,    31,    24,    22,    32,    23,     2,    25,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    33,
       2,    19,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    28,     2,    29,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    34,    20,    35,     2,     2,     2,     2,
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
      15,    16,    17
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,     9,    12,    15,    18,    21,
      23,    25,    29,    31,    33,    35,    37,    41,    43,    46,
      49,    51,    53,    55,    57,    59,    61,    63,    65,    68,
      71,    74,    77,    80,    82,    84,    86,    88,    90,    92,
      97,   102,   104,   108,   109,   111,   115,   117,   119,   121,
     123,   125,   127,   129,   131,   133,   137,   139,   143,   146,
     148,   149,   152,   155,   156,   157,   158,   168,   169,   170,
     171,   180,   181,   182,   183,   193,   194,   198,   199,   200,
     201,   213,   214,   215,   216,   225,   226,   227,   228,   239,
     244,   246,   248,   250,   251,   252,   257,   260,   262,   266,
     269,   274,   277,   279,   282,   286,   287,   289,   291,   292,
     298,   303,   307,   310,   312,   316,   319,   321,   323,   325,
     327
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      37,     0,    -1,    -1,    37,    38,    -1,    18,    -1,    83,
      18,    -1,    50,    18,    -1,    39,    18,    -1,     1,    18,
      -1,    40,    -1,     1,    -1,    44,    41,    40,    -1,    42,
      -1,    19,    -1,    16,    -1,     1,    -1,    44,    43,    42,
      -1,    44,    -1,    20,    20,    -1,    21,    21,    -1,    17,
      -1,    22,    -1,    23,    -1,    24,    -1,    25,    -1,    26,
      -1,     1,    -1,    47,    -1,    46,    44,    -1,    45,    44,
      -1,    44,    45,    -1,    22,    22,    -1,    23,    23,    -1,
       1,    -1,    21,    -1,    24,    -1,    27,    -1,     1,    -1,
      49,    -1,    47,    28,    39,    29,    -1,    47,    30,    48,
      31,    -1,    39,    -1,    48,    32,    39,    -1,    -1,     3,
      -1,    30,    39,    31,    -1,    14,    -1,    15,    -1,     5,
      -1,     1,    -1,    51,    -1,    53,    -1,    54,    -1,    66,
      -1,    77,    -1,    13,    76,    33,    -1,     1,    -1,    34,
      52,    35,    -1,    52,    50,    -1,    50,    -1,    -1,    39,
      33,    -1,    39,    18,    -1,    -1,    -1,    -1,     6,    55,
      30,    39,    56,    31,    51,    57,    61,    -1,    -1,    -1,
      -1,     9,    58,    30,    39,    59,    31,    51,    60,    -1,
      -1,    -1,    -1,     7,    62,    30,    39,    63,    31,    51,
      64,    61,    -1,    -1,     8,    65,    51,    -1,    -1,    -1,
      -1,    12,    67,    30,    75,    33,    76,    33,    76,    31,
      51,    68,    -1,    -1,    -1,    -1,    11,    69,    30,    39,
      70,    31,    51,    71,    -1,    -1,    -1,    -1,    10,    72,
      51,    73,    11,    30,    39,    74,    31,    33,    -1,     4,
       5,    19,    39,    -1,    76,    -1,     1,    -1,    39,    -1,
      -1,    -1,     4,    79,    78,    82,    -1,     1,    82,    -1,
      80,    -1,    79,    32,    80,    -1,     5,    81,    -1,     5,
      81,    19,    39,    -1,     3,    81,    -1,     1,    -1,    28,
      29,    -1,    28,     3,    29,    -1,    -1,    33,    -1,     1,
      -1,    -1,     4,     5,    84,    85,    88,    -1,     1,    30,
      31,    88,    -1,    30,    86,    31,    -1,    30,    31,    -1,
      87,    -1,    86,    32,    87,    -1,     4,     5,    -1,     4,
      -1,     1,    -1,    33,    -1,    51,    -1,     1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    61,    61,    62,    64,    65,    66,    67,    68,    78,
      79,    81,    82,    84,    84,    84,    86,    87,    90,    90,
      91,    92,    92,    93,    93,    93,    94,    96,    97,    98,
      99,   101,   101,   101,   102,   102,   102,   102,   104,   105,
     106,   108,   109,   110,   112,   113,   114,   115,   116,   117,
     127,   128,   129,   130,   131,   132,   133,   142,   144,   145,
     146,   155,   156,   165,   165,   165,   165,   166,   166,   166,
     166,   168,   168,   168,   168,   169,   169,   170,   180,   180,
     180,   181,   181,   181,   181,   182,   182,   182,   182,   184,
     185,   186,   188,   189,   198,   198,   199,   201,   202,   204,
     205,   206,   207,   210,   211,   212,   214,   215,   224,   224,
     225,   227,   228,   230,   231,   233,   234,   235,   239,   240,
     241
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUM", "TIPODATO", "IDENTIFICADOR", "IF",
  "ELSEIF", "ELSE", "SWITCH", "DO", "WHILE", "FOR", "RETURN", "CCARACTER",
  "LITERALESCADENA", "AUTOASIGNACION", "COMPARACION", "'\\n'", "'='",
  "'|'", "'&'", "'+'", "'-'", "'*'", "'/'", "'%'", "'!'", "'['", "']'",
  "'('", "')'", "','", "';'", "'{'", "'}'", "$accept", "input", "line",
  "expresion", "expAsignacion", "operAsignacion", "expBinaria",
  "operBinario", "expUnaria", "incremento", "operUnario", "expPostfijo",
  "listaDeArgumentos", "expPrimaria", "sentencia", "sentCompuesta",
  "listaSentencias", "sentExpresion", "sentSeleccion", "$@1", "$@2", "$@3",
  "$@4", "$@5", "$@6", "estructura", "$@7", "$@8", "$@9", "$@10",
  "sentIteracion", "$@11", "$@12", "$@13", "$@14", "$@15", "$@16", "$@17",
  "$@18", "expOrDeclaracion", "expOP", "sentenciaDeclaracion", "$@19",
  "listaDeIdentificadores", "identificadoryAsignacion", "opcional",
  "finalizador", "declaracionyDefinicionDeFunciones", "$@20", "parametros",
  "listaDeParametros", "parametro", "cuerpo", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,    10,    61,
     124,    38,    43,    45,    42,    47,    37,    33,    91,    93,
      40,    41,    44,    59,   123,   125
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    36,    37,    37,    38,    38,    38,    38,    38,    39,
      39,    40,    40,    41,    41,    41,    42,    42,    43,    43,
      43,    43,    43,    43,    43,    43,    43,    44,    44,    44,
      44,    45,    45,    45,    46,    46,    46,    46,    47,    47,
      47,    48,    48,    48,    49,    49,    49,    49,    49,    49,
      50,    50,    50,    50,    50,    50,    50,    51,    52,    52,
      52,    53,    53,    55,    56,    57,    54,    58,    59,    60,
      54,    62,    63,    64,    61,    65,    61,    61,    67,    68,
      66,    69,    70,    71,    66,    72,    73,    74,    66,    75,
      75,    75,    76,    76,    78,    77,    77,    79,    79,    80,
      80,    80,    80,    81,    81,    81,    82,    82,    84,    83,
      83,    85,    85,    86,    86,    87,    87,    87,    88,    88,
      88
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     2,     2,     2,     2,     1,
       1,     3,     1,     1,     1,     1,     3,     1,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       2,     2,     2,     1,     1,     1,     1,     1,     1,     4,
       4,     1,     3,     0,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     3,     2,     1,
       0,     2,     2,     0,     0,     0,     9,     0,     0,     0,
       8,     0,     0,     0,     9,     0,     3,     0,     0,     0,
      11,     0,     0,     0,     8,     0,     0,     0,    10,     4,
       1,     1,     1,     0,     0,     4,     2,     1,     3,     2,
       4,     2,     1,     2,     3,     0,     1,     1,     0,     5,
       4,     3,     2,     1,     3,     2,     1,     1,     1,     1,
       1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     0,    44,     0,    48,    63,    67,    85,
      81,    78,     0,    46,    47,     4,    34,     0,     0,    35,
      36,     0,     0,     3,     0,     9,    12,     0,     0,     0,
      27,    38,     0,    50,    51,    52,    53,    54,     0,   107,
       8,     0,   106,    96,   102,   105,   105,    94,    97,     0,
       0,     0,     0,     0,    33,    92,     0,    31,    32,     0,
       0,     0,     0,    59,     0,     7,    61,    15,    14,    20,
      13,     0,     0,    21,    22,    23,    24,    25,     0,     0,
      30,    49,     0,     0,     0,     0,     6,     5,     0,     0,
     101,    99,     0,     0,     0,     0,     0,    86,     0,     0,
      55,    45,   105,    62,    57,    58,    18,    19,    11,    16,
       0,    33,     0,    41,     0,   120,   118,   119,   110,     0,
     103,     0,     0,     0,    98,    95,    64,    68,     0,    82,
      33,     0,     0,    90,    26,    39,    40,     0,   104,   100,
     117,   116,   112,     0,   113,   109,     0,     0,     0,     0,
       0,     0,    42,   115,   111,     0,     0,     0,     0,     0,
       0,     0,   114,    65,    69,    87,    83,    89,     0,    77,
      70,     0,    84,     0,    71,    75,    66,     0,     0,     0,
       0,    88,    79,     0,    76,    80,    72,     0,     0,    73,
      77,    74
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    23,    55,    25,    78,    26,    79,    27,    28,
      29,    30,   114,    31,    32,    33,    64,    34,    35,    49,
     146,   169,    50,   147,   170,   176,   179,   187,   190,   180,
      36,    53,   185,    52,   149,   172,    51,   128,   171,   132,
      56,    37,    94,    47,    48,    91,    43,    38,    92,   123,
     143,   144,   118
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -97
static const yytype_int16 yypact[] =
{
     -97,    13,   -97,   237,   -97,     7,   -97,   -97,   -97,   -97,
     -97,   -97,   376,   -97,   -97,   -97,   -97,   -11,    10,   -97,
     -97,   470,   139,   -97,    -3,   -97,   -97,   265,   498,   498,
      48,   -97,    26,   -97,   -97,   -97,   -97,   -97,    64,   -97,
     -97,    57,   -97,   -97,   -97,    62,    51,    60,   -97,    66,
      70,    59,    73,    78,    85,   -97,    79,   -97,   -97,    84,
     174,    86,    27,   -97,   209,   -97,   -97,   541,   -97,   -97,
     -97,    99,   100,   -11,    10,   -97,   -97,   -97,   498,   498,
     -97,   526,   291,   317,   470,   407,   -97,   -97,     8,    46,
     -97,   105,    97,    86,     6,   470,   470,   -97,   470,    47,
     -97,   -97,    62,   -97,   -97,   -97,   -97,   -97,   -97,   -97,
     343,   -97,   104,   -97,    22,   -97,   -97,   -97,   -97,   108,
     -97,   470,    28,     8,   -97,   -97,   -97,   -97,   118,   -97,
     106,   130,   113,   -97,   551,   -97,   -97,   470,   -97,   -97,
     -97,   136,   -97,    34,   -97,   -97,   116,   124,   126,   127,
     145,   376,   -97,   -97,   -97,    63,    59,    59,   470,    59,
     470,   132,   -97,   -97,   -97,   -97,   -97,   -97,   439,    91,
     -97,   137,   -97,   140,   -97,   -97,   -97,   134,    59,   142,
      59,   -97,   -97,   470,   -97,   -97,   -97,   150,    59,   -97,
      91,   -97
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -97,   -97,   -97,    -1,    92,   -97,   138,   -97,   -23,   -25,
     -97,   -97,   -97,   -97,   -18,   -50,   -97,   -97,   -97,   -97,
     -97,   -97,   -97,   -97,   -97,   -14,   -97,   -97,   -97,   -97,
     -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,
     -96,   -97,   -97,   -97,   110,   160,   112,   -97,   -97,   -97,
     -97,    56,    93
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -109
static const yytype_int16 yytable[] =
{
      24,    97,    80,   133,    63,    82,    83,    39,    44,   115,
      45,    57,    46,     2,     3,    65,     4,     5,     6,     7,
      59,    62,     8,     9,    10,    11,    12,    13,    14,   140,
      66,    15,   141,    58,    16,    17,    18,    19,   117,    42,
      20,   116,    22,    21,    86,   103,   105,    22,   130,   119,
       4,   131,     6,   136,   137,   161,   110,    80,    80,   142,
      66,    13,    14,    62,   140,   154,   155,   141,    16,    17,
      18,    19,   173,   117,    20,   120,    84,    21,    85,    89,
     -93,  -108,    87,   112,   113,    80,   -10,    44,    88,    45,
      89,   102,    93,    22,   126,   127,    95,   129,   174,   175,
      96,   -49,   -49,    98,   -49,   -49,   163,   164,    99,   166,
     -49,   -49,   100,   -49,   -10,   101,   -10,   -10,   -10,   106,
     139,   107,   -49,   -49,   121,   -49,   -49,   122,   182,   148,
     184,   -49,   -49,   135,   -49,   150,   152,   138,   189,   -10,
      60,   153,     4,    61,     6,     7,   151,   156,     8,     9,
      10,    11,    12,    13,    14,   157,   158,   165,   159,   167,
      16,    17,    18,    19,   160,   168,    20,   181,   177,    21,
     108,   178,   183,    22,   -60,    39,   191,   -33,   -56,   -33,
     -56,   188,   186,   -56,   -56,   -56,   -56,   -56,   -33,   -33,
     -49,   -49,   -10,   -49,   -49,   -33,   -33,   -33,   -33,   -49,
     -49,   -33,   -49,   124,   -33,    90,   125,    42,   -56,   -56,
      60,   162,     4,    61,     6,     7,   145,   109,     8,     9,
      10,    11,    12,    13,    14,     0,     0,     0,     0,     0,
      16,    17,    18,    19,     0,     0,    20,     0,    39,    21,
     -33,     0,   -33,    22,   104,     0,     0,     0,     0,     0,
       0,   -33,   -33,   -49,   -49,    40,   -49,   -49,   -33,   -33,
     -33,   -33,   -49,   -49,   -33,   -49,    67,    41,     0,     0,
      42,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    68,    69,   -17,    70,    71,    72,    73,    74,    75,
      76,    77,   111,     0,   -17,     0,   -17,   -17,   -17,     0,
       0,     0,     0,     0,     0,     0,     0,   -29,   -29,   -29,
     -29,   -29,   -29,    17,    18,   -29,   -29,   -29,   111,     0,
     -29,     0,   -29,   -29,   -29,     0,     0,     0,     0,     0,
       0,     0,     0,   -28,   -28,   -28,   -28,   -28,   -28,    17,
      18,   -28,   -28,   -28,   134,     0,   -28,     0,   -28,   -28,
     -28,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      69,   -17,     0,    71,    72,    73,    74,    75,    76,    77,
       0,     0,   -17,     0,   -17,   -17,   -17,    54,     0,     4,
       0,     6,     0,     0,     0,     0,     0,     0,     0,     0,
      13,    14,     0,     0,     0,     0,     0,    16,    17,    18,
      19,     0,     0,    20,     0,     0,    21,     0,    54,   -93,
       4,     0,     6,     0,     0,     0,     0,     0,     0,     0,
       0,    13,    14,     0,     0,     0,     0,     0,    16,    17,
      18,    19,     0,     0,    20,     0,     0,    21,   -43,   -43,
      54,     0,     4,     0,     6,     0,     0,     0,     0,     0,
       0,     0,     0,    13,    14,     0,     0,     0,     0,     0,
      16,    17,    18,    19,     0,     0,    20,     0,     0,    21,
     -93,    54,     0,     4,     0,     6,     0,     0,     0,     0,
       0,     0,     0,     0,    13,    14,     0,     0,     0,     0,
       0,    16,    17,    18,    19,     0,     0,    20,     0,    81,
      21,     4,     0,     6,     0,     0,     0,     0,     0,     0,
       0,     0,    13,    14,     0,     0,     0,     0,     0,    16,
      17,    18,    19,     0,     0,    20,     0,   -33,    21,   -33,
       0,   -33,     0,     0,     0,     0,     0,     0,     0,     0,
     -33,   -33,     0,     0,     0,     0,     0,   -33,   -33,   -33,
     -33,     0,     0,   -33,     0,     0,   -33,   -33,   -33,   -33,
     -33,   -33,     0,     0,     0,     0,   -33,   -33,   -33,   -33,
     -33,   -33,   -33,   -33,   -33,     0,   -33,   -33,     0,     0,
     -33,     0,   -33,   -33,   -33
};

static const yytype_int16 yycheck[] =
{
       1,    51,    27,    99,    22,    28,    29,     1,     1,     1,
       3,    22,     5,     0,     1,    18,     3,     4,     5,     6,
      21,    22,     9,    10,    11,    12,    13,    14,    15,     1,
      33,    18,     4,    23,    21,    22,    23,    24,    88,    33,
      27,    33,    34,    30,    18,    18,    64,    34,     1,     3,
       3,     4,     5,    31,    32,   151,    79,    82,    83,    31,
      33,    14,    15,    64,     1,    31,    32,     4,    21,    22,
      23,    24,   168,   123,    27,    29,    28,    30,    30,    28,
      33,    30,    18,    84,    85,   110,     1,     1,    31,     3,
      28,     5,    32,    34,    95,    96,    30,    98,     7,     8,
      30,    16,    17,    30,    19,    20,   156,   157,    30,   159,
      25,    26,    33,    28,    29,    31,    31,    32,    33,    20,
     121,    21,    16,    17,    19,    19,    20,    30,   178,    11,
     180,    25,    26,    29,    28,     5,   137,    29,   188,    33,
       1,     5,     3,     4,     5,     6,    33,    31,     9,    10,
      11,    12,    13,    14,    15,    31,    30,   158,    31,   160,
      21,    22,    23,    24,    19,    33,    27,    33,    31,    30,
      78,    31,    30,    34,    35,     1,   190,     3,     4,     5,
       6,    31,   183,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    93,    30,    45,    94,    33,    34,    35,
       1,   155,     3,     4,     5,     6,   123,    79,     9,    10,
      11,    12,    13,    14,    15,    -1,    -1,    -1,    -1,    -1,
      21,    22,    23,    24,    -1,    -1,    27,    -1,     1,    30,
       3,    -1,     5,    34,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,     1,    30,    -1,    -1,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     1,    -1,    29,    -1,    31,    32,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     1,    -1,
      29,    -1,    31,    32,    33,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     1,    -1,    29,    -1,    31,    32,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      17,    18,    -1,    20,    21,    22,    23,    24,    25,    26,
      -1,    -1,    29,    -1,    31,    32,    33,     1,    -1,     3,
      -1,     5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      14,    15,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,
      24,    -1,    -1,    27,    -1,    -1,    30,    -1,     1,    33,
       3,    -1,     5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    14,    15,    -1,    -1,    -1,    -1,    -1,    21,    22,
      23,    24,    -1,    -1,    27,    -1,    -1,    30,    31,    32,
       1,    -1,     3,    -1,     5,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    14,    15,    -1,    -1,    -1,    -1,    -1,
      21,    22,    23,    24,    -1,    -1,    27,    -1,    -1,    30,
      31,     1,    -1,     3,    -1,     5,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    14,    15,    -1,    -1,    -1,    -1,
      -1,    21,    22,    23,    24,    -1,    -1,    27,    -1,     1,
      30,     3,    -1,     5,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    14,    15,    -1,    -1,    -1,    -1,    -1,    21,
      22,    23,    24,    -1,    -1,    27,    -1,     1,    30,     3,
      -1,     5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      14,    15,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,
      24,    -1,    -1,    27,    -1,    -1,    30,    16,    17,    18,
      19,    20,    -1,    -1,    -1,    -1,    25,    26,    17,    18,
      29,    20,    31,    32,    33,    -1,    25,    26,    -1,    -1,
      29,    -1,    31,    32,    33
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    37,     0,     1,     3,     4,     5,     6,     9,    10,
      11,    12,    13,    14,    15,    18,    21,    22,    23,    24,
      27,    30,    34,    38,    39,    40,    42,    44,    45,    46,
      47,    49,    50,    51,    53,    54,    66,    77,    83,     1,
      18,    30,    33,    82,     1,     3,     5,    79,    80,    55,
      58,    72,    69,    67,     1,    39,    76,    22,    23,    39,
       1,     4,    39,    50,    52,    18,    33,     1,    16,    17,
      19,    20,    21,    22,    23,    24,    25,    26,    41,    43,
      45,     1,    44,    44,    28,    30,    18,    18,    31,    28,
      81,    81,    84,    32,    78,    30,    30,    51,    30,    30,
      33,    31,     5,    18,    35,    50,    20,    21,    40,    42,
      44,     1,    39,    39,    48,     1,    33,    51,    88,     3,
      29,    19,    30,    85,    80,    82,    39,    39,    73,    39,
       1,     4,    75,    76,     1,    29,    31,    32,    29,    39,
       1,     4,    31,    86,    87,    88,    56,    59,    11,    70,
       5,    33,    39,     5,    31,    32,    31,    31,    30,    31,
      19,    76,    87,    51,    51,    39,    51,    39,    33,    57,
      60,    74,    71,    76,     7,     8,    61,    31,    31,    62,
      65,    33,    51,    30,    51,    68,    39,    63,    31,    51,
      64,    61
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 4:

/* Line 1455 of yacc.c  */
#line 64 "tp4correccion.y"
    { flag_error=0; printf("\n"); ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 65 "tp4correccion.y"
    { flag_error=0;                                         printf("\n----------------------------------------------------------------------------------\n"); ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 66 "tp4correccion.y"
    { flag_general=0; flag_error=0;                         printf("\n----------------------------------------------------------------------------------\n"); ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 67 "tp4correccion.y"
    { flag_error=0;                                         printf("\n----------------------------------------------------------------------------------\n"); ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 68 "tp4correccion.y"
    { flag_error=0; printf("No se reconocio la entrada\n"); printf("\n----------------------------------------------------------------------------------\n"); ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 79 "tp4correccion.y"
    { flag_expresion = 1; ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 84 "tp4correccion.y"
    { printf("Un \"OPERADOR\" no es valido\n"); flag_expresion = 1; ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 86 "tp4correccion.y"
    { control( (yyvsp[(1) - (3)].s.tipo), (yyvsp[(2) - (3)].s.caracter), (yyvsp[(3) - (3)].s.tipo)); ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 94 "tp4correccion.y"
    { printf("Un \"OPERADOR\" no es valido\n"); flag_expresion = 1; ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 101 "tp4correccion.y"
    { printf("Un \"OPERADOR\" no es valido\n"); flag_expresion = 1; ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 102 "tp4correccion.y"
    { printf("Un \"OPERADOR\" no es valido\n"); flag_expresion = 1; ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 117 "tp4correccion.y"
    { printf("No se reconocio la \"CATEGORIA LEXICA\"\n"); flag_expresion = 1; ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 127 "tp4correccion.y"
    { if(flag_SentCompuesta == 0) { printf("Se declaro correctamente una \"SENTENCIA COMPUESTA\"\n"); flag_general = 0; }     else { printf("Error al declarar la \"SENTENCIA COMPUESTA\"\n");      flag_SentCompuesta = 0; flag_general = 1;} ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 128 "tp4correccion.y"
    { if(flag_SentExpresion == 0) { printf("Se declaro correctamente una \"SENTENCIA DE EXPRESION\"\n"); }  else { printf("Error al declarar la \"SENTENCIA DE EXPRESION\"\n");   flag_SentExpresion = 0; flag_sentencia = 1; flag_general = 1; } ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 129 "tp4correccion.y"
    { if(flag_SentControl == 0)   { printf("Se declaro correctamente una \"SENTENCIA DE CONTROL\"\n"); }    else { printf("Error al declarar la \"SENTENCIA DE CONTROL\"\n");     flag_SentControl = 0; flag_sentencia = 1; flag_general = 1; } ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 130 "tp4correccion.y"
    { if(flag_SentIteracion == 0) { printf("Se declaro correctamente una \"SENTENCIA DE ITERACION\"\n"); }  else { printf("Error al declarar la \"SENTENCIA DE ITERRACION\"\n");  flag_SentIteracion = 0; flag_sentencia = 1; flag_general = 1; } ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 131 "tp4correccion.y"
    { if(flag_SentDeclaraciones == 0){ printf("Se \"DECLARARON VARIABLES\" correctamente\n"); }             else { printf("Error al \"DECLARAR VARIABLES\"\n");                   flag_SentDeclaraciones = 0; flag_sentencia = 1; flag_general = 1;} ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 132 "tp4correccion.y"
    { if(flag_error == 0){ printf("Se declaro una sentencia de salto (RETURN) \n"); } ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 133 "tp4correccion.y"
    { if(flag_error == 0){ printf("Error al declarar una sentencia\n"); flag_error = 1; } ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 142 "tp4correccion.y"
    { if(flag_sentencia == 1){ flag_sentencia = 0; flag_SentCompuesta = 1;  };}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 146 "tp4correccion.y"
    {printf("No se declarado sentencias\n");;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 155 "tp4correccion.y"
    { if(flag_expresion == 1){ flag_SentExpresion = 1; flag_expresion = 0; };}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 156 "tp4correccion.y"
    { {printf("Falto un caracter de corte\n"); }  flag_SentExpresion = 1;  ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 165 "tp4correccion.y"
    { printf("Se declaro una sentencia \"IF\"\n"); ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 165 "tp4correccion.y"
    {if(flag_expresion==1){flag_expresion=0;flag_if=1;};}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 165 "tp4correccion.y"
    {if(flag_general==1){flag_if=1;};}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 165 "tp4correccion.y"
    {if(flag_if == 1){ flag_if=0; flag_SentControl=1; };}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 166 "tp4correccion.y"
    { printf("Se declaro una sentencia \"SWITCH\"\n"); ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 166 "tp4correccion.y"
    {if(flag_expresion==1){flag_expresion=0;flag_if=1;};}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 166 "tp4correccion.y"
    {if(flag_general==1){flag_if=1;};}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 166 "tp4correccion.y"
    {if(flag_if == 1){ flag_if=0; flag_SentControl=1; };}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 168 "tp4correccion.y"
    { if(flag_if == 0 ){ printf("Se declaro una sentencia \"ELSE IF\"\n"); } ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 168 "tp4correccion.y"
    {if(flag_expresion==1){flag_expresion=0;flag_if=1;};}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 168 "tp4correccion.y"
    {if(flag_general==1){flag_if=1;};}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 169 "tp4correccion.y"
    { if(flag_if == 0){ printf("Se declaro una sentencia \"ELSE\"\n"); } ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 169 "tp4correccion.y"
    {if(flag_general==1){flag_if=1;};}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 180 "tp4correccion.y"
    { printf("Se declaro un bucle \"FOR\"\n"); ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 180 "tp4correccion.y"
    {if(flag_general==1){flag_bucles=1;};}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 180 "tp4correccion.y"
    {if(flag_bucles == 1){flag_bucles=0; flag_SentIteracion=1; };}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 181 "tp4correccion.y"
    { printf("Se declaro un bucle \"WHILE\"\n"); ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 181 "tp4correccion.y"
    {if(flag_expresion==1){flag_expresion=0;flag_bucles=1;};}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 181 "tp4correccion.y"
    {if(flag_general==1){flag_bucles=1;};}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 181 "tp4correccion.y"
    {if(flag_bucles == 1){flag_bucles=0; flag_SentIteracion=1; };}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 182 "tp4correccion.y"
    { printf("Se declaro un bucle \"DO WHILE\"\n"); ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 182 "tp4correccion.y"
    {if(flag_general==1){flag_bucles=1;};}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 182 "tp4correccion.y"
    {if(flag_expresion ==1){flag_expresion=0;flag_bucles=1;};}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 182 "tp4correccion.y"
    {if(flag_bucles == 1){flag_bucles=0; flag_SentIteracion=1; };}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 184 "tp4correccion.y"
    { if(flag_expresion == 1){ printf("Un parametro no fue reconocido en la \"SENTENCIA DE ITERRACION\"\n"); flag_bucles = 1; flag_expresion = 0; ingresarSinRepetir(&listaIdentificador, (yyvsp[(1) - (4)].s.cadena), 2); } ;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 186 "tp4correccion.y"
    { if(flag_bucles == 0 && flag_bucles == 0){ printf("Un parametro no fue reconocido en la \"SENTENCIA DE ITERRACION\"\n"); flag_bucles = 1; } ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 188 "tp4correccion.y"
    { if(flag_expresion == 1 && flag_bucles == 0){ printf("Un parametro no fue reconocido en la \"SENTENCIA DE ITERRACION\"\n"); flag_bucles = 1; flag_expresion = 0; } ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 198 "tp4correccion.y"
    { if(flag_datos == 0){ printf("Varibles de tipo \"%s\"\n", (yyvsp[(1) - (2)].s.cadena)); } ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 198 "tp4correccion.y"
    { if(flag_datos==1){flag_datos = 0; flag_SentDeclaraciones = 1;};}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 199 "tp4correccion.y"
    { printf("Falto el TIPO DE DATO\n"); flag_datos = 1; ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 204 "tp4correccion.y"
    { if(flag_datos == 0){ ingresarSinRepetir(&listaIdentificador, (yyvsp[(1) - (2)].s.cadena), 1); } ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 205 "tp4correccion.y"
    { if(flag_datos == 0){ ingresarSinRepetir(&listaIdentificador, (yyvsp[(1) - (4)].s.cadena), 2); } ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 206 "tp4correccion.y"
    { printf(" errror LValue \n"); flag_datos = 1;;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 207 "tp4correccion.y"
    { if(flag_datos == 0){ printf("Falta IDENTIFICADOR\n"); flag_datos = 1;} ;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 215 "tp4correccion.y"
    { if(flag_datos == 0){ printf("Falto el caracter de corte\n"); flag_datos = 1;} ;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 224 "tp4correccion.y"
    { printf("Se identifico a la funcion \"%s\" de tipo \"%s\"\n", (yyvsp[(2) - (2)].s.cadena), (yyvsp[(1) - (2)].s.cadena)); ;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 224 "tp4correccion.y"
    { if(flag_funciones == 0){ printf("Se %s correctamente la funcion: \"%s\"\n", funcion, (yyvsp[(2) - (5)].s.cadena)); } else { printf("Se definio/declaro incorrectamente la funcion \"%s\"\n", (yyvsp[(2) - (5)].s.cadena)); flag_funciones = 0; } ;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 225 "tp4correccion.y"
    { printf("Se definio/declaro incorrectamente la funcion\n"); flag_funciones = 0; ;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 227 "tp4correccion.y"
    { if(flag_funciones == 0){ printf("Se declararon los parametros de la funcion correctamente\n"); } else{ printf("Se declararon incorrectamente los parametros de la funcion\n"); } ;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 228 "tp4correccion.y"
    { if(flag_funciones == 0){ printf("No se declararon parametros para la funcion\n"); } ;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 235 "tp4correccion.y"
    { flag_funciones = 1; ;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 239 "tp4correccion.y"
    { funcion = "declaro"; ;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 240 "tp4correccion.y"
    { if(flag_general ==1){flag_general =0; flag_funciones = 1; }; funcion = "definio"; ;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 241 "tp4correccion.y"
    { printf("Se esperaba un punto y como o una sentencia compuesta\n"); flag_funciones = 1; ;}
    break;



/* Line 1455 of yacc.c  */
#line 2107 "tp4correccion.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 245 "tp4correccion.y"


int main(){
    //yydebug = 1;
    yyin = fopen("archivo.txt", "r");
	
    yyparse();
	mostrarTodo();
}

