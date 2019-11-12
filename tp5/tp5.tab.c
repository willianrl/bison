
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
#line 1 "tp5.y"


#include <stdio.h>
#include <stdlib.h> // para el itoa y el malloc
#include <string.h>
#include "funcionesDeLista.h"
#define YYDEBUG 1

extern FILE *yyin;
extern int yylineno;

Variables listaDeVariables = NULL;
Identificadores listaDeIdentificadores = NULL;

Funciones listaFunciones = NULL;

ControlDeDatos listaDeControlDeDatos = NULL;
LValue listaDeLValue = NULL;
DobleDeclaraciones listaDeDobleDeclaraciones = NULL;

ErroresSintacticos inicio = NULL;
ErroresSintacticos fin = NULL;
int band = 1;

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
char tipoDato[20];
int funcionRepetida = 0;
int lineaDefinicion;



/* Line 189 of yacc.c  */
#line 119 "tp5.tab.c"

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
     LITERALESCADENA = 261,
     TIPODATO = 262,
     IF = 263,
     ELSEIF = 264,
     ELSE = 265,
     SWITCH = 266,
     DO = 267,
     WHILE = 268,
     FOR = 269,
     RETURN = 270,
     OR = 271,
     AND = 272,
     INCREMENTO = 273,
     DECREMENTO = 274,
     SUMAASIGNACION = 275,
     RESTAASIGNACION = 276,
     MULTIASIGNACION = 277,
     DIVASIGNACION = 278,
     RESTOASIGNACION = 279,
     MENORIGUAL = 280,
     MAYORIGUAL = 281,
     IGUALDAD = 282,
     DISTINTO = 283
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 46 "tp5.y"

struct{
  char cadena[30];
  char caracter;
  int entero;
  int tipo;
}s;




