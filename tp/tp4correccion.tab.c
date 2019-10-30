
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
#include <string.h>
#include "funcionesDeLista.h"
#define YYDEBUG 1

extern FILE *yyin;
extern int yylineno;

Lista listaIdentificador = NULL,lista = NULL;

Funciones listaFunciones = NULL;

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
char tipoDato[20] = "hola";
int funcionRepetida = 0;



/* Line 189 of yacc.c  */
#line 109 "tp4correccion.tab.c"

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
     IDENTIFICADOR = 258,
     NUM = 259,
     CCARACTER = 260,
     HEXA = 261,
     OCTAL = 262,
     REAL = 263,
     LITERALESCADENA = 264,
     TIPODATO = 265,
     IF = 266,
     ELSEIF = 267,
     ELSE = 268,
     SWITCH = 269,
     DO = 270,
     WHILE = 271,
     FOR = 272,
     RETURN = 273,
     OR = 274,
     AND = 275,
     INCREMENTO = 276,
     DECREMENTO = 277,
     SUMAASIGNACION = 278,
     RESTAASIGNACION = 279,
     MULTIASIGNACION = 280,
     DIVASIGNACION = 281,
     RESTOASIGNACION = 282,
     MENORIGUAL = 283,
     MAYORIGUAL = 284,
     IGUALDAD = 285,
     DISTINTO = 286
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 36 "tp4correccion.y"

struct{
  char cadena[30];
  char caracter;
  int entero;
  int tipo;
}s;




