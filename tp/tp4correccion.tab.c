
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
    flag_general = 0;
    flag_if = 0;
    flag_datos = 0;
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
     LITERALESCADENA = 270
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 30 "tp4correccion.y"

char cadena[30];
char caracter;
int entero;
int tipoDato;



/* Line 214 of yacc.c  */
#line 163 "tp4correccion.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 175 "tp4correccion.tab.c"

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
#define YYLAST   527

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  36
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  51
/* YYNRULES -- Number of rules.  */
#define YYNRULES  125
/* YYNRULES -- Number of states.  */
#define YYNSTATES  193

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   270

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      16,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    25,     2,     2,     2,    22,    24,     2,
      30,    31,    20,    18,    32,    19,     2,    21,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    33,
      26,    17,    27,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    28,     2,    29,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    34,    23,    35,     2,     2,     2,     2,
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
      15
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,     9,    12,    15,    18,    22,
      24,    26,    28,    31,    34,    37,    40,    43,    46,    49,
      52,    55,    57,    59,    62,    65,    67,    69,    71,    73,
      75,    77,    79,    82,    85,    88,    91,    94,    96,    98,
     100,   102,   104,   106,   111,   116,   118,   122,   123,   125,
     127,   131,   133,   135,   137,   139,   141,   143,   145,   147,
     151,   153,   157,   160,   162,   163,   166,   169,   170,   171,
     172,   182,   183,   184,   185,   194,   195,   196,   197,   207,
     208,   212,   213,   214,   215,   227,   228,   229,   230,   239,
     240,   241,   242,   253,   258,   260,   262,   264,   265,   266,
     271,   274,   276,   280,   283,   288,   290,   293,   297,   298,
     300,   302,   304,   305,   311,   316,   320,   323,   325,   329,
     332,   334,   335,   337,   339,   341
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      37,     0,    -1,    -1,    37,    38,    -1,    16,    -1,    81,
      16,    -1,    47,    16,    -1,     1,    16,    -1,    41,    40,
      39,    -1,    41,    -1,     1,    -1,    17,    -1,    18,    17,
      -1,    19,    17,    -1,    20,    17,    -1,    21,    17,    -1,
      22,    17,    -1,    23,    23,    -1,    24,    24,    -1,    17,
      17,    -1,    25,    17,    -1,    26,    -1,    27,    -1,    26,
      17,    -1,    27,    17,    -1,    18,    -1,    19,    -1,    20,
      -1,    21,    -1,    22,    -1,     1,    -1,    44,    -1,    43,
      41,    -1,    42,    41,    -1,    41,    42,    -1,    18,    18,
      -1,    19,    19,    -1,     1,    -1,    24,    -1,    20,    -1,
      25,    -1,     1,    -1,    46,    -1,    44,    28,    39,    29,
      -1,    44,    30,    45,    31,    -1,    39,    -1,    45,    32,
      39,    -1,    -1,     5,    -1,     3,    -1,    30,    39,    31,
      -1,    14,    -1,    15,    -1,     1,    -1,    48,    -1,    50,
      -1,    51,    -1,    63,    -1,    74,    -1,    13,    73,    33,
      -1,     1,    -1,    34,    49,    35,    -1,    49,    47,    -1,
      47,    -1,    -1,    39,    33,    -1,    39,    16,    -1,    -1,
      -1,    -1,     6,    52,    30,    39,    53,    31,    48,    54,
      58,    -1,    -1,    -1,    -1,     9,    55,    30,    39,    56,
      31,    48,    57,    -1,    -1,    -1,    -1,     7,    59,    30,
      39,    60,    31,    48,    61,    58,    -1,    -1,     8,    62,
      48,    -1,    -1,    -1,    -1,    12,    64,    30,    72,    33,
      73,    33,    73,    31,    48,    65,    -1,    -1,    -1,    -1,
      11,    66,    30,    39,    67,    31,    48,    68,    -1,    -1,
      -1,    -1,    10,    69,    48,    70,    11,    30,    39,    71,
      31,    33,    -1,     4,     5,    17,    39,    -1,    73,    -1,
       1,    -1,    39,    -1,    -1,    -1,     4,    76,    75,    80,
      -1,     1,    80,    -1,    77,    -1,    76,    32,    77,    -1,
       5,    78,    -1,     5,    78,    17,    79,    -1,     1,    -1,
      28,    29,    -1,    28,     3,    29,    -1,    -1,    39,    -1,
      33,    -1,     1,    -1,    -1,     4,     5,    82,    83,    86,
      -1,     1,    30,    31,    86,    -1,    30,    84,    31,    -1,
      30,    31,    -1,    85,    -1,    84,    32,    85,    -1,     4,
       5,    -1,     4,    -1,    -1,     1,    -1,    33,    -1,    48,
      -1,     1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    56,    56,    57,    59,    60,    61,    63,    72,    73,
      74,    76,    76,    76,    76,    76,    76,    77,    77,    77,
      77,    78,    78,    78,    78,    79,    79,    80,    80,    80,
      81,    83,    84,    85,    86,    88,    88,    88,    89,    89,
      89,    89,    91,    92,    93,    95,    96,    97,    99,   100,
     101,   102,   103,   104,   113,   114,   115,   116,   117,   118,
     119,   128,   130,   131,   132,   141,   142,   151,   151,   151,
     151,   152,   152,   152,   152,   154,   154,   154,   154,   155,
     155,   156,   166,   166,   166,   167,   167,   167,   167,   168,
     168,   168,   168,   170,   171,   172,   174,   175,   184,   184,
     185,   187,   188,   190,   191,   192,   195,   196,   197,   199,
     201,   202,   211,   211,   212,   214,   215,   217,   218,   220,
     221,   222,   223,   227,   228,   229
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUM", "TIPODATO", "IDENTIFICADOR", "IF",
  "ELSEIF", "ELSE", "SWITCH", "DO", "WHILE", "FOR", "RETURN", "CCARACTER",
  "LITERALESCADENA", "'\\n'", "'='", "'+'", "'-'", "'*'", "'/'", "'%'",
  "'|'", "'&'", "'!'", "'<'", "'>'", "'['", "']'", "'('", "')'", "','",
  "';'", "'{'", "'}'", "$accept", "input", "line", "expresion", "operador",
  "expUnaria", "incremento", "operUnario", "expPostfijo",
  "listaDeArgumentos", "expPrimaria", "sentencia", "sentCompuesta",
  "listaSentencias", "sentExpresion", "sentSeleccion", "$@1", "$@2", "$@3",
  "$@4", "$@5", "$@6", "estructura", "$@7", "$@8", "$@9", "$@10",
  "sentIteracion", "$@11", "$@12", "$@13", "$@14", "$@15", "$@16", "$@17",
  "$@18", "expOrDeclaracion", "expOP", "sentenciaDeclaracion", "$@19",
  "listaDeIdentificadores", "identificadoryAsignacion", "opcional",
  "valor", "finalizador", "declaracionyDefinicionDeFunciones", "$@20",
  "parametros", "listaDeParametros", "parametro", "cuerpo", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,    10,    61,    43,    45,
      42,    47,    37,   124,    38,    33,    60,    62,    91,    93,
      40,    41,    44,    59,   123,   125
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    36,    37,    37,    38,    38,    38,    38,    39,    39,
      39,    40,    40,    40,    40,    40,    40,    40,    40,    40,
      40,    40,    40,    40,    40,    40,    40,    40,    40,    40,
      40,    41,    41,    41,    41,    42,    42,    42,    43,    43,
      43,    43,    44,    44,    44,    45,    45,    45,    46,    46,
      46,    46,    46,    46,    47,    47,    47,    47,    47,    47,
      47,    48,    49,    49,    49,    50,    50,    52,    53,    54,
      51,    55,    56,    57,    51,    59,    60,    61,    58,    62,
      58,    58,    64,    65,    63,    66,    67,    68,    63,    69,
      70,    71,    63,    72,    72,    72,    73,    73,    75,    74,
      74,    76,    76,    77,    77,    77,    78,    78,    78,    79,
      80,    80,    82,    81,    81,    83,    83,    84,    84,    85,
      85,    85,    85,    86,    86,    86
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     2,     2,     2,     3,     1,
       1,     1,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     1,     1,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     2,     2,     2,     1,     1,     1,
       1,     1,     1,     4,     4,     1,     3,     0,     1,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     3,     2,     1,     0,     2,     2,     0,     0,     0,
       9,     0,     0,     0,     8,     0,     0,     0,     9,     0,
       3,     0,     0,     0,    11,     0,     0,     0,     8,     0,
       0,     0,    10,     4,     1,     1,     1,     0,     0,     4,
       2,     1,     3,     2,     4,     1,     2,     3,     0,     1,
       1,     1,     0,     5,     4,     3,     2,     1,     3,     2,
       1,     0,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     0,    49,     0,    48,    67,    71,    89,
      85,    82,     0,    51,    52,     4,     0,     0,    39,    38,
      40,     0,     0,     3,     0,     0,     0,     0,    31,    42,
       0,    54,    55,    56,    57,    58,     0,   111,     7,     0,
     110,   100,   105,   108,    98,   101,     0,     0,     0,     0,
       0,    37,    96,     0,    35,    36,     0,     0,     0,    63,
       0,    66,    65,    30,    11,    25,    26,    27,    28,    29,
       0,     0,     0,    21,    22,     0,    34,    53,     0,     0,
       0,     0,     6,     5,     0,     0,   103,     0,     0,     0,
       0,     0,    90,     0,     0,    59,    50,   108,    61,    62,
      19,    12,    13,    14,    15,    16,    17,    18,    20,    23,
      24,     8,    37,     0,    45,     0,   125,   123,   124,   114,
       0,   106,     0,     0,     0,   102,    99,    68,    72,     0,
      86,    37,     0,     0,    94,    43,    44,     0,   107,   109,
     104,   122,   120,   116,     0,   117,   113,     0,     0,     0,
       0,     0,     0,    46,   119,   115,     0,     0,     0,     0,
       0,     0,     0,   118,    69,    73,    91,    87,    93,     0,
      81,    74,     0,    88,     0,    75,    79,    70,     0,     0,
       0,     0,    92,    83,     0,    80,    84,    76,     0,     0,
      77,    81,    78
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    23,    52,    75,    25,    26,    27,    28,   115,
      29,    30,    31,    60,    32,    33,    46,   147,   170,    47,
     148,   171,   177,   180,   188,   191,   181,    34,    50,   186,
      49,   150,   173,    48,   129,   172,   133,    53,    35,    89,
      44,    45,    86,   140,    41,    36,    87,   124,   144,   145,
     119
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -92
static const yytype_int16 yypact[] =
{
     -92,   211,   -92,   269,   -92,    26,   -92,   -92,   -92,   -92,
     -92,   -92,   384,   -92,   -92,   -92,   -12,    -7,   -92,   -92,
     -92,   450,     4,   -92,    14,   130,   476,   476,    21,   -92,
      17,   -92,   -92,   -92,   -92,   -92,    25,   -92,   -92,    15,
     -92,   -92,   -92,    30,    18,   -92,    54,    58,    33,    61,
      63,   351,   -92,    32,   -92,   -92,    64,   175,    35,   -92,
     243,   -92,   -92,   494,    77,    36,    47,    81,    86,    87,
      76,    84,    88,    92,    99,   450,   -92,   484,   297,   324,
     450,   410,   -92,   -92,    10,    23,   100,    96,    35,    24,
     450,   450,   -92,   450,    82,   -92,   -92,    94,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,    98,   -92,    37,   -92,   -92,   -92,   -92,
     104,   -92,   450,    31,    10,   -92,   -92,   -92,   -92,   117,
     -92,    97,   124,   102,   -92,   -92,   -92,   450,   -92,   -92,
     -92,   -92,   132,   -92,    39,   -92,   -92,   107,   108,   110,
     112,   127,   384,   -92,   -92,   -92,    44,    33,    33,   450,
      33,   450,   131,   -92,   -92,   -92,   -92,   -92,   -92,   442,
      65,   -92,   114,   -92,   134,   -92,   -92,   -92,   133,    33,
     111,    33,   -92,   -92,   450,   -92,   -92,   -92,   136,    33,
     -92,    65,   -92
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -92,   -92,   -92,    -1,   -92,    55,   -23,   -92,   -92,   -92,
     -92,   -18,   -47,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -22,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -91,   -92,   -92,
     -92,    80,   -92,   -92,    83,   -92,   -92,   -92,   -92,    19,
      46
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -122
static const yytype_int16 yytable[] =
{
      24,    92,    76,   134,    59,    57,    54,     4,    58,     6,
       7,   116,    55,     8,     9,    10,    11,    12,    13,    14,
      56,    24,    16,    17,    18,    37,   120,    42,    19,    20,
      61,    43,   141,    82,    21,   142,    42,   118,    22,   -64,
      97,    83,    99,   117,    22,   141,    84,    62,   142,    80,
      88,    81,   121,   101,    54,    76,    76,    40,    85,    24,
    -112,   162,   143,  -121,   102,    95,    55,    22,   136,   137,
     155,   156,   175,   176,   111,  -121,  -121,   118,   174,   113,
     114,    78,    79,   131,    90,     4,   132,     6,    91,   127,
     128,    93,   130,    94,   100,    96,    13,    14,   103,   106,
      16,    17,    18,   104,   105,   108,    19,    20,   107,   109,
     164,   165,    21,   167,   -53,   -97,   110,   122,   -53,   -53,
     -53,   139,    85,   -53,   -53,   -53,   123,   135,   149,   151,
     -10,    63,   183,   138,   185,   152,   153,   154,   157,   158,
     159,   184,   190,   160,   161,   178,    -9,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,   166,    -9,
     168,    -9,    -9,    -9,   169,   179,   182,   189,   125,   192,
     146,     0,   126,     0,     0,   163,    37,     0,   -37,   -60,
     -37,   -60,     0,   187,   -60,   -60,   -60,   -60,   -60,   -37,
     -37,   -10,   -53,   -37,   -37,   -37,   -53,   -53,   -53,   -37,
     -37,   -53,   -53,   -53,     0,   -37,     0,     0,    40,   -60,
     -60,     2,     3,     0,     4,     5,     6,     7,     0,     0,
       8,     9,    10,    11,    12,    13,    14,    15,     0,    16,
      17,    18,     0,     0,     0,    19,    20,     0,     0,     0,
       0,    21,     0,     0,    57,    22,     4,    58,     6,     7,
       0,     0,     8,     9,    10,    11,    12,    13,    14,     0,
       0,    16,    17,    18,     0,     0,     0,    19,    20,     0,
      37,     0,   -37,    21,   -37,     0,     0,    22,    98,     0,
       0,     0,     0,   -37,   -37,    38,   -53,   -37,   -37,   -37,
     -53,   -53,   -53,   -37,   -37,   -53,   -53,   -53,   112,    39,
       0,     0,    40,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -33,   -33,    16,    17,   -33,   -33,   -33,
     -33,   -33,   -33,   -33,   -33,   112,   -33,     0,   -33,   -33,
     -33,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -32,   -32,    16,    17,   -32,   -32,   -32,   -32,   -32,   -32,
     -32,   -32,   -10,   -32,     0,   -32,   -32,   -32,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -10,   -53,     0,
       0,     0,   -53,   -53,   -53,     0,     0,   -53,   -53,   -53,
     -10,     0,   -10,   -10,   -10,    51,     0,     4,     0,     6,
       0,     0,     0,     0,     0,     0,     0,     0,    13,    14,
       0,     0,    16,    17,    18,     0,     0,     0,    19,    20,
       0,    51,     0,     4,    21,     6,     0,   -97,     0,     0,
       0,     0,     0,     0,    13,    14,     0,     0,    16,    17,
      18,     0,     0,     0,    19,    20,     0,     0,     0,     0,
      21,   -47,   -47,    51,     0,     4,     0,     6,     0,     0,
       0,    51,     0,     4,     0,     6,    13,    14,     0,     0,
      16,    17,    18,     0,    13,    14,    19,    20,    16,    17,
      18,     0,    21,   -97,    19,    20,     0,    77,     0,     4,
      21,     6,     0,     0,     0,   -37,     0,   -37,     0,   -37,
      13,    14,     0,     0,    16,    17,    18,     0,   -37,   -37,
      19,    20,   -37,   -37,   -37,     0,    21,     0,   -37,   -37,
     -37,   -37,     0,     0,   -37,   -37,   -37,   -37,     0,     0,
     -37,   -37,     0,   -37,     0,   -37,   -37,   -37
};

static const yytype_int16 yycheck[] =
{
       1,    48,    25,    94,    22,     1,    18,     3,     4,     5,
       6,     1,    19,     9,    10,    11,    12,    13,    14,    15,
      21,    22,    18,    19,    20,     1,     3,     1,    24,    25,
      16,     5,     1,    16,    30,     4,     1,    84,    34,    35,
       5,    16,    60,    33,    34,     1,    31,    33,     4,    28,
      32,    30,    29,    17,    18,    78,    79,    33,    28,    60,
      30,   152,    31,    32,    17,    33,    19,    34,    31,    32,
      31,    32,     7,     8,    75,    31,    32,   124,   169,    80,
      81,    26,    27,     1,    30,     3,     4,     5,    30,    90,
      91,    30,    93,    30,    17,    31,    14,    15,    17,    23,
      18,    19,    20,    17,    17,    17,    24,    25,    24,    17,
     157,   158,    30,   160,    17,    33,    17,    17,    21,    22,
      23,   122,    28,    26,    27,    28,    30,    29,    11,     5,
      33,     1,   179,    29,   181,    33,   137,     5,    31,    31,
      30,    30,   189,    31,    17,    31,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,   159,    29,
     161,    31,    32,    33,    33,    31,    33,    31,    88,   191,
     124,    -1,    89,    -1,    -1,   156,     1,    -1,     3,     4,
       5,     6,    -1,   184,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    -1,    30,    -1,    -1,    33,    34,
      35,     0,     1,    -1,     3,     4,     5,     6,    -1,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    -1,    -1,    -1,    24,    25,    -1,    -1,    -1,
      -1,    30,    -1,    -1,     1,    34,     3,     4,     5,     6,
      -1,    -1,     9,    10,    11,    12,    13,    14,    15,    -1,
      -1,    18,    19,    20,    -1,    -1,    -1,    24,    25,    -1,
       1,    -1,     3,    30,     5,    -1,    -1,    34,    35,    -1,
      -1,    -1,    -1,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,     1,    30,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,     1,    29,    -1,    31,    32,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,     1,    29,    -1,    31,    32,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    16,    17,    -1,
      -1,    -1,    21,    22,    23,    -1,    -1,    26,    27,    28,
      29,    -1,    31,    32,    33,     1,    -1,     3,    -1,     5,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    14,    15,
      -1,    -1,    18,    19,    20,    -1,    -1,    -1,    24,    25,
      -1,     1,    -1,     3,    30,     5,    -1,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    14,    15,    -1,    -1,    18,    19,
      20,    -1,    -1,    -1,    24,    25,    -1,    -1,    -1,    -1,
      30,    31,    32,     1,    -1,     3,    -1,     5,    -1,    -1,
      -1,     1,    -1,     3,    -1,     5,    14,    15,    -1,    -1,
      18,    19,    20,    -1,    14,    15,    24,    25,    18,    19,
      20,    -1,    30,    31,    24,    25,    -1,     1,    -1,     3,
      30,     5,    -1,    -1,    -1,     1,    -1,     3,    -1,     5,
      14,    15,    -1,    -1,    18,    19,    20,    -1,    14,    15,
      24,    25,    18,    19,    20,    -1,    30,    -1,    24,    25,
      16,    17,    -1,    -1,    30,    21,    22,    23,    -1,    -1,
      26,    27,    -1,    29,    -1,    31,    32,    33
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    37,     0,     1,     3,     4,     5,     6,     9,    10,
      11,    12,    13,    14,    15,    16,    18,    19,    20,    24,
      25,    30,    34,    38,    39,    41,    42,    43,    44,    46,
      47,    48,    50,    51,    63,    74,    81,     1,    16,    30,
      33,    80,     1,     5,    76,    77,    52,    55,    69,    66,
      64,     1,    39,    73,    18,    19,    39,     1,     4,    47,
      49,    16,    33,     1,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    40,    42,     1,    41,    41,
      28,    30,    16,    16,    31,    28,    78,    82,    32,    75,
      30,    30,    48,    30,    30,    33,    31,     5,    35,    47,
      17,    17,    17,    17,    17,    17,    23,    24,    17,    17,
      17,    39,     1,    39,    39,    45,     1,    33,    48,    86,
       3,    29,    17,    30,    83,    77,    80,    39,    39,    70,
      39,     1,     4,    72,    73,    29,    31,    32,    29,    39,
      79,     1,     4,    31,    84,    85,    86,    53,    56,    11,
      67,     5,    33,    39,     5,    31,    32,    31,    31,    30,
      31,    17,    73,    85,    48,    48,    39,    48,    39,    33,
      54,    57,    71,    68,    73,     7,     8,    58,    31,    31,
      59,    62,    33,    48,    30,    48,    65,    39,    60,    31,
      48,    61,    58
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
#line 59 "tp4correccion.y"
    { flag_error=0; printf("\n"); ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 60 "tp4correccion.y"
    { flag_error=0; printf("\n----------------------------------------------------------------------------------\n"); ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 61 "tp4correccion.y"
    { flag_general=0; flag_error=0; printf("\n----------------------------------------------------------------------------------\n"); ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 63 "tp4correccion.y"
    { flag_error=0; printf("No se reconocio la entrada\n"); printf("\n----------------------------------------------------------------------------------\n"); ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 74 "tp4correccion.y"
    { flag_expresion = 1; ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 81 "tp4correccion.y"
    { printf("Un \"OPERADOR\" no es valido\n"); flag_expresion = 1; ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 88 "tp4correccion.y"
    { printf("Un \"OPERADOR\" no es valido\n"); flag_expresion = 1; ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 89 "tp4correccion.y"
    { printf("Un \"OPERADOR\" no es valido\n"); flag_expresion = 1; ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 104 "tp4correccion.y"
    { printf("No se reconocio la \"CATEGORIA LEXICA\"\n"); flag_expresion = 1; ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 113 "tp4correccion.y"
    { if(flag_SentCompuesta == 0) { printf("Se declaro correctamente una \"SENTENCIA COMPUESTA\"\n"); flag_general = 0; }     else { printf("Error al declarar la \"SENTENCIA COMPUESTA\"\n");      flag_SentCompuesta = 0; flag_general = 1;} ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 114 "tp4correccion.y"
    { if(flag_SentExpresion == 0) { printf("Se declaro correctamente una \"SENTENCIA DE EXPRESION\"\n"); }  else { printf("Error al declarar la \"SENTENCIA DE EXPRESION\"\n");   flag_SentExpresion = 0; flag_sentencia = 1; flag_general = 1; } ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 115 "tp4correccion.y"
    { if(flag_SentControl == 0)   { printf("Se declaro correctamente una \"SENTENCIA DE CONTROL\"\n"); }    else { printf("Error al declarar la \"SENTENCIA DE CONTROL\"\n");     flag_SentControl = 0; flag_sentencia = 1; flag_general = 1; } ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 116 "tp4correccion.y"
    { if(flag_SentIteracion == 0) { printf("Se declaro correctamente una \"SENTENCIA DE ITERACION\"\n"); }  else { printf("Error al declarar la \"SENTENCIA DE ITERRACION\"\n");  flag_SentIteracion = 0; flag_sentencia = 1; flag_general = 1; } ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 117 "tp4correccion.y"
    { if(flag_SentDeclaraciones == 0){ printf("Se \"DECLARARON VARIABLES\" correctamente\n"); }             else { printf("Error al \"DECLARAR VARIABLES\"\n");                   flag_SentDeclaraciones = 0; flag_sentencia = 1; flag_general = 1;} ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 118 "tp4correccion.y"
    { if(flag_error == 0){ printf("Se declaro una sentencia de salto (RETURN) \n"); } ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 119 "tp4correccion.y"
    { if(flag_error == 0){ printf("Error al declarar una sentencia\n"); flag_error = 1; } ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 128 "tp4correccion.y"
    { if(flag_sentencia == 1){ flag_sentencia = 0; flag_SentCompuesta = 1;  };}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 132 "tp4correccion.y"
    {printf("No se declarado sentencias\n");;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 141 "tp4correccion.y"
    { if(flag_expresion == 1){ flag_SentExpresion = 1; flag_expresion = 0; };}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 142 "tp4correccion.y"
    { {printf("Falto un caracter de corte\n"); }  flag_SentExpresion = 1;  ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 151 "tp4correccion.y"
    { printf("Se declaro una sentencia \"IF\"\n"); ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 151 "tp4correccion.y"
    {if(flag_expresion==1){flag_expresion=0;flag_if=1;};}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 151 "tp4correccion.y"
    {if(flag_general==1){flag_if=1;};}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 151 "tp4correccion.y"
    {if(flag_if == 1){ flag_if=0; flag_SentControl=1; };}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 152 "tp4correccion.y"
    { printf("Se declaro una sentencia \"SWITCH\"\n"); ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 152 "tp4correccion.y"
    {if(flag_expresion==1){flag_expresion=0;flag_if=1;};}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 152 "tp4correccion.y"
    {if(flag_general==1){flag_if=1;};}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 152 "tp4correccion.y"
    {if(flag_if == 1){ flag_if=0; flag_SentControl=1; };}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 154 "tp4correccion.y"
    { if(flag_if == 0 ){ printf("Se declaro una sentencia \"ELSE IF\"\n"); } ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 154 "tp4correccion.y"
    {if(flag_expresion==1){flag_expresion=0;flag_if=1;};}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 154 "tp4correccion.y"
    {if(flag_general==1){flag_if=1;};}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 155 "tp4correccion.y"
    { if(flag_if == 0){ printf("Se declaro una sentencia \"ELSE\"\n"); } ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 155 "tp4correccion.y"
    {if(flag_general==1){flag_if=1;};}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 166 "tp4correccion.y"
    { printf("Se declaro un bucle \"FOR\"\n"); ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 166 "tp4correccion.y"
    {if(flag_general==1){flag_bucles=1;};}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 166 "tp4correccion.y"
    {if(flag_bucles == 1){flag_bucles=0; flag_SentIteracion=1; };}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 167 "tp4correccion.y"
    { printf("Se declaro un bucle \"WHILE\"\n"); ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 167 "tp4correccion.y"
    {if(flag_expresion==1){flag_expresion=0;flag_bucles=1;};}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 167 "tp4correccion.y"
    {if(flag_general==1){flag_bucles=1;};}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 167 "tp4correccion.y"
    {if(flag_bucles == 1){flag_bucles=0; flag_SentIteracion=1; };}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 168 "tp4correccion.y"
    { printf("Se declaro un bucle \"DO WHILE\"\n"); ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 168 "tp4correccion.y"
    {if(flag_general==1){flag_bucles=1;};}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 168 "tp4correccion.y"
    {if(flag_expresion ==1){flag_expresion=0;flag_bucles=1;};}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 168 "tp4correccion.y"
    {if(flag_bucles == 1){flag_bucles=0; flag_SentIteracion=1; };}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 170 "tp4correccion.y"
    { if(flag_expresion == 1){ printf("Un parametro no fue reconocido en la \"SENTENCIA DE ITERRACION\"\n"); flag_bucles = 1; flag_expresion = 0; ingresarSinRepetir(&listaIdentificador, (yyvsp[(1) - (4)].cadena), 2); } ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 172 "tp4correccion.y"
    { if(flag_bucles == 0 && flag_bucles == 0){ printf("Un parametro no fue reconocido en la \"SENTENCIA DE ITERRACION\"\n"); flag_bucles = 1; } ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 174 "tp4correccion.y"
    { if(flag_expresion == 1 && flag_bucles == 0){ printf("Un parametro no fue reconocido en la \"SENTENCIA DE ITERRACION\"\n"); flag_bucles = 1; flag_expresion = 0; } ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 184 "tp4correccion.y"
    { if(flag_datos == 0){ printf("Varibles de tipo \"%s\"\n", (yyvsp[(1) - (2)].cadena)); } ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 184 "tp4correccion.y"
    { if(flag_datos==1){flag_datos = 0; flag_SentDeclaraciones = 1;};}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 185 "tp4correccion.y"
    { printf("Falto el TIPO DE DATO\n"); flag_datos = 1; ;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 190 "tp4correccion.y"
    { if(flag_datos == 0){ ingresarSinRepetir(&listaIdentificador, (yyvsp[(1) - (2)].cadena), 1); } ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 191 "tp4correccion.y"
    { if(flag_datos == 0){ ingresarSinRepetir(&listaIdentificador, (yyvsp[(1) - (4)].cadena), 2); } ;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 192 "tp4correccion.y"
    { if(flag_datos == 0){ printf("Falta IDENTIFICADOR\n"); flag_datos = 1;} ;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 199 "tp4correccion.y"
    { if(flag_expresion == 1) { flag_expresion =0; flag_datos = 1;} ;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 202 "tp4correccion.y"
    { if(flag_datos == 0){ printf("Falto el caracter de corte\n"); flag_datos = 1;} ;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 211 "tp4correccion.y"
    { printf("Se identifico a la funcion \"%s\" de tipo \"%s\"\n", (yyvsp[(2) - (2)].cadena), (yyvsp[(1) - (2)].cadena)); ;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 211 "tp4correccion.y"
    { if(flag_funciones == 0){ printf("Se %s correctamente la funcion: \"%s\"\n", funcion, (yyvsp[(2) - (5)].cadena)); } else { printf("Se definio/declaro incorrectamente la funcion \"%s\"\n", (yyvsp[(2) - (5)].cadena)); flag_funciones = 0; } ;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 212 "tp4correccion.y"
    { printf("Se definio/declaro incorrectamente la funcion\n"); flag_funciones = 0; ;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 214 "tp4correccion.y"
    { if(flag_funciones == 0){ printf("Se declararon los parametros de la funcion correctamente\n"); } else{ printf("Se declararon incorrectamente los parametros de la funcion\n"); } ;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 215 "tp4correccion.y"
    { if(flag_funciones == 0){ printf("No se declararon parametros para la funcion\n"); } ;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 223 "tp4correccion.y"
    { flag_funciones = 1; ;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 227 "tp4correccion.y"
    { funcion = "declaro"; ;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 228 "tp4correccion.y"
    { if(flag_general ==1){flag_general =0; flag_funciones = 1; } funcion = "definio"; ;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 229 "tp4correccion.y"
    { printf("Se esperaba un punto y como o una sentencia compuesta\n"); flag_funciones = 1; ;}
    break;



/* Line 1455 of yacc.c  */
#line 2070 "tp4correccion.tab.c"
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
#line 233 "tp4correccion.y"


int main(){
    //yydebug = 1;
    //yyin = fopen("archivo.txt", "r");
    yyparse();
}