/* Line 214 of yacc.c  */
#line 195 "tp5.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 207 "tp5.tab.c"

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
#define YYLAST   788

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  56
/* YYNRULES -- Number of rules.  */
#define YYNRULES  129
/* YYNRULES -- Number of states.  */
#define YYNSTATES  193

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   283

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      29,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    39,     2,     2,     2,    37,    38,     2,
      42,    43,    35,    33,    44,    34,     2,    36,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    45,
      31,    30,    32,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    40,     2,    41,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    46,     2,    47,     2,     2,     2,     2,
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
      25,    26,    27,    28
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,     9,    12,    15,    18,    20,
      21,    26,    28,    30,    32,    34,    36,    38,    40,    42,
      44,    48,    50,    52,    54,    56,    58,    60,    62,    64,
      66,    68,    70,    72,    74,    76,    78,    81,    84,    87,
      89,    91,    93,    95,    97,    99,   101,   103,   108,   113,
     115,   119,   120,   122,   126,   128,   130,   132,   134,   136,
     138,   140,   142,   144,   148,   149,   155,   159,   162,   163,
     166,   167,   168,   175,   176,   177,   183,   184,   185,   192,
     193,   197,   198,   199,   204,   207,   208,   209,   221,   222,
     223,   224,   233,   234,   241,   242,   243,   244,   255,   260,
     262,   264,   266,   267,   268,   269,   275,   277,   281,   283,
     287,   289,   291,   293,   294,   301,   302,   308,   311,   313,
     315,   319,   322,   324,   326,   328,   330,   332,   334,   337
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      49,     0,    -1,    -1,    49,    50,    -1,    29,    -1,    96,
      49,    -1,    62,    49,    -1,     1,    49,    -1,    54,    -1,
      -1,    59,    53,    52,    51,    -1,     1,    -1,    30,    -1,
      20,    -1,    21,    -1,    22,    -1,    23,    -1,    24,    -1,
       1,    -1,    56,    -1,    56,    55,    54,    -1,    16,    -1,
      17,    -1,    31,    -1,    32,    -1,    25,    -1,    26,    -1,
      28,    -1,    27,    -1,    33,    -1,    34,    -1,    35,    -1,
      36,    -1,    37,    -1,     1,    -1,    59,    -1,    58,    56,
      -1,    57,    56,    -1,    56,    57,    -1,    18,    -1,    19,
      -1,     1,    -1,    38,    -1,    35,    -1,    39,    -1,     1,
      -1,    61,    -1,    59,    40,    51,    41,    -1,    59,    42,
      60,    43,    -1,    51,    -1,    60,    44,    51,    -1,    -1,
       4,    -1,    42,    51,    43,    -1,     5,    -1,     6,    -1,
       3,    -1,     1,    -1,    63,    -1,    66,    -1,    67,    -1,
      78,    -1,    90,    -1,    15,    89,    45,    -1,    -1,    46,
      64,   103,    65,    47,    -1,    62,   103,    65,    -1,    62,
     103,    -1,    -1,    51,    45,    -1,    -1,    -1,     8,    68,
      76,    63,    69,    72,    -1,    -1,    -1,    11,    70,    76,
      63,    71,    -1,    -1,    -1,     9,    73,    76,    63,    74,
      72,    -1,    -1,    10,    75,    63,    -1,    -1,    -1,    42,
      51,    77,    43,    -1,    42,    43,    -1,    -1,    -1,    14,
      79,    42,    88,    45,    89,    45,    89,    43,    63,    80,
      -1,    -1,    -1,    -1,    13,    81,    42,    51,    82,    43,
      63,    83,    -1,    -1,    13,    42,    43,    84,     1,    47,
      -1,    -1,    -1,    -1,    12,    85,    63,    86,    13,    42,
      51,    87,    43,    45,    -1,     7,     3,    30,    51,    -1,
      89,    -1,     1,    -1,    51,    -1,    -1,    -1,    -1,     7,
      93,    91,    95,    92,    -1,    94,    -1,    93,    44,    94,
      -1,     3,    -1,     3,    30,    51,    -1,     1,    -1,    45,
      -1,     1,    -1,    -1,     7,     3,    42,    97,    99,   102,
      -1,    -1,     1,    42,    43,    98,   102,    -1,   100,    43,
      -1,    43,    -1,   101,    -1,   100,    44,   101,    -1,     7,
       3,    -1,     7,    -1,     1,    -1,    45,    -1,    63,    -1,
       1,    -1,    29,    -1,   103,    29,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    96,    96,    98,   102,   103,   104,   105,   118,   119,
     119,   120,   124,   125,   126,   127,   128,   129,   130,   134,
     135,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   177,   178,   179,   180,   184,
     185,   186,   190,   191,   192,   193,   197,   198,   199,   203,
     204,   205,   209,   210,   211,   212,   213,   214,   224,   225,
     226,   227,   228,   229,   239,   239,   243,   244,   245,   255,
     266,   266,   266,   267,   267,   267,   271,   271,   271,   272,
     272,   273,   276,   276,   277,   287,   287,   287,   288,   288,
     288,   288,   289,   289,   290,   290,   290,   290,   294,   295,
     296,   300,   301,   311,   311,   311,   316,   317,   321,   322,
     324,   335,   336,   342,   342,   343,   343,   347,   352,   356,
     357,   361,   362,   363,   367,   368,   369,   380,   381,   382
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFICADOR", "NUM", "CCARACTER",
  "LITERALESCADENA", "TIPODATO", "IF", "ELSEIF", "ELSE", "SWITCH", "DO",
  "WHILE", "FOR", "RETURN", "OR", "AND", "INCREMENTO", "DECREMENTO",
  "SUMAASIGNACION", "RESTAASIGNACION", "MULTIASIGNACION", "DIVASIGNACION",
  "RESTOASIGNACION", "MENORIGUAL", "MAYORIGUAL", "IGUALDAD", "DISTINTO",
  "'\\n'", "'='", "'<'", "'>'", "'+'", "'-'", "'*'", "'/'", "'%'", "'&'",
  "'!'", "'['", "']'", "'('", "')'", "','", "';'", "'{'", "'}'", "$accept",
  "input", "line", "expresion", "$@1", "operAsignacion", "expBinaria",
  "operBinario", "expUnaria", "incremento", "operUnario", "expPostfijo",
  "listaDeArgumentos", "expPrimaria", "sentencia", "sentCompuesta", "$@2",
  "listaSentencias", "sentExpresion", "sentSeleccion", "$@3", "$@4", "$@5",
  "$@6", "estructura", "$@7", "$@8", "$@9", "condicional", "$@10",
  "sentIteracion", "$@11", "$@12", "$@13", "$@14", "$@15", "$@16", "$@17",
  "$@18", "$@19", "expOrDeclaracion", "expOP", "sentenciaDeclaracion",
  "$@20", "$@21", "listaDeIdentificadores", "identificadoryAsignacion",
  "finalizador", "declaracionyDefinicionDeFunciones", "$@22", "$@23",
  "parametros", "listaDeParametros", "parametro", "cuerpo", "opcionSalto", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,    10,
      61,    60,    62,    43,    45,    42,    47,    37,    38,    33,
      91,    93,    40,    41,    44,    59,   123,   125
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    48,    49,    49,    50,    50,    50,    50,    51,    52,
      51,    51,    53,    53,    53,    53,    53,    53,    53,    54,
      54,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    56,    56,    56,    56,    57,
      57,    57,    58,    58,    58,    58,    59,    59,    59,    60,
      60,    60,    61,    61,    61,    61,    61,    61,    62,    62,
      62,    62,    62,    62,    64,    63,    65,    65,    65,    66,
      68,    69,    67,    70,    71,    67,    73,    74,    72,    75,
      72,    72,    77,    76,    76,    79,    80,    78,    81,    82,
      83,    78,    84,    78,    85,    86,    87,    78,    88,    88,
      88,    89,    89,    91,    92,    90,    93,    93,    94,    94,
      94,    95,    95,    97,    96,    98,    96,    99,    99,   100,
     100,   101,   101,   101,   102,   102,   102,   103,   103,   103
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     2,     2,     2,     1,     0,
       4,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     4,     1,
       3,     0,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     0,     5,     3,     2,     0,     2,
       0,     0,     6,     0,     0,     5,     0,     0,     6,     0,
       3,     0,     0,     4,     2,     0,     0,    11,     0,     0,
       0,     8,     0,     6,     0,     0,     0,    10,     4,     1,
       1,     1,     0,     0,     0,     5,     1,     3,     1,     3,
       1,     1,     1,     0,     6,     0,     5,     2,     1,     1,
       3,     2,     1,     1,     1,     1,     1,     1,     2,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     2,    56,    52,    54,    55,     0,    70,
      73,    94,     0,    85,     0,    39,    40,     4,    43,    42,
      44,     0,    64,     3,     0,     8,     0,     0,     0,     0,
      46,     2,    58,    59,    60,    61,    62,     2,     0,     0,
     110,   108,   103,   106,     0,     0,     0,     0,     0,     0,
      57,   101,     0,     0,   129,    69,    41,    21,    22,    25,
      26,    28,    27,    23,    24,    29,    30,    31,    32,    33,
       0,    38,    57,     0,    35,     0,    18,    13,    14,    15,
      16,    17,    12,     0,     0,     9,     0,     0,   115,     0,
     113,     0,     0,     0,     0,     0,    95,    92,     0,     0,
      63,    53,   127,     0,    20,    41,     0,    49,     0,     0,
       0,   109,     0,   108,   107,   112,   111,   104,    84,    82,
      71,    74,     0,     0,    89,    57,     0,     0,    99,     0,
     128,   129,     0,    47,    48,     0,    10,   126,   124,   125,
     116,   123,   122,   118,     0,     0,   119,   105,     0,    81,
      75,     0,     0,     0,     0,     0,     0,    65,    50,   121,
     114,   117,     0,    83,    76,    79,    72,     0,    93,     0,
       0,     0,    66,   120,     0,     0,    96,    90,    98,     0,
       0,    80,     0,    91,     0,    77,     0,     0,    81,    97,
      86,    78,    87
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    23,    24,   109,    85,    25,    70,    26,    27,
      28,    29,   108,    30,    31,    32,    54,   132,    33,    34,
      44,   149,    45,   150,   166,   174,   188,   175,    94,   148,
      35,    49,   192,    48,   153,   183,   123,    46,   122,   182,
     127,    52,    36,    92,   147,    42,    43,   117,    37,   112,
     110,   144,   145,   146,   140,   103
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -100
static const yytype_int16 yypact[] =
{
    -100,     9,  -100,   743,  -100,  -100,  -100,  -100,    34,  -100,
    -100,  -100,   -34,  -100,   546,  -100,  -100,  -100,  -100,  -100,
    -100,   669,  -100,  -100,   -13,  -100,    75,   691,   691,   374,
    -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,   -32,   163,
    -100,   -11,    20,  -100,     0,     0,     7,    31,    38,    39,
     493,  -100,    26,    43,    53,  -100,   697,  -100,  -100,  -100,
    -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,
     691,  -100,   719,   411,     1,   448,  -100,  -100,  -100,  -100,
    -100,  -100,  -100,   669,   597,  -100,   207,   251,  -100,   669,
    -100,    55,    28,   641,     7,     7,  -100,  -100,   669,   538,
    -100,  -100,  -100,   295,  -100,  -100,    46,  -100,     2,   669,
      17,  -100,    29,    58,  -100,  -100,  -100,  -100,  -100,  -100,
    -100,  -100,    76,    89,  -100,   589,    93,    52,  -100,    55,
    -100,    53,    57,  -100,  -100,   669,  -100,  -100,  -100,  -100,
    -100,  -100,    95,  -100,    17,    23,  -100,  -100,    62,    51,
    -100,    71,    67,    72,    87,   546,   342,  -100,  -100,  -100,
    -100,  -100,    32,  -100,  -100,  -100,  -100,   669,  -100,     7,
     669,    77,  -100,  -100,     0,     7,  -100,  -100,  -100,   647,
       7,  -100,    80,  -100,    82,  -100,    81,     7,    51,  -100,
    -100,  -100,  -100
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -100,     3,  -100,   -14,  -100,  -100,    59,  -100,    50,   -21,
    -100,    -2,  -100,  -100,   -99,   -45,  -100,   -29,  -100,  -100,
    -100,  -100,  -100,  -100,   -60,  -100,  -100,  -100,   -43,  -100,
    -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,
    -100,   -96,  -100,  -100,  -100,  -100,    41,  -100,  -100,  -100,
    -100,  -100,  -100,   -28,    -8,     6
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -103
static const yytype_int16 yytable[] =
{
      51,    96,    95,   128,   131,    71,    39,    53,    47,     2,
       3,    88,     4,     5,     6,     7,     8,     9,   137,    89,
      10,    11,    12,    13,    14,    74,    74,    15,    16,   115,
     141,    90,    55,   141,    86,    40,   142,    41,    17,   142,
      87,    83,    93,    84,    18,   134,   135,    19,    20,   120,
     121,    21,    71,    22,    71,    22,    40,   131,   113,   171,
     164,   165,   138,    22,    91,   139,   161,   162,    74,   106,
     107,   100,   143,   116,    97,   111,    56,    73,    75,   119,
      98,    99,   102,   184,   124,    51,   101,   133,    89,   151,
     152,    57,    58,    15,    16,   136,   154,   155,   159,   139,
      59,    60,    61,    62,   157,   163,    63,    64,    65,    66,
      67,    68,    69,   167,   168,   169,   -19,   170,   -19,   -19,
     -19,   158,   179,   186,   177,   187,   189,   172,   191,   104,
     181,   180,   114,     0,   173,   185,   160,   156,     0,     0,
       0,    51,   190,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   176,     0,     0,   178,     0,     0,     0,
       0,     0,     0,    -7,     3,    51,     4,     5,     6,     7,
       8,     9,     0,     0,    10,    11,    12,    13,    14,     0,
       0,    15,    16,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    17,     0,     0,     0,     0,     0,    18,     0,
       0,    19,    20,     0,     0,    21,     0,    -6,     3,    22,
       4,     5,     6,     7,     8,     9,     0,     0,    10,    11,
      12,    13,    14,     0,     0,    15,    16,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    17,     0,     0,     0,
       0,     0,    18,     0,     0,    19,    20,     0,     0,    21,
       0,    -5,     3,    22,     4,     5,     6,     7,     8,     9,
       0,     0,    10,    11,    12,    13,    14,     0,     0,    15,
      16,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      17,     0,     0,     0,     0,     0,    18,     0,     0,    19,
      20,     0,     0,    21,     0,     0,    50,    22,     4,     5,
       6,     7,   129,     9,     0,     0,    10,    11,    12,    13,
      14,     0,     0,    15,    16,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   130,     0,     0,     0,     0,     0,
      18,     0,     0,    19,    20,     0,     0,    21,     0,     0,
       0,    22,   -68,    50,     0,     4,     5,     6,     7,   129,
       9,     0,     0,    10,    11,    12,    13,    14,     0,     0,
      15,    16,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   130,     0,     0,     0,    76,     0,    18,     0,     0,
      19,    20,     0,     0,    21,     0,     0,     0,    22,   -67,
     -35,   -35,   -35,   -35,    77,    78,    79,    80,    81,   -35,
     -35,   -35,   -35,     0,    82,   -35,   -35,   -35,   -35,   -35,
     -35,   -35,   105,     0,    83,   -35,    84,   -35,   -35,   -35,
       0,     0,     0,     0,     0,     0,     0,   -37,   -37,    15,
      16,     0,     0,     0,     0,     0,   -37,   -37,   -37,   -37,
       0,     0,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   105,
       0,     0,   -37,     0,   -37,   -37,   -37,     0,     0,     0,
       0,     0,     0,     0,   -36,   -36,    15,    16,     0,     0,
       0,     0,     0,   -36,   -36,   -36,   -36,     0,     0,   -36,
     -36,   -36,   -36,   -36,   -36,   -36,     0,     0,     0,   -36,
       0,   -36,   -36,   -36,   -11,     0,   -41,   -41,   -41,   -41,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -41,   -41,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -41,     0,
       0,   -41,   -41,     0,   -11,   -41,   -11,   -11,   -11,   125,
       0,     4,     5,     6,     7,   126,     0,    50,     0,     4,
       5,     6,     7,     0,     0,     0,    15,    16,     0,     0,
       0,     0,     0,     0,    15,    16,     0,     0,     0,     0,
       0,     0,     0,    18,     0,     0,    19,    20,     0,     0,
      21,    18,     0,  -102,    19,    20,     0,     0,    21,     0,
     -41,  -102,   -41,   -41,   -41,   -41,     0,     0,    50,     0,
       4,     5,     6,     7,     0,     0,     0,   -41,   -41,     0,
       0,     0,     0,     0,     0,    15,    16,     0,     0,     0,
       0,     0,     0,     0,   -41,     0,     0,   -41,   -41,     0,
       0,   -41,    18,     0,   -11,    19,    20,     0,     0,    21,
     -51,   -51,    50,     0,     4,     5,     6,     7,    50,     0,
       4,     5,     6,     7,     0,     0,     0,     0,     0,    15,
      16,     0,     0,     0,     0,    15,    16,     0,     0,     0,
      50,     0,     4,     5,     6,     7,    18,     0,     0,    19,
      20,     0,    18,    21,   118,    19,    20,    15,    16,    21,
    -102,     0,    72,     0,     4,     5,     6,     7,   -34,     0,
     -34,   -34,   -34,   -34,    18,     0,     0,    19,    20,    15,
      16,    21,     0,     0,     0,   -34,   -34,     0,     0,     0,
     -41,     0,   -41,   -41,   -41,   -41,    18,     0,     0,    19,
      20,     0,   -34,    21,     0,   -34,   -34,   -41,   -41,   -34,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -41,     0,     0,   -41,   -41,   -57,
     -57,   -41,     0,   -57,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,   -57,     0,   -57,   -57,   -57,   -57,   -57,     0,   -57,
     -57,     0,     0,   -57,     0,    38,     0,     0,   -11
};

static const yytype_int16 yycheck[] =
{
      14,    46,    45,    99,   103,    26,     3,    21,    42,     0,
       1,    43,     3,     4,     5,     6,     7,     8,     1,    30,
      11,    12,    13,    14,    15,    27,    28,    18,    19,     1,
       1,    42,    45,     1,    31,     1,     7,     3,    29,     7,
      37,    40,    42,    42,    35,    43,    44,    38,    39,    94,
      95,    42,    73,    46,    75,    46,     1,   156,     3,   155,
       9,    10,    45,    46,    44,   110,    43,    44,    70,    83,
      84,    45,    43,    45,    43,    89,     1,    27,    28,    93,
      42,    42,    29,   179,    98,    99,    43,    41,    30,    13,
       1,    16,    17,    18,    19,   109,     3,    45,     3,   144,
      25,    26,    27,    28,    47,    43,    31,    32,    33,    34,
      35,    36,    37,    42,    47,    43,    41,    30,    43,    44,
      45,   135,    45,    43,   169,    43,    45,   156,   188,    70,
     175,   174,    91,    -1,   162,   180,   144,   131,    -1,    -1,
      -1,   155,   187,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   167,    -1,    -1,   170,    -1,    -1,    -1,
      -1,    -1,    -1,     0,     1,   179,     3,     4,     5,     6,
       7,     8,    -1,    -1,    11,    12,    13,    14,    15,    -1,
      -1,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,    35,    -1,
      -1,    38,    39,    -1,    -1,    42,    -1,     0,     1,    46,
       3,     4,     5,     6,     7,     8,    -1,    -1,    11,    12,
      13,    14,    15,    -1,    -1,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,
      -1,    -1,    35,    -1,    -1,    38,    39,    -1,    -1,    42,
      -1,     0,     1,    46,     3,     4,     5,     6,     7,     8,
      -1,    -1,    11,    12,    13,    14,    15,    -1,    -1,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      29,    -1,    -1,    -1,    -1,    -1,    35,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    -1,     1,    46,     3,     4,
       5,     6,     7,     8,    -1,    -1,    11,    12,    13,    14,
      15,    -1,    -1,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,
      35,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,    -1,
      -1,    46,    47,     1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    -1,    11,    12,    13,    14,    15,    -1,    -1,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    -1,    -1,    -1,     1,    -1,    35,    -1,    -1,
      38,    39,    -1,    -1,    42,    -1,    -1,    -1,    46,    47,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,     1,    -1,    40,    41,    42,    43,    44,    45,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    -1,    25,    26,    27,    28,
      -1,    -1,    31,    32,    33,    34,    35,    36,    37,     1,
      -1,    -1,    41,    -1,    43,    44,    45,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    25,    26,    27,    28,    -1,    -1,    31,
      32,    33,    34,    35,    36,    37,    -1,    -1,    -1,    41,
      -1,    43,    44,    45,     1,    -1,     3,     4,     5,     6,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,
      -1,    38,    39,    -1,    41,    42,    43,    44,    45,     1,
      -1,     3,     4,     5,     6,     7,    -1,     1,    -1,     3,
       4,     5,     6,    -1,    -1,    -1,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    35,    -1,    -1,    38,    39,    -1,    -1,
      42,    35,    -1,    45,    38,    39,    -1,    -1,    42,    -1,
       1,    45,     3,     4,     5,     6,    -1,    -1,     1,    -1,
       3,     4,     5,     6,    -1,    -1,    -1,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    -1,    -1,    38,    39,    -1,
      -1,    42,    35,    -1,    45,    38,    39,    -1,    -1,    42,
      43,    44,     1,    -1,     3,     4,     5,     6,     1,    -1,
       3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,    18,
      19,    -1,    -1,    -1,    -1,    18,    19,    -1,    -1,    -1,
       1,    -1,     3,     4,     5,     6,    35,    -1,    -1,    38,
      39,    -1,    35,    42,    43,    38,    39,    18,    19,    42,
      43,    -1,     1,    -1,     3,     4,     5,     6,     1,    -1,
       3,     4,     5,     6,    35,    -1,    -1,    38,    39,    18,
      19,    42,    -1,    -1,    -1,    18,    19,    -1,    -1,    -1,
       1,    -1,     3,     4,     5,     6,    35,    -1,    -1,    38,
      39,    -1,    35,    42,    -1,    38,    39,    18,    19,    42,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    -1,    -1,    38,    39,    16,
      17,    42,    -1,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    -1,    30,    31,    32,    33,    34,    -1,    36,
      37,    -1,    -1,    40,    -1,    42,    -1,    -1,    45
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    49,     0,     1,     3,     4,     5,     6,     7,     8,
      11,    12,    13,    14,    15,    18,    19,    29,    35,    38,
      39,    42,    46,    50,    51,    54,    56,    57,    58,    59,
      61,    62,    63,    66,    67,    78,    90,    96,    42,    49,
       1,     3,    93,    94,    68,    70,    85,    42,    81,    79,
       1,    51,    89,    51,    64,    45,     1,    16,    17,    25,
      26,    27,    28,    31,    32,    33,    34,    35,    36,    37,
      55,    57,     1,    56,    59,    56,     1,    20,    21,    22,
      23,    24,    30,    40,    42,    53,    49,    49,    43,    30,
      42,    44,    91,    42,    76,    76,    63,    43,    42,    42,
      45,    43,    29,   103,    54,     1,    51,    51,    60,    52,
      98,    51,    97,     3,    94,     1,    45,    95,    43,    51,
      63,    63,    86,    84,    51,     1,     7,    88,    89,     7,
      29,    62,    65,    41,    43,    44,    51,     1,    45,    63,
     102,     1,     7,    43,    99,   100,   101,    92,    77,    69,
      71,    13,     1,    82,     3,    45,   103,    47,    51,     3,
     102,    43,    44,    43,     9,    10,    72,    42,    47,    43,
      30,    89,    65,   101,    73,    75,    51,    63,    51,    45,
      76,    63,    87,    83,    89,    63,    43,    43,    74,    45,
      63,    72,    80
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
#line 102 "tp5.y"
    { flag_error=0; ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 103 "tp5.y"
    { flag_error=0; ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 104 "tp5.y"
    { flag_general=0; flag_error=0; ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 105 "tp5.y"
    { flag_error=0;  ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 119 "tp5.y"
    {if((yyvsp[(1) - (2)].s.tipo) == 4) { if(esVariableNueva(&listaDeVariables,(yyvsp[(1) - (2)].s.cadena))) {  insertarLValue(&listaDeLValue,(yyvsp[(1) - (2)].s.cadena),1, yylineno)  ;} } else{ insertarLValue(&listaDeLValue,(yyvsp[(1) - (2)].s.cadena),2, yylineno); } ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 120 "tp5.y"
    { agregarCola(&inicio, &fin, "expresion no reconocida", yylineno); flag_expresion = 1; ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 130 "tp5.y"
    { agregarCola(&inicio, &fin, "Un \"OPERADOR\" no es valido", yylineno); flag_expresion = 1; ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 135 "tp5.y"
    {       if((yyvsp[(1) - (3)].s.tipo) == 4 && (yyvsp[(3) - (3)].s.tipo) == 4)
                                                                {       
                                                                        if(esVariableNueva(&listaDeVariables, (yyvsp[(1) - (3)].s.cadena)) && esVariableNueva(&listaDeVariables, (yyvsp[(3) - (3)].s.cadena))) { insertarLValue(&listaDeLValue, (yyvsp[(1) - (3)].s.cadena), 1, yylineno); insertarLValue(&listaDeLValue, (yyvsp[(3) - (3)].s.cadena), 1, yylineno); } 
                                                                        else if(esVariableNueva(&listaDeVariables, (yyvsp[(1) - (3)].s.cadena))){ insertarLValue(&listaDeLValue, (yyvsp[(1) - (3)].s.cadena), 1, yylineno)  ; }
                                                                        else if(esVariableNueva(&listaDeVariables, (yyvsp[(3) - (3)].s.cadena))){ insertarLValue(&listaDeLValue, (yyvsp[(3) - (3)].s.cadena), 1, yylineno)  ; }
                                                                        else{ control(&listaDeControlDeDatos, tipoDeDatoVariable(&listaDeVariables, (yyvsp[(1) - (3)].s.cadena)), (yyvsp[(2) - (3)].s.caracter), tipoDeDatoVariable(&listaDeVariables, (yyvsp[(3) - (3)].s.cadena)), yylineno); }    /*Aqui*/  
                                                                } 
                                                                else if((yyvsp[(1) - (3)].s.tipo) == 4)
                                                                {       
                                                                        if(esVariableNueva(&listaDeVariables, (yyvsp[(1) - (3)].s.cadena))) { insertarLValue(&listaDeLValue, (yyvsp[(1) - (3)].s.cadena), 1, yylineno)  ; } 
                                                                        else { control(&listaDeControlDeDatos, tipoDeDatoVariable(&listaDeVariables, (yyvsp[(1) - (3)].s.cadena)), (yyvsp[(2) - (3)].s.caracter), (yyvsp[(3) - (3)].s.tipo), yylineno ); }   
                                                                } 
                                                                else if((yyvsp[(3) - (3)].s.tipo) == 4)
                                                                {    
                                                                        if(esVariableNueva(&listaDeVariables, (yyvsp[(3) - (3)].s.cadena))) { insertarLValue(&listaDeLValue, (yyvsp[(3) - (3)].s.cadena), 1, yylineno)  ; } 
                                                                        else { control(&listaDeControlDeDatos, (yyvsp[(1) - (3)].s.tipo), (yyvsp[(2) - (3)].s.caracter), tipoDeDatoVariable(&listaDeVariables, (yyvsp[(3) - (3)].s.cadena)), yylineno); }          
                                                                } 
                                                                else 
                                                                {    
                                                                        control(&listaDeControlDeDatos, (yyvsp[(1) - (3)].s.tipo), (yyvsp[(2) - (3)].s.caracter), (yyvsp[(3) - (3)].s.tipo), yylineno);       
                                                                }  
                                                        ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 173 "tp5.y"
    { agregarCola(&inicio, &fin, "Un \"OPERADOR\" no es valido", yylineno); flag_expresion = 1; ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 186 "tp5.y"
    { agregarCola(&inicio, &fin, "Un \"OPERADOR\" no es valido", yylineno); flag_expresion = 1; ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 193 "tp5.y"
    { agregarCola(&inicio, &fin, "Un \"OPERADOR\" no es valido", yylineno); flag_expresion = 1; ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 214 "tp5.y"
    { flag_expresion = 1; agregarCola(&inicio, &fin, "No se reconocio la \"CATEGORIA LEXICA\"\n", yylineno); ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 224 "tp5.y"
    { if(flag_SentCompuesta == 0) { flag_general = 0; }   else { agregarCola(&inicio, &fin, "Error al declarar la \"SENTENCIA COMPUESTA\"", lineaDefinicion);       flag_SentCompuesta = 0; flag_general = 1;} ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 225 "tp5.y"
    { if(flag_SentExpresion == 1) { agregarCola(&inicio, &fin, "Error al declarar la \"SENTENCIA DE EXPRESION\"", lineaDefinicion);                                       flag_SentExpresion = 0; flag_sentencia = 1; flag_general = 1; } ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 226 "tp5.y"
    { if(flag_SentControl == 1)  { agregarCola(&inicio, &fin, "Error al declarar la \"SENTENCIA DE CONTROL\"", lineaDefinicion);                                          flag_SentControl = 0; flag_sentencia = 1; flag_general = 1; } ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 227 "tp5.y"
    { if(flag_SentIteracion == 1)  { agregarCola(&inicio, &fin, "Error al declarar la \"SENTENCIA DE ITERRACION\"", lineaDefinicion);                                     flag_SentIteracion = 0; flag_sentencia = 1; flag_general = 1; } ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 228 "tp5.y"
    { if(flag_SentDeclaraciones == 1)  { agregarCola(&inicio, &fin, "Error al \"DECLARAR VARIABLES\"", lineaDefinicion);                                                  flag_SentDeclaraciones = 0; flag_sentencia = 1; flag_general = 1;} ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 229 "tp5.y"
    { if(flag_error == 1){ agregarCola(&inicio, &fin, "Se esperaba una expresion", lineaDefinicion); } ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 239 "tp5.y"
    {lineaDefinicion = yylineno;;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 239 "tp5.y"
    { if(flag_sentencia == 1){ flag_sentencia = 0; flag_SentCompuesta = 1;  };}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 255 "tp5.y"
    { if(flag_expresion == 1){ flag_SentExpresion = 1; flag_expresion = 0; } lineaDefinicion = yylineno; ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 266 "tp5.y"
    { lineaDefinicion = yylineno; ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 266 "tp5.y"
    {if(flag_general==1){flag_if=1;};}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 266 "tp5.y"
    {if(flag_if == 1){ flag_if=0; flag_SentControl=1; };}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 267 "tp5.y"
    { lineaDefinicion = yylineno; ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 267 "tp5.y"
    {if(flag_general==1){flag_if=1;};}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 267 "tp5.y"
    {if(flag_if == 1){ flag_if=0; flag_SentControl=1; };}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 271 "tp5.y"
    { if(flag_if == 0 ){ lineaDefinicion = yylineno; } ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 271 "tp5.y"
    { if(flag_general==1){flag_if=1;} ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 272 "tp5.y"
    { if(flag_if == 0){  lineaDefinicion = yylineno; } ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 272 "tp5.y"
    { if(flag_general==1){flag_if=1;} ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 276 "tp5.y"
    { if(flag_expresion==1){flag_expresion=0;flag_if=1;} ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 277 "tp5.y"
    { if(flag_expresion==1){flag_expresion=0;flag_if=1;} agregarCola(&inicio, &fin, "Se esperaba una expresion primaria", yylineno); ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 287 "tp5.y"
    { lineaDefinicion = yylineno; ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 287 "tp5.y"
    {if(flag_general==1){flag_bucles=1;};}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 287 "tp5.y"
    {if(flag_bucles == 1){flag_bucles=0; flag_SentIteracion=1; };}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 288 "tp5.y"
    { lineaDefinicion = yylineno; ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 288 "tp5.y"
    {if(flag_expresion==1){flag_expresion=0;flag_bucles=1;};}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 288 "tp5.y"
    {if(flag_general==1){flag_bucles=1;};}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 288 "tp5.y"
    {if(flag_bucles == 1){flag_bucles=0; flag_SentIteracion=1; };}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 289 "tp5.y"
    { agregarCola(&inicio, &fin, "Se esperaba una expresion primaria", yylineno); lineaDefinicion = yylineno; ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 289 "tp5.y"
    { flag_SentIteracion=1; ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 290 "tp5.y"
    { lineaDefinicion = yylineno; ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 290 "tp5.y"
    {if(flag_general==1){flag_bucles=1;};}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 290 "tp5.y"
    {if(flag_expresion ==1){flag_expresion=0;flag_bucles=1;};}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 290 "tp5.y"
    {if(flag_bucles == 1){flag_bucles=0; flag_SentIteracion=1; };}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 294 "tp5.y"
    { if(flag_expresion == 1){ agregarCola(&inicio, &fin, "Un parametro no fue reconocido en la \"SENTENCIA DE ITERRACION\"", yylineno); flag_bucles = 1; flag_expresion = 0; } ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 296 "tp5.y"
    { if(flag_bucles == 0 && flag_bucles == 0){ agregarCola(&inicio, &fin, "Un parametro no fue reconocido en la \"SENTENCIA DE ITERRACION\"", yylineno); flag_bucles = 1; } ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 300 "tp5.y"
    { if(flag_expresion == 1 && flag_bucles == 0){ agregarCola(&inicio, &fin, "Un parametro no fue reconocido en la \"SENTENCIA DE ITERRACION\"", yylineno); flag_bucles = 1; flag_expresion = 0; } ;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 311 "tp5.y"
    { lineaDefinicion = yylineno; if(flag_datos == 0){ strcpy(tipoDato, (yyvsp[(1) - (2)].s.cadena)); } ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 311 "tp5.y"
    { if(flag_datos==1){flag_datos = 0; flag_SentDeclaraciones = 1;};}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 311 "tp5.y"
    { insertarVariable(&listaDeDobleDeclaraciones, &listaDeVariables, &listaDeIdentificadores, (yyvsp[(1) - (5)].s.cadena), yylineno); ;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 321 "tp5.y"
    { if(flag_datos == 0){ insertarIdentificador(&listaDeIdentificadores, (yyvsp[(1) - (1)].s.cadena)); } ;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 322 "tp5.y"
    { if(flag_datos == 0){ insertarIdentificador(&listaDeIdentificadores, (yyvsp[(1) - (3)].s.cadena)); } ;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 324 "tp5.y"
    { if(flag_datos == 0){ agregarCola(&inicio, &fin, "Falta IDENTIFICADOR", yylineno); flag_datos = 1;} ;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 336 "tp5.y"
    { if(flag_datos == 0){ agregarCola(&inicio, &fin, "Falto el caracter de corte", yylineno); flag_datos = 1;} ;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 342 "tp5.y"
    { funcionRepetida = buscarFuncion(&listaFunciones, (yyvsp[(2) - (3)].s.cadena)); insertarFuncionSinRepetir(&listaFunciones, (yyvsp[(1) - (3)].s.cadena), (yyvsp[(2) - (3)].s.cadena)); lineaDefinicion= yylineno; ;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 342 "tp5.y"
    { if(flag_funciones == 1){  agregarCola(&inicio, &fin, "Se definio/declaro incorrectamente la funcion", lineaDefinicion); flag_funciones = 0; funcionRepetida = 0;} ;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 343 "tp5.y"
    { lineaDefinicion = yylineno; ;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 343 "tp5.y"
    { agregarCola(&inicio, &fin, "Se definio/declaro incorrectamente la funcion", lineaDefinicion); flag_funciones = 0; ;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 347 "tp5.y"
    {        if(flag_funciones == 1)
                                                { 
                                                        agregarCola(&inicio, &fin, "Se declararon incorrectamente los parametros de la funcion", lineaDefinicion);  
                                                } 
                                        ;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 361 "tp5.y"
    { if(funcionRepetida == 0){ agregarParametros(&(*listaFunciones).parametros, (yyvsp[(1) - (2)].s.cadena)); } ;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 362 "tp5.y"
    { if(funcionRepetida == 0){ agregarParametros(&(*listaFunciones).parametros, (yyvsp[(1) - (1)].s.cadena)); }  ;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 363 "tp5.y"
    { if(flag_funciones == 0) { agregarCola(&inicio, &fin, "Valor no reconocido para asignar ", yylineno); } flag_funciones = 1; ;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 367 "tp5.y"
    { funcion = "declaro"; ;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 368 "tp5.y"
    { if(flag_general == 1){flag_general = 0; flag_funciones = 1; }; funcion = "definio"; ;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 369 "tp5.y"
    { agregarCola(&inicio, &fin, "Se esperaba un punto y como o una sentencia compuesta\n", yylineno); flag_funciones = 1; ;}
    break;



/* Line 1455 of yacc.c  */
#line 2204 "tp5.tab.c"
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
#line 385 "tp5.y"


int main()
{
    //yydebug = 1;
    yyin = fopen("gramatica.txt", "r");
    yyparse();

    informeDeLectura(&listaDeVariables, &listaFunciones, &listaDeControlDeDatos, &listaDeLValue, &listaDeDobleDeclaraciones, &inicio);
    //printf("-----------------------\n\n\nfin\n\n------------------------");
    printf("\n\n\n\n");
}