/* Line 214 of yacc.c  */
#line 188 "tp4correccion.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 200 "tp4correccion.tab.c"

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
#define YYLAST   624

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  53
/* YYNRULES -- Number of rules.  */
#define YYNRULES  128
/* YYNRULES -- Number of states.  */
#define YYNSTATES  196

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   286

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      32,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    42,     2,     2,     2,    40,    41,     2,
      45,    46,    38,    36,    47,    37,     2,    39,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    48,
      34,    33,    35,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    43,     2,    44,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    49,     2,    50,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,     9,    12,    15,    18,    20,
      24,    26,    28,    30,    32,    34,    36,    38,    40,    42,
      46,    48,    50,    52,    54,    56,    58,    60,    62,    64,
      66,    68,    70,    72,    74,    76,    79,    82,    85,    87,
      89,    91,    93,    95,    97,    99,   101,   106,   111,   113,
     117,   118,   120,   124,   126,   128,   130,   132,   134,   136,
     138,   140,   142,   146,   148,   153,   157,   160,   161,   164,
     165,   166,   167,   177,   178,   179,   180,   189,   190,   191,
     192,   202,   203,   207,   208,   209,   210,   222,   223,   224,
     225,   234,   235,   236,   237,   248,   253,   255,   257,   259,
     260,   261,   266,   268,   272,   275,   280,   283,   285,   288,
     292,   293,   295,   297,   298,   305,   310,   313,   315,   317,
     321,   324,   326,   328,   330,   332,   334,   336,   339
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      52,     0,    -1,    -1,    52,    53,    -1,    32,    -1,    97,
      32,    -1,    64,    32,    -1,     1,    32,    -1,    56,    -1,
      61,    55,    54,    -1,     1,    -1,    33,    -1,    23,    -1,
      24,    -1,    25,    -1,    26,    -1,    27,    -1,     1,    -1,
      58,    -1,    58,    57,    56,    -1,    19,    -1,    20,    -1,
      34,    -1,    35,    -1,    28,    -1,    29,    -1,    31,    -1,
      30,    -1,    36,    -1,    37,    -1,    38,    -1,    39,    -1,
      40,    -1,     1,    -1,    61,    -1,    60,    58,    -1,    59,
      58,    -1,    58,    59,    -1,    21,    -1,    22,    -1,     1,
      -1,    41,    -1,    38,    -1,    42,    -1,     1,    -1,    63,
      -1,    61,    43,    54,    44,    -1,    61,    45,    62,    46,
      -1,    54,    -1,    62,    47,    54,    -1,    -1,     4,    -1,
      45,    54,    46,    -1,     5,    -1,     9,    -1,     3,    -1,
       1,    -1,    65,    -1,    67,    -1,    68,    -1,    80,    -1,
      91,    -1,    18,    90,    48,    -1,     1,    -1,    49,   103,
      66,    50,    -1,    64,   103,    66,    -1,    64,   103,    -1,
      -1,    54,    48,    -1,    -1,    -1,    -1,    11,    69,    45,
      54,    46,    70,    65,    71,    75,    -1,    -1,    -1,    -1,
      14,    72,    45,    54,    46,    73,    65,    74,    -1,    -1,
      -1,    -1,    12,    76,    45,    54,    77,    46,    65,    78,
      75,    -1,    -1,    13,    79,    65,    -1,    -1,    -1,    -1,
      17,    81,    45,    89,    48,    90,    48,    90,    46,    65,
      82,    -1,    -1,    -1,    -1,    16,    83,    45,    54,    84,
      46,    65,    85,    -1,    -1,    -1,    -1,    15,    86,    65,
      87,    16,    45,    54,    88,    46,    48,    -1,    10,     3,
      33,    54,    -1,    90,    -1,     1,    -1,    54,    -1,    -1,
      -1,    10,    93,    92,    96,    -1,    94,    -1,    93,    47,
      94,    -1,     3,    95,    -1,     3,    95,    33,    54,    -1,
       4,    95,    -1,     1,    -1,    43,    44,    -1,    43,     4,
      44,    -1,    -1,    48,    -1,     1,    -1,    -1,    10,     3,
      45,    98,    99,   102,    -1,     1,    45,    46,   102,    -1,
     100,    46,    -1,    46,    -1,   101,    -1,   100,    47,   101,
      -1,    10,     3,    -1,    10,    -1,     1,    -1,    48,    -1,
      65,    -1,     1,    -1,    32,    -1,   103,    32,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    89,    89,    91,    95,    96,    97,    98,   111,   112,
     113,   117,   118,   119,   120,   121,   122,   123,   127,   128,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   149,   150,   151,   152,   156,   157,
     158,   162,   163,   164,   165,   169,   170,   171,   175,   176,
     177,   181,   182,   183,   184,   185,   186,   196,   197,   198,
     199,   200,   201,   202,   212,   216,   217,   218,   228,   239,
     239,   239,   239,   240,   240,   240,   240,   244,   244,   244,
     244,   245,   245,   246,   257,   257,   257,   258,   258,   258,
     258,   259,   259,   259,   259,   263,   264,   265,   269,   270,
     280,   280,   285,   286,   290,   291,   292,   293,   298,   299,
     300,   304,   305,   311,   311,   312,   316,   317,   321,   322,
     326,   327,   328,   332,   333,   334,   345,   346,   347
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFICADOR", "NUM", "CCARACTER",
  "HEXA", "OCTAL", "REAL", "LITERALESCADENA", "TIPODATO", "IF", "ELSEIF",
  "ELSE", "SWITCH", "DO", "WHILE", "FOR", "RETURN", "OR", "AND",
  "INCREMENTO", "DECREMENTO", "SUMAASIGNACION", "RESTAASIGNACION",
  "MULTIASIGNACION", "DIVASIGNACION", "RESTOASIGNACION", "MENORIGUAL",
  "MAYORIGUAL", "IGUALDAD", "DISTINTO", "'\\n'", "'='", "'<'", "'>'",
  "'+'", "'-'", "'*'", "'/'", "'%'", "'&'", "'!'", "'['", "']'", "'('",
  "')'", "','", "';'", "'{'", "'}'", "$accept", "input", "line",
  "expresion", "operAsignacion", "expBinaria", "operBinario", "expUnaria",
  "incremento", "operUnario", "expPostfijo", "listaDeArgumentos",
  "expPrimaria", "sentencia", "sentCompuesta", "listaSentencias",
  "sentExpresion", "sentSeleccion", "$@1", "$@2", "$@3", "$@4", "$@5",
  "$@6", "estructura", "$@7", "$@8", "$@9", "$@10", "sentIteracion",
  "$@11", "$@12", "$@13", "$@14", "$@15", "$@16", "$@17", "$@18",
  "expOrDeclaracion", "expOP", "sentenciaDeclaracion", "$@19",
  "listaDeIdentificadores", "identificadoryAsignacion", "opcional",
  "finalizador", "declaracionyDefinicionDeFunciones", "$@20", "parametros",
  "listaDeParametros", "parametro", "cuerpo", "opcionSalto", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,    10,    61,    60,    62,    43,    45,    42,    47,
      37,    38,    33,    91,    93,    40,    41,    44,    59,   123,
     125
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    51,    52,    52,    53,    53,    53,    53,    54,    54,
      54,    55,    55,    55,    55,    55,    55,    55,    56,    56,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    58,    58,    58,    58,    59,    59,
      59,    60,    60,    60,    60,    61,    61,    61,    62,    62,
      62,    63,    63,    63,    63,    63,    63,    64,    64,    64,
      64,    64,    64,    64,    65,    66,    66,    66,    67,    69,
      70,    71,    68,    72,    73,    74,    68,    76,    77,    78,
      75,    79,    75,    75,    81,    82,    80,    83,    84,    85,
      80,    86,    87,    88,    80,    89,    89,    89,    90,    90,
      92,    91,    93,    93,    94,    94,    94,    94,    95,    95,
      95,    96,    96,    98,    97,    97,    99,    99,   100,   100,
     101,   101,   101,   102,   102,   102,   103,   103,   103
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     2,     2,     2,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     4,     1,     3,
       0,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     4,     3,     2,     0,     2,     0,
       0,     0,     9,     0,     0,     0,     8,     0,     0,     0,
       9,     0,     3,     0,     0,     0,    11,     0,     0,     0,
       8,     0,     0,     0,    10,     4,     1,     1,     1,     0,
       0,     4,     1,     3,     2,     4,     2,     1,     2,     3,
       0,     1,     1,     0,     6,     4,     2,     1,     1,     3,
       2,     1,     1,     1,     1,     1,     1,     2,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,    56,    55,    51,    53,    54,     0,    69,
      73,    91,    87,    84,     0,    38,    39,     4,    42,    41,
      43,     0,   128,     3,     0,     8,     0,     0,     0,     0,
      45,     0,    57,    58,    59,    60,    61,     0,     7,     0,
     107,   110,   110,   100,   102,     0,     0,     0,     0,     0,
      56,    98,     0,     0,   126,     0,    68,    40,    20,    21,
      24,    25,    27,    26,    22,    23,    28,    29,    30,    31,
      32,     0,    37,    56,     0,    34,     0,    17,    12,    13,
      14,    15,    16,    11,     0,     0,     0,     6,     5,     0,
       0,   113,   104,   106,     0,     0,     0,     0,    92,     0,
       0,    62,    52,    56,     0,   127,   128,     0,    19,    40,
       0,    48,     0,     9,   125,   123,   124,   115,     0,   108,
       0,     0,   110,   103,   112,   111,   101,     0,     0,     0,
      88,    56,     0,     0,    96,     0,    64,    46,    47,     0,
     109,   122,   121,   117,     0,     0,   118,   105,    70,    74,
       0,     0,     0,     0,    65,    49,   120,   114,   116,     0,
       0,     0,     0,     0,     0,     0,   119,    71,    75,    93,
      89,    95,     0,    83,    76,     0,    90,     0,    77,    81,
      72,     0,     0,     0,     0,    94,    85,     0,    82,    86,
      78,     0,     0,    79,    83,    80
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    23,    51,    86,    25,    71,    26,    27,    28,
      29,   112,    30,   106,    32,   107,    33,    34,    45,   160,
     173,    46,   161,   174,   180,   183,   191,   194,   184,    35,
      49,   189,    48,   151,   176,    47,   129,   175,   133,    52,
      36,    95,    43,    44,    92,   126,    37,   120,   144,   145,
     146,   117,    55
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -98
static const yytype_int16 yypact[] =
{
     -98,   155,   -98,   414,   -98,   -98,   -98,   -98,    70,   -98,
     -98,   -98,   -98,   -98,   423,   -98,   -98,   -98,   -98,   -98,
     -98,   526,   -21,   -98,   -41,   -98,   304,   548,   548,   273,
     -98,    23,   -98,   -98,   -98,   -98,   -98,    40,   -98,   -28,
     -98,    37,     2,    30,   -98,    36,    42,    43,    52,    57,
      85,   -98,    55,    58,   -98,   198,   -98,   557,   -98,   -98,
     -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,
     -98,   548,   -98,   579,   335,    48,   366,   -98,   -98,   -98,
     -98,   -98,   -98,   -98,   526,   478,   526,   -98,   -98,    11,
      13,   -98,    72,   -98,    75,    15,   526,   526,   -98,   526,
       5,   -98,   -98,    20,    75,   -98,   -21,    59,   -98,   -98,
      64,   -98,   -14,   -98,   -98,   -98,   -98,   -98,    66,   -98,
      18,   526,     2,   -98,   -98,   -98,   -98,    65,    67,    96,
     -98,   469,   111,    69,   -98,   241,   -98,   -98,   -98,   526,
     -98,   -98,   116,   -98,    11,    -7,   -98,   -98,   -98,   -98,
      76,    78,    89,   423,   -98,   -98,   -98,   -98,   -98,    12,
      43,    43,   526,    43,   526,    77,   -98,   -98,   -98,   -98,
     -98,   -98,   500,    54,   -98,    82,   -98,    90,   -98,   -98,
     -98,    87,    43,    95,    43,   -98,   -98,   526,   -98,   -98,
     -98,    97,    43,   -98,    54,   -98
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -98,   -98,   -98,    -1,   -98,    71,   -98,    73,   -25,   -98,
     -23,   -98,   -98,   140,   -45,     9,   -98,   -98,   -98,   -98,
     -98,   -98,   -98,   -98,   -49,   -98,   -98,   -98,   -98,   -98,
     -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,   -97,
     -98,   -98,   -98,    56,   104,   -98,   -98,   -98,   -98,   -98,
     -11,     7,    46
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -100
static const yytype_int16 yytable[] =
{
      24,    72,    98,   134,    75,    75,   131,    56,     4,     5,
       6,    54,   114,   141,     7,   132,   124,   118,    89,   141,
      53,   -40,   142,   -40,   -40,   -40,    15,    16,   142,   -40,
     -63,   -63,   138,   139,   -63,   -63,   -63,   -63,   -63,   158,
     159,   -40,   -40,    18,   116,    90,    19,    20,    75,    72,
      21,    72,   -63,   -99,    24,    87,   165,   119,   -40,   115,
      22,   -40,   -40,   125,   143,   -40,   178,   179,   -10,   -63,
     -63,    40,    88,    41,    42,   177,    40,    94,   122,    42,
      90,    96,    91,   110,   111,   113,   -10,    97,   -40,   -40,
     -40,    84,    22,    85,   -40,   127,   128,    99,   130,   116,
      74,    76,   100,   101,   102,   121,   -40,   -40,   137,   136,
     140,   148,   150,   149,   152,   167,   168,   153,   170,   156,
     147,   162,   164,   -40,   163,   172,   -40,   -40,   181,   -10,
     -40,   -10,   -10,   -10,    24,   185,   182,   186,   155,   188,
     187,    31,   108,   192,   154,   195,    93,   193,   166,     0,
     123,   157,   135,     0,     0,     2,     3,     0,     4,     5,
       6,   169,     0,   171,     7,     8,     9,     0,     0,    10,
      11,    12,    13,    14,     0,     0,    15,    16,     0,     0,
       0,     0,     0,     0,     0,     0,   190,    17,     0,     0,
       0,     0,     0,    18,     0,     0,    19,    20,     0,   103,
      21,     4,     5,     6,    22,     0,     0,     7,   104,     9,
       0,     0,    10,    11,    12,    13,    14,     0,     0,    15,
      16,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     105,     0,     0,     0,     0,     0,    18,     0,     0,    19,
      20,     0,   103,    21,     4,     5,     6,    22,   -67,     0,
       7,   104,     9,     0,     0,    10,    11,    12,    13,    14,
       0,     0,    15,    16,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   105,    77,     0,     0,     0,     0,    18,
       0,     0,    19,    20,     0,     0,    21,     0,     0,     0,
      22,   -66,   -34,   -34,   -34,   -34,    78,    79,    80,    81,
      82,   -34,   -34,   -34,   -34,    57,    83,   -34,   -34,   -34,
     -34,   -34,   -34,   -34,     0,     0,    84,   -34,    85,   -34,
     -34,   -34,     0,    58,    59,    15,    16,     0,     0,     0,
       0,     0,    60,    61,    62,    63,   109,     0,    64,    65,
      66,    67,    68,    69,    70,     0,     0,     0,   -18,     0,
     -18,   -18,   -18,     0,   -36,   -36,    15,    16,     0,     0,
       0,     0,     0,   -36,   -36,   -36,   -36,   109,     0,   -36,
     -36,   -36,   -36,   -36,   -36,   -36,     0,     0,     0,   -36,
       0,   -36,   -36,   -36,     0,   -35,   -35,    15,    16,     0,
       0,     0,     0,     0,   -35,   -35,   -35,   -35,     0,     0,
     -35,   -35,   -35,   -35,   -35,   -35,   -35,     0,     0,     0,
     -35,     0,   -35,   -35,   -35,   -40,     0,   -40,   -40,   -40,
       0,     0,     0,   -40,    50,     0,     4,     5,     6,     0,
       0,     0,     7,     0,     0,   -40,   -40,     0,     0,     0,
       0,     0,     0,     0,    15,    16,    38,     0,     0,     0,
       0,     0,   -40,     0,     0,   -40,   -40,     0,     0,    39,
       0,    18,   -10,     0,    19,    20,     0,     0,    21,     0,
     -40,   -99,   -40,   -40,   -40,     0,     0,     0,   -40,    50,
       0,     4,     5,     6,     0,     0,     0,     7,     0,     0,
     -40,   -40,     0,     0,     0,     0,     0,     0,     0,    15,
      16,    50,     0,     4,     5,     6,     0,   -40,     0,     7,
     -40,   -40,     0,     0,   -40,     0,    18,   -10,     0,    19,
      20,    15,    16,    21,   -50,   -50,     0,    50,     0,     4,
       5,     6,     0,     0,     0,     7,     0,     0,    18,     0,
       0,    19,    20,     0,     0,    21,   -99,    15,    16,    73,
       0,     4,     5,     6,     0,     0,     0,     7,   -33,     0,
     -33,   -33,   -33,     0,    18,     0,   -33,    19,    20,    15,
      16,    21,     0,     0,     0,     0,     0,     0,   -33,   -33,
     -40,     0,   -40,   -40,   -40,     0,    18,     0,   -40,    19,
      20,     0,     0,    21,     0,   -33,     0,     0,   -33,   -33,
     -40,   -40,   -33,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -40,     0,     0,
     -40,   -40,     0,     0,   -40
};

static const yytype_int16 yycheck[] =
{
       1,    26,    47,   100,    27,    28,     1,    48,     3,     4,
       5,    32,     1,     1,     9,    10,     1,     4,    46,     1,
      21,     1,    10,     3,     4,     5,    21,    22,    10,     9,
      10,    11,    46,    47,    14,    15,    16,    17,    18,    46,
      47,    21,    22,    38,    89,    43,    41,    42,    71,    74,
      45,    76,    32,    48,    55,    32,   153,    44,    38,    48,
      49,    41,    42,    48,    46,    45,    12,    13,    48,    49,
      50,     1,    32,     3,     4,   172,     1,    47,     3,     4,
      43,    45,    45,    84,    85,    86,     1,    45,     3,     4,
       5,    43,    49,    45,     9,    96,    97,    45,    99,   144,
      27,    28,    45,    48,    46,    33,    21,    22,    44,    50,
      44,    46,    16,    46,     3,   160,   161,    48,   163,     3,
     121,    45,    33,    38,    46,    48,    41,    42,    46,    44,
      45,    46,    47,    48,   135,    48,    46,   182,   139,   184,
      45,     1,    71,    46,   135,   194,    42,   192,   159,    -1,
      94,   144,   106,    -1,    -1,     0,     1,    -1,     3,     4,
       5,   162,    -1,   164,     9,    10,    11,    -1,    -1,    14,
      15,    16,    17,    18,    -1,    -1,    21,    22,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   187,    32,    -1,    -1,
      -1,    -1,    -1,    38,    -1,    -1,    41,    42,    -1,     1,
      45,     3,     4,     5,    49,    -1,    -1,     9,    10,    11,
      -1,    -1,    14,    15,    16,    17,    18,    -1,    -1,    21,
      22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    41,
      42,    -1,     1,    45,     3,     4,     5,    49,    50,    -1,
       9,    10,    11,    -1,    -1,    14,    15,    16,    17,    18,
      -1,    -1,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,     1,    -1,    -1,    -1,    -1,    38,
      -1,    -1,    41,    42,    -1,    -1,    45,    -1,    -1,    -1,
      49,    50,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,     1,    33,    34,    35,    36,
      37,    38,    39,    40,    -1,    -1,    43,    44,    45,    46,
      47,    48,    -1,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,    28,    29,    30,    31,     1,    -1,    34,    35,
      36,    37,    38,    39,    40,    -1,    -1,    -1,    44,    -1,
      46,    47,    48,    -1,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    -1,    28,    29,    30,    31,     1,    -1,    34,
      35,    36,    37,    38,    39,    40,    -1,    -1,    -1,    44,
      -1,    46,    47,    48,    -1,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    -1,    28,    29,    30,    31,    -1,    -1,
      34,    35,    36,    37,    38,    39,    40,    -1,    -1,    -1,
      44,    -1,    46,    47,    48,     1,    -1,     3,     4,     5,
      -1,    -1,    -1,     9,     1,    -1,     3,     4,     5,    -1,
      -1,    -1,     9,    -1,    -1,    21,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    21,    22,    32,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    41,    42,    -1,    -1,    45,
      -1,    38,    48,    -1,    41,    42,    -1,    -1,    45,    -1,
       1,    48,     3,     4,     5,    -1,    -1,    -1,     9,     1,
      -1,     3,     4,     5,    -1,    -1,    -1,     9,    -1,    -1,
      21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      22,     1,    -1,     3,     4,     5,    -1,    38,    -1,     9,
      41,    42,    -1,    -1,    45,    -1,    38,    48,    -1,    41,
      42,    21,    22,    45,    46,    47,    -1,     1,    -1,     3,
       4,     5,    -1,    -1,    -1,     9,    -1,    -1,    38,    -1,
      -1,    41,    42,    -1,    -1,    45,    46,    21,    22,     1,
      -1,     3,     4,     5,    -1,    -1,    -1,     9,     1,    -1,
       3,     4,     5,    -1,    38,    -1,     9,    41,    42,    21,
      22,    45,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,
       1,    -1,     3,     4,     5,    -1,    38,    -1,     9,    41,
      42,    -1,    -1,    45,    -1,    38,    -1,    -1,    41,    42,
      21,    22,    45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      41,    42,    -1,    -1,    45
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    52,     0,     1,     3,     4,     5,     9,    10,    11,
      14,    15,    16,    17,    18,    21,    22,    32,    38,    41,
      42,    45,    49,    53,    54,    56,    58,    59,    60,    61,
      63,    64,    65,    67,    68,    80,    91,    97,    32,    45,
       1,     3,     4,    93,    94,    69,    72,    86,    83,    81,
       1,    54,    90,    54,    32,   103,    48,     1,    19,    20,
      28,    29,    30,    31,    34,    35,    36,    37,    38,    39,
      40,    57,    59,     1,    58,    61,    58,     1,    23,    24,
      25,    26,    27,    33,    43,    45,    55,    32,    32,    46,
      43,    45,    95,    95,    47,    92,    45,    45,    65,    45,
      45,    48,    46,     1,    10,    32,    64,    66,    56,     1,
      54,    54,    62,    54,     1,    48,    65,   102,     4,    44,
      98,    33,     3,    94,     1,    48,    96,    54,    54,    87,
      54,     1,    10,    89,    90,   103,    50,    44,    46,    47,
      44,     1,    10,    46,    99,   100,   101,    54,    46,    46,
      16,    84,     3,    48,    66,    54,     3,   102,    46,    47,
      70,    73,    45,    46,    33,    90,   101,    65,    65,    54,
      65,    54,    48,    71,    74,    88,    85,    90,    12,    13,
      75,    46,    46,    76,    79,    48,    65,    45,    65,    82,
      54,    77,    46,    65,    78,    75
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
#line 95 "tp4correccion.y"
    { flag_error=0; ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 96 "tp4correccion.y"
    { flag_error=0;                                         printf("\n----------------------------------------------------------------------------------\n"); ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 97 "tp4correccion.y"
    { flag_general=0; flag_error=0;                         printf("\n----------------------------------------------------------------------------------\n"); ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 98 "tp4correccion.y"
    { flag_error=0; printf("No se reconocio la entrada\n"); printf("\n----------------------------------------------------------------------------------\n"); ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 112 "tp4correccion.y"
    { if( (yyvsp[(1) - (3)].s.tipo) != 4  ){ printf("Se esperaba un lvalue para la asignacion\n"); } ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 113 "tp4correccion.y"
    { printf("expresion no reconocida"); flag_expresion = 1; ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 123 "tp4correccion.y"
    { printf("1Un \"OPERADOR\" no es valido\n"); flag_expresion = 1; ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 128 "tp4correccion.y"
    { control( (yyvsp[(1) - (3)].s.tipo), (yyvsp[(2) - (3)].s.caracter), (yyvsp[(3) - (3)].s.tipo)); ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 145 "tp4correccion.y"
    { printf("2Un \"OPERADOR\" no es valido\n"); flag_expresion = 1; ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 158 "tp4correccion.y"
    { printf("3Un \"OPERADOR\" no es valido\n"); flag_expresion = 1; ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 165 "tp4correccion.y"
    { printf("4Un \"OPERADOR\" no es valido\n"); flag_expresion = 1; ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 186 "tp4correccion.y"
    { printf("No se reconocio la \"CATEGORIA LEXICA\"\n"); flag_expresion = 1; ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 196 "tp4correccion.y"
    { if(flag_SentCompuesta == 0) { printf("Se declaro correctamente una \"SENTENCIA COMPUESTA\"\n"); flag_general = 0; }     else { printf("Error al declarar la \"SENTENCIA COMPUESTA\"\n");      flag_SentCompuesta = 0; flag_general = 1;} ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 197 "tp4correccion.y"
    { if(flag_SentExpresion == 0) { printf("Se declaro correctamente una \"SENTENCIA DE EXPRESION\"\n"); }  else { printf("Error al declarar la \"SENTENCIA DE EXPRESION\"\n");   flag_SentExpresion = 0; flag_sentencia = 1; flag_general = 1; } ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 198 "tp4correccion.y"
    { if(flag_SentControl == 0)   { printf("Se declaro correctamente una \"SENTENCIA DE CONTROL\"\n"); }    else { printf("Error al declarar la \"SENTENCIA DE CONTROL\"\n");     flag_SentControl = 0; flag_sentencia = 1; flag_general = 1; } ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 199 "tp4correccion.y"
    { if(flag_SentIteracion == 0) { printf("Se declaro correctamente una \"SENTENCIA DE ITERACION\"\n"); }  else { printf("Error al declarar la \"SENTENCIA DE ITERRACION\"\n");  flag_SentIteracion = 0; flag_sentencia = 1; flag_general = 1; } ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 200 "tp4correccion.y"
    { if(flag_SentDeclaraciones == 0){ printf("Se \"DECLARARON VARIABLES\" correctamente\n"); }             else { printf("Error al \"DECLARAR VARIABLES\"\n");                   flag_SentDeclaraciones = 0; flag_sentencia = 1; flag_general = 1;} ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 201 "tp4correccion.y"
    { if(flag_error == 0){ printf("Se declaro una sentencia de salto (RETURN) \n"); } ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 202 "tp4correccion.y"
    { if(flag_error == 0){ printf("Error al declarar una sentencia\n"); flag_error = 1; } ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 212 "tp4correccion.y"
    { if(flag_sentencia == 1){ flag_sentencia = 0; flag_SentCompuesta = 1;  };}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 218 "tp4correccion.y"
    { printf("No se declarado sentencias\n");;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 228 "tp4correccion.y"
    { if(flag_expresion == 1){ flag_SentExpresion = 1; flag_expresion = 0; };}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 239 "tp4correccion.y"
    { printf("\nSe declaro una sentencia \"IF\"\n"); ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 239 "tp4correccion.y"
    {if(flag_expresion==1){flag_expresion=0;flag_if=1;};}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 239 "tp4correccion.y"
    {if(flag_general==1){flag_if=1;};}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 239 "tp4correccion.y"
    {if(flag_if == 1){ flag_if=0; flag_SentControl=1; };}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 240 "tp4correccion.y"
    { printf("\nSe declaro una sentencia \"SWITCH\"\n"); ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 240 "tp4correccion.y"
    {if(flag_expresion==1){flag_expresion=0;flag_if=1;};}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 240 "tp4correccion.y"
    {if(flag_general==1){flag_if=1;};}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 240 "tp4correccion.y"
    {if(flag_if == 1){ flag_if=0; flag_SentControl=1; };}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 244 "tp4correccion.y"
    { if(flag_if == 0 ){ printf("\nSe declaro una sentencia \"ELSE IF\"\n"); } ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 244 "tp4correccion.y"
    {if(flag_expresion==1){flag_expresion=0;flag_if=1;};}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 244 "tp4correccion.y"
    {if(flag_general==1){flag_if=1;};}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 245 "tp4correccion.y"
    { if(flag_if == 0){ printf("\nSe declaro una sentencia \"ELSE\"\n"); } ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 245 "tp4correccion.y"
    {if(flag_general==1){flag_if=1;};}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 257 "tp4correccion.y"
    { printf("\nSe declaro un bucle \"FOR\"\n"); ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 257 "tp4correccion.y"
    {if(flag_general==1){flag_bucles=1;};}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 257 "tp4correccion.y"
    {if(flag_bucles == 1){flag_bucles=0; flag_SentIteracion=1; };}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 258 "tp4correccion.y"
    { printf("\nSe declaro un bucle \"WHILE\"\n"); ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 258 "tp4correccion.y"
    {if(flag_expresion==1){flag_expresion=0;flag_bucles=1;};}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 258 "tp4correccion.y"
    {if(flag_general==1){flag_bucles=1;};}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 258 "tp4correccion.y"
    {if(flag_bucles == 1){flag_bucles=0; flag_SentIteracion=1; };}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 259 "tp4correccion.y"
    { printf("\nSe declaro un bucle \"DO WHILE\"\n"); ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 259 "tp4correccion.y"
    {if(flag_general==1){flag_bucles=1;};}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 259 "tp4correccion.y"
    {if(flag_expresion ==1){flag_expresion=0;flag_bucles=1;};}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 259 "tp4correccion.y"
    {if(flag_bucles == 1){flag_bucles=0; flag_SentIteracion=1; };}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 263 "tp4correccion.y"
    { if(flag_expresion == 1){ printf("Un parametro no fue reconocido en la \"SENTENCIA DE ITERRACION\"\n"); flag_bucles = 1; flag_expresion = 0; ingresarSinRepetir(&listaIdentificador, (yyvsp[(2) - (4)].s.cadena),(yyvsp[(1) - (4)].s.cadena), 2); } ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 265 "tp4correccion.y"
    { if(flag_bucles == 0 && flag_bucles == 0){ printf("Un parametro no fue reconocido en la \"SENTENCIA DE ITERRACION\"\n"); flag_bucles = 1; } ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 269 "tp4correccion.y"
    { if(flag_expresion == 1 && flag_bucles == 0){ printf("Un parametro no fue reconocido en la \"SENTENCIA DE ITERRACION\"\n"); flag_bucles = 1; flag_expresion = 0; } ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 280 "tp4correccion.y"
    { if(flag_datos == 0){ strcpy(tipoDato, (yyvsp[(1) - (2)].s.cadena)); printf("Varibles de tipo \"%s\"\n", tipoDato); } ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 280 "tp4correccion.y"
    { if(flag_datos==1){flag_datos = 0; flag_SentDeclaraciones = 1;};}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 290 "tp4correccion.y"
    { if(flag_datos == 0){ ingresarSinRepetir(&listaIdentificador, (yyvsp[(1) - (2)].s.cadena), tipoDato, 1); } ;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 291 "tp4correccion.y"
    { if(flag_datos == 0){ ingresarSinRepetir(&listaIdentificador, (yyvsp[(1) - (4)].s.cadena), tipoDato, 2); } ;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 292 "tp4correccion.y"
    { printf(" error LValue \n"); flag_datos = 1;;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 293 "tp4correccion.y"
    { if(flag_datos == 0){ printf("Falta IDENTIFICADOR\n"); flag_datos = 1;} ;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 305 "tp4correccion.y"
    { if(flag_datos == 0){ printf("Falto el caracter de corte\n"); flag_datos = 1;} ;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 311 "tp4correccion.y"
    { printf("\nSe identifico a la funcion \"%s\" de tipo \"%s\"\n", (yyvsp[(2) - (3)].s.cadena), (yyvsp[(1) - (3)].s.cadena)); funcionRepetida = buscarFuncion(&listaFunciones, (yyvsp[(2) - (3)].s.cadena)); insertarFuncionSinRepetir(&listaFunciones, (yyvsp[(1) - (3)].s.cadena), (yyvsp[(2) - (3)].s.cadena)); ;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 311 "tp4correccion.y"
    { if(flag_funciones == 0){ printf("Se %s correctamente la funcion: \"%s\"\n", funcion, (yyvsp[(2) - (6)].s.cadena)); } else { printf("Se definio/declaro incorrectamente la funcion \"%s\"\n", (yyvsp[(2) - (6)].s.cadena)); flag_funciones = 0; funcionRepetida = 0;} ;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 312 "tp4correccion.y"
    { printf("Se definio/declaro incorrectamente la funcion\n"); flag_funciones = 0; ;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 316 "tp4correccion.y"
    { if(flag_funciones == 0){ printf("Se declararon los parametros de la funcion correctamente\n"); } else{ printf("Se declararon incorrectamente los parametros de la funcion\n"); } ;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 317 "tp4correccion.y"
    { if(flag_funciones == 0){ printf("No se declararon parametros para la funcion\n"); } ;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 326 "tp4correccion.y"
    { if(funcionRepetida == 0){ agregarParametros(&(*listaFunciones).parametros, (yyvsp[(1) - (2)].s.cadena)); } ;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 327 "tp4correccion.y"
    { if(funcionRepetida == 0){ agregarParametros(&(*listaFunciones).parametros, (yyvsp[(1) - (1)].s.cadena)); }  ;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 328 "tp4correccion.y"
    {  if(flag_funciones == 0) { printf("Valor no reconocido para asignar \n"); } flag_funciones = 1; ;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 332 "tp4correccion.y"
    { funcion = "declaro"; ;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 333 "tp4correccion.y"
    { if(flag_general == 1){flag_general = 0; flag_funciones = 1; }; funcion = "definio"; ;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 334 "tp4correccion.y"
    { printf("Se esperaba un punto y como o una sentencia compuesta\n"); flag_funciones = 1; ;}
    break;



/* Line 1455 of yacc.c  */
#line 2142 "tp4correccion.tab.c"
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
#line 350 "tp4correccion.y"


int main()
{      
    //yydebug = 1;
    yyin = fopen("gramatica.txt", "r");
    yyparse();

    informeDeLectura(&listaIdentificador, &listaFunciones, &lista);
}

