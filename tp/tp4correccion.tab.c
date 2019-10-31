
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

Variables listaDeVariables = NULL;
Identificadores listaDeIdentificadores = NULL;

Funciones listaFunciones = NULL;

Semanticos erroresSemanticos = NULL;

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



/* Line 189 of yacc.c  */
#line 112 "tp4correccion.tab.c"

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
#line 39 "tp4correccion.y"

struct{
  char cadena[30];
  char caracter;
  int entero;
  int tipo[10];
}s;




/* Line 214 of yacc.c  */
<<<<<<< HEAD
#line 185 "tp4correccion.tab.c"
=======
#line 191 "tp4correccion.tab.c"
>>>>>>> 7c595378d79f1267335122c72d284c5ddcde1dbe
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
<<<<<<< HEAD
#line 197 "tp4correccion.tab.c"
=======
#line 203 "tp4correccion.tab.c"
>>>>>>> 7c595378d79f1267335122c72d284c5ddcde1dbe

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
<<<<<<< HEAD
#define YYLAST   677
=======
#define YYLAST   651
>>>>>>> 7c595378d79f1267335122c72d284c5ddcde1dbe

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  54
/* YYNRULES -- Number of rules.  */
#define YYNRULES  129
/* YYNRULES -- Number of states.  */
#define YYNSTATES  197

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
<<<<<<< HEAD
       0,     0,     3,     4,     7,     9,    12,    15,    17,    21,
      23,    25,    27,    29,    31,    33,    35,    37,    39,    43,
      45,    47,    49,    51,    53,    55,    57,    59,    61,    63,
      65,    67,    69,    71,    73,    76,    79,    82,    84,    86,
      88,    90,    92,    94,    96,    98,   103,   108,   110,   114,
     115,   117,   121,   123,   125,   127,   129,   131,   133,   135,
     137,   139,   143,   145,   150,   154,   157,   158,   161,   162,
     163,   164,   174,   175,   176,   177,   186,   187,   188,   189,
     199,   200,   204,   205,   206,   207,   219,   220,   221,   222,
     231,   232,   233,   234,   245,   250,   252,   254,   256,   257,
     258,   263,   266,   268,   272,   275,   280,   283,   285,   288,
     292,   293,   295,   297,   298,   305,   310,   313,   315,   317,
     321,   324,   326,   328,   330,   332,   334,   336,   339
=======
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
     260,   261,   262,   268,   270,   274,   277,   282,   285,   287,
     290,   294,   295,   297,   299,   300,   307,   312,   315,   317,
     319,   323,   326,   328,   330,   332,   334,   336,   338,   341
>>>>>>> 7c595378d79f1267335122c72d284c5ddcde1dbe
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
<<<<<<< HEAD
      49,     0,    -1,    -1,    49,    50,    -1,    29,    -1,    94,
      29,    -1,    61,    29,    -1,    53,    -1,    58,    52,    51,
      -1,     1,    -1,    30,    -1,    20,    -1,    21,    -1,    22,
      -1,    23,    -1,    24,    -1,     1,    -1,    55,    -1,    55,
      54,    53,    -1,    16,    -1,    17,    -1,    31,    -1,    32,
      -1,    25,    -1,    26,    -1,    28,    -1,    27,    -1,    33,
      -1,    34,    -1,    35,    -1,    36,    -1,    37,    -1,     1,
      -1,    58,    -1,    57,    55,    -1,    56,    55,    -1,    55,
      56,    -1,    18,    -1,    19,    -1,     1,    -1,    38,    -1,
      35,    -1,    39,    -1,     1,    -1,    60,    -1,    58,    40,
      51,    41,    -1,    58,    42,    59,    43,    -1,    51,    -1,
      59,    44,    51,    -1,    -1,     4,    -1,    42,    51,    43,
      -1,     5,    -1,     6,    -1,     3,    -1,     1,    -1,    62,
      -1,    64,    -1,    65,    -1,    77,    -1,    88,    -1,    15,
      87,    45,    -1,     1,    -1,    46,   100,    63,    47,    -1,
      61,   100,    63,    -1,    61,   100,    -1,    -1,    51,    45,
      -1,    -1,    -1,    -1,     8,    66,    42,    51,    43,    67,
      62,    68,    72,    -1,    -1,    -1,    -1,    11,    69,    42,
      51,    43,    70,    62,    71,    -1,    -1,    -1,    -1,     9,
      73,    42,    51,    74,    43,    62,    75,    72,    -1,    -1,
      10,    76,    62,    -1,    -1,    -1,    -1,    14,    78,    42,
      86,    45,    87,    45,    87,    43,    62,    79,    -1,    -1,
      -1,    -1,    13,    80,    42,    51,    81,    43,    62,    82,
      -1,    -1,    -1,    -1,    12,    83,    62,    84,    13,    42,
      51,    85,    43,    45,    -1,     7,     3,    30,    51,    -1,
      87,    -1,     1,    -1,    51,    -1,    -1,    -1,     7,    90,
      89,    93,    -1,     1,    93,    -1,    91,    -1,    90,    44,
      91,    -1,     3,    92,    -1,     3,    92,    30,    51,    -1,
       4,    92,    -1,     1,    -1,    40,    41,    -1,    40,     4,
      41,    -1,    -1,    45,    -1,     1,    -1,    -1,     7,     3,
      42,    95,    96,    99,    -1,     1,    42,    43,    99,    -1,
      97,    43,    -1,    43,    -1,    98,    -1,    97,    44,    98,
      -1,     7,     3,    -1,     7,    -1,     1,    -1,    45,    -1,
      62,    -1,     1,    -1,    29,    -1,   100,    29,    -1,    -1
=======
      52,     0,    -1,    -1,    52,    53,    -1,    32,    -1,    98,
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
      91,    -1,    18,    90,    48,    -1,     1,    -1,    49,   104,
      66,    50,    -1,    64,   104,    66,    -1,    64,   104,    -1,
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
      -1,    -1,    10,    94,    92,    97,    93,    -1,    95,    -1,
      94,    47,    95,    -1,     3,    96,    -1,     3,    96,    33,
      54,    -1,     4,    96,    -1,     1,    -1,    43,    44,    -1,
      43,     4,    44,    -1,    -1,    48,    -1,     1,    -1,    -1,
      10,     3,    45,    99,   100,   103,    -1,     1,    45,    46,
     103,    -1,   101,    46,    -1,    46,    -1,   102,    -1,   101,
      47,   102,    -1,    10,     3,    -1,    10,    -1,     1,    -1,
      48,    -1,    65,    -1,     1,    -1,    32,    -1,   104,    32,
      -1,    -1
>>>>>>> 7c595378d79f1267335122c72d284c5ddcde1dbe
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
<<<<<<< HEAD
       0,    89,    89,    91,    95,    96,    97,   111,   112,   113,
     117,   118,   119,   120,   121,   122,   123,   127,   128,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   149,   150,   151,   152,   156,   157,   158,
     162,   163,   164,   165,   169,   170,   171,   175,   176,   177,
     181,   182,   183,   184,   185,   186,   196,   197,   198,   199,
     200,   201,   202,   212,   216,   217,   218,   228,   239,   239,
     239,   239,   240,   240,   240,   240,   244,   244,   244,   244,
     245,   245,   246,   257,   257,   257,   258,   258,   258,   258,
     259,   259,   259,   259,   263,   264,   265,   269,   270,   280,
     280,   281,   285,   286,   290,   291,   292,   293,   298,   299,
     300,   304,   305,   311,   311,   312,   316,   317,   321,   322,
     326,   327,   328,   332,   333,   334,   345,   346,   347
=======
       0,    92,    92,    94,    98,    99,   100,   101,   114,   115,
     116,   120,   121,   122,   123,   124,   125,   126,   130,   131,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   152,   153,   154,   155,   159,   160,
     161,   165,   166,   167,   168,   172,   173,   174,   178,   179,
     180,   184,   185,   186,   187,   188,   189,   199,   200,   201,
     202,   203,   204,   205,   215,   219,   220,   221,   231,   242,
     242,   242,   242,   243,   243,   243,   243,   247,   247,   247,
     247,   248,   248,   249,   260,   260,   260,   261,   261,   261,
     261,   262,   262,   262,   262,   266,   267,   268,   272,   273,
     283,   283,   283,   288,   289,   293,   294,   295,   296,   301,
     302,   303,   307,   308,   314,   314,   315,   319,   320,   324,
     325,   329,   330,   331,   335,   336,   337,   348,   349,   350
>>>>>>> 7c595378d79f1267335122c72d284c5ddcde1dbe
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFICADOR", "NUM", "CCARACTER",
<<<<<<< HEAD
  "LITERALESCADENA", "TIPODATO", "IF", "ELSEIF", "ELSE", "SWITCH", "DO",
  "WHILE", "FOR", "RETURN", "OR", "AND", "INCREMENTO", "DECREMENTO",
  "SUMAASIGNACION", "RESTAASIGNACION", "MULTIASIGNACION", "DIVASIGNACION",
  "RESTOASIGNACION", "MENORIGUAL", "MAYORIGUAL", "IGUALDAD", "DISTINTO",
  "'\\n'", "'='", "'<'", "'>'", "'+'", "'-'", "'*'", "'/'", "'%'", "'&'",
  "'!'", "'['", "']'", "'('", "')'", "','", "';'", "'{'", "'}'", "$accept",
  "input", "line", "expresion", "operAsignacion", "expBinaria",
  "operBinario", "expUnaria", "incremento", "operUnario", "expPostfijo",
  "listaDeArgumentos", "expPrimaria", "sentencia", "sentCompuesta",
  "listaSentencias", "sentExpresion", "sentSeleccion", "$@1", "$@2", "$@3",
  "$@4", "$@5", "$@6", "estructura", "$@7", "$@8", "$@9", "$@10",
  "sentIteracion", "$@11", "$@12", "$@13", "$@14", "$@15", "$@16", "$@17",
  "$@18", "expOrDeclaracion", "expOP", "sentenciaDeclaracion", "$@19",
=======
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
  "expOrDeclaracion", "expOP", "sentenciaDeclaracion", "$@19", "$@20",
>>>>>>> 7c595378d79f1267335122c72d284c5ddcde1dbe
  "listaDeIdentificadores", "identificadoryAsignacion", "opcional",
  "finalizador", "declaracionyDefinicionDeFunciones", "$@21", "parametros",
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
     275,   276,   277,   278,   279,   280,   281,   282,   283,    10,
      61,    60,    62,    43,    45,    42,    47,    37,    38,    33,
      91,    93,    40,    41,    44,    59,   123,   125
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
<<<<<<< HEAD
       0,    48,    49,    49,    50,    50,    50,    51,    51,    51,
      52,    52,    52,    52,    52,    52,    52,    53,    53,    54,
      54,    54,    54,    54,    54,    54,    54,    54,    54,    54,
      54,    54,    54,    55,    55,    55,    55,    56,    56,    56,
      57,    57,    57,    57,    58,    58,    58,    59,    59,    59,
      60,    60,    60,    60,    60,    60,    61,    61,    61,    61,
      61,    61,    61,    62,    63,    63,    63,    64,    66,    67,
      68,    65,    69,    70,    71,    65,    73,    74,    75,    72,
      76,    72,    72,    78,    79,    77,    80,    81,    82,    77,
      83,    84,    85,    77,    86,    86,    86,    87,    87,    89,
      88,    88,    90,    90,    91,    91,    91,    91,    92,    92,
      92,    93,    93,    95,    94,    94,    96,    96,    97,    97,
      98,    98,    98,    99,    99,    99,   100,   100,   100
=======
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
      92,    93,    91,    94,    94,    95,    95,    95,    95,    96,
      96,    96,    97,    97,    99,    98,    98,   100,   100,   101,
     101,   102,   102,   102,   103,   103,   103,   104,   104,   104
>>>>>>> 7c595378d79f1267335122c72d284c5ddcde1dbe
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     2,     2,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
<<<<<<< HEAD
       1,     1,     1,     1,     2,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     4,     1,     3,     0,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     4,     3,     2,     0,     2,     0,     0,
       0,     9,     0,     0,     0,     8,     0,     0,     0,     9,
       0,     3,     0,     0,     0,    11,     0,     0,     0,     8,
       0,     0,     0,    10,     4,     1,     1,     1,     0,     0,
       4,     2,     1,     3,     2,     4,     2,     1,     2,     3,
       0,     1,     1,     0,     6,     4,     2,     1,     1,     3,
       2,     1,     1,     1,     1,     1,     1,     2,     0
=======
       1,     1,     1,     1,     1,     2,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     4,     1,     3,
       0,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     4,     3,     2,     0,     2,     0,
       0,     0,     9,     0,     0,     0,     8,     0,     0,     0,
       9,     0,     3,     0,     0,     0,    11,     0,     0,     0,
       8,     0,     0,     0,    10,     4,     1,     1,     1,     0,
       0,     0,     5,     1,     3,     2,     4,     2,     1,     2,
       3,     0,     1,     1,     0,     6,     4,     2,     1,     1,
       3,     2,     1,     1,     1,     1,     1,     1,     2,     0
>>>>>>> 7c595378d79f1267335122c72d284c5ddcde1dbe
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
<<<<<<< HEAD
       2,     0,     1,     0,    54,    50,    52,    53,     0,    68,
      72,    90,    86,    83,     0,    37,    38,     4,    41,    40,
      42,     0,   128,     3,     0,     7,     0,     0,     0,     0,
      44,     0,    56,    57,    58,    59,    60,     0,   112,     0,
     111,   101,   107,   110,   110,    99,   102,     0,     0,     0,
       0,     0,    55,    97,     0,     0,   126,     0,    67,    39,
      19,    20,    23,    24,    26,    25,    21,    22,    27,    28,
      29,    30,    31,     0,    36,    55,     0,    33,     0,    16,
      11,    12,    13,    14,    15,    10,     0,     0,     0,     6,
       5,     0,     0,   113,   104,   106,     0,     0,     0,     0,
      91,     0,     0,    61,    51,     0,     0,   127,   128,     0,
      18,    39,     0,    47,     0,     8,   125,   123,   124,   115,
       0,   108,     0,     0,   110,   103,   100,     0,     0,     0,
      87,    55,     0,     0,    95,     0,    63,    45,    46,     0,
     109,   122,   121,   117,     0,     0,   118,   105,    69,    73,
       0,     0,     0,     0,    64,    48,   120,   114,   116,     0,
       0,     0,     0,     0,     0,     0,   119,    70,    74,    92,
      88,    94,     0,    82,    75,     0,    89,     0,    76,    80,
      71,     0,     0,     0,     0,    93,    84,     0,    81,    85,
      77,     0,     0,    78,    82,    79
=======
       2,     0,     1,    56,    55,    51,    53,    54,     0,    69,
      73,    91,    87,    84,     0,    38,    39,     4,    42,    41,
      43,     0,   129,     3,     0,     8,     0,     0,     0,     0,
      45,     0,    57,    58,    59,    60,    61,     0,     7,     0,
     108,   111,   111,   100,   103,     0,     0,     0,     0,     0,
      56,    98,     0,     0,   127,     0,    68,    40,    20,    21,
      24,    25,    27,    26,    22,    23,    28,    29,    30,    31,
      32,     0,    37,    56,     0,    34,     0,    17,    12,    13,
      14,    15,    16,    11,     0,     0,     0,     6,     5,     0,
       0,   114,   105,   107,     0,     0,     0,     0,    92,     0,
       0,    62,    52,    56,     0,   128,   129,     0,    19,    40,
       0,    48,     0,     9,   126,   124,   125,   116,     0,   109,
       0,     0,   111,   104,   113,   112,   101,     0,     0,     0,
      88,    56,     0,     0,    96,     0,    64,    46,    47,     0,
     110,   123,   122,   118,     0,     0,   119,   106,   102,    70,
      74,     0,     0,     0,     0,    65,    49,   121,   115,   117,
       0,     0,     0,     0,     0,     0,     0,   120,    71,    75,
      93,    89,    95,     0,    83,    76,     0,    90,     0,    77,
      81,    72,     0,     0,     0,     0,    94,    85,     0,    82,
      86,    78,     0,     0,    79,    83,    80
>>>>>>> 7c595378d79f1267335122c72d284c5ddcde1dbe
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
<<<<<<< HEAD
      -1,     1,    23,    53,    88,    25,    73,    26,    27,    28,
      29,   114,    30,   108,    32,   109,    33,    34,    47,   160,
     173,    48,   161,   174,   180,   183,   191,   194,   184,    35,
      51,   189,    50,   151,   176,    49,   129,   175,   133,    54,
      36,    97,    45,    46,    94,    41,    37,   122,   144,   145,
     146,   119,    57
=======
      -1,     1,    23,    51,    86,    25,    71,    26,    27,    28,
      29,   112,    30,   106,    32,   107,    33,    34,    45,   161,
     174,    46,   162,   175,   181,   184,   192,   195,   185,    35,
      49,   190,    48,   152,   177,    47,   129,   176,   133,    52,
      36,    95,   148,    43,    44,    92,   126,    37,   120,   144,
     145,   146,   117,    55
>>>>>>> 7c595378d79f1267335122c72d284c5ddcde1dbe
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
<<<<<<< HEAD
#define YYPACT_NINF -102
static const yytype_int16 yypact[] =
{
    -102,    22,  -102,   317,  -102,  -102,  -102,  -102,    14,  -102,
    -102,  -102,  -102,  -102,   484,  -102,  -102,  -102,  -102,  -102,
    -102,   585,   -13,  -102,    -7,  -102,    76,   607,   607,   357,
    -102,    -5,  -102,  -102,  -102,  -102,  -102,    18,  -102,     0,
    -102,  -102,  -102,   -21,    19,    28,  -102,    20,    31,    29,
      32,    34,   127,  -102,    33,    36,  -102,   223,  -102,   629,
    -102,  -102,  -102,  -102,  -102,  -102,  -102,  -102,  -102,  -102,
    -102,  -102,  -102,   607,  -102,   635,   394,    23,   431,  -102,
    -102,  -102,  -102,  -102,  -102,  -102,   585,   535,   585,  -102,
    -102,     4,    -2,  -102,    50,  -102,    41,    13,   585,   585,
    -102,   585,   476,  -102,  -102,   176,    41,  -102,   -13,    35,
    -102,  -102,    40,  -102,   -33,  -102,  -102,  -102,  -102,  -102,
      43,  -102,     5,   585,    19,  -102,  -102,    45,    46,    70,
    -102,   527,    87,    51,  -102,   270,  -102,  -102,  -102,   585,
    -102,  -102,    88,  -102,     4,   -12,  -102,  -102,  -102,  -102,
      63,    71,    93,   484,  -102,  -102,  -102,  -102,  -102,     6,
      29,    29,   585,    29,   585,    61,  -102,  -102,  -102,  -102,
    -102,  -102,   579,    57,  -102,    81,  -102,    82,  -102,  -102,
    -102,    84,    29,    85,    29,  -102,  -102,   585,  -102,  -102,
    -102,    83,    29,  -102,    57,  -102
=======
#define YYPACT_NINF -100
static const yytype_int16 yypact[] =
{
    -100,   156,  -100,   415,  -100,  -100,  -100,  -100,    12,  -100,
    -100,  -100,  -100,  -100,   470,  -100,  -100,  -100,  -100,  -100,
    -100,   550,   -18,  -100,   -38,  -100,   305,   559,   559,   274,
    -100,   -11,  -100,  -100,  -100,  -100,  -100,    -9,  -100,     5,
    -100,   -16,   -15,    13,  -100,    16,    19,    23,    31,    32,
      85,  -100,    33,    34,  -100,   199,  -100,   581,  -100,  -100,
    -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,
    -100,   559,  -100,   606,   336,    30,   367,  -100,  -100,  -100,
    -100,  -100,  -100,  -100,   550,   501,   550,  -100,  -100,     8,
       3,  -100,    45,  -100,    64,    10,   550,   550,  -100,   550,
     424,  -100,  -100,    21,    64,  -100,   -18,    29,  -100,  -100,
      38,  -100,   -28,  -100,  -100,  -100,  -100,  -100,    43,  -100,
       2,   550,   -15,  -100,  -100,  -100,  -100,    46,    47,    75,
    -100,   479,    94,    51,  -100,   242,  -100,  -100,  -100,   550,
    -100,  -100,    97,  -100,     8,   -13,  -100,  -100,  -100,  -100,
    -100,    57,    58,    70,   470,  -100,  -100,  -100,  -100,  -100,
       7,    23,    23,   550,    23,   550,    60,  -100,  -100,  -100,
    -100,  -100,  -100,   528,    28,  -100,    59,  -100,    63,  -100,
    -100,  -100,    62,    23,    66,    23,  -100,  -100,   550,  -100,
    -100,  -100,    67,    23,  -100,    28,  -100
>>>>>>> 7c595378d79f1267335122c72d284c5ddcde1dbe
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
<<<<<<< HEAD
    -102,  -102,  -102,    -1,  -102,    62,  -102,    42,   -23,  -102,
     -19,  -102,  -102,   135,   -45,     7,  -102,  -102,  -102,  -102,
    -102,  -102,  -102,  -102,   -54,  -102,  -102,  -102,  -102,  -102,
    -102,  -102,  -102,  -102,  -102,  -102,  -102,  -102,  -102,  -101,
    -102,  -102,  -102,    47,    97,    52,  -102,  -102,  -102,  -102,
     -15,     8,    48
=======
    -100,  -100,  -100,    -1,  -100,    41,  -100,    17,   -24,  -100,
     -22,  -100,  -100,   113,   -43,   -20,  -100,  -100,  -100,  -100,
    -100,  -100,  -100,  -100,   -79,  -100,  -100,  -100,  -100,  -100,
    -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,   -99,
    -100,  -100,  -100,  -100,    42,    80,  -100,  -100,  -100,  -100,
    -100,   -36,   -27,    22
>>>>>>> 7c595378d79f1267335122c72d284c5ddcde1dbe
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -99
static const yytype_int16 yytable[] =
{
<<<<<<< HEAD
      24,   134,   120,    74,   100,   116,   141,   141,    77,    77,
     138,   139,   142,   142,    38,    42,    56,    43,    44,    92,
      55,    93,     2,     3,    89,     4,     5,     6,     7,     8,
       9,   158,   159,    10,    11,    12,    13,    14,    58,   121,
      15,    16,    42,    91,   124,    44,   118,    90,   143,   117,
      22,    17,   165,    74,    77,    74,    24,    18,    40,    92,
      19,    20,    98,    86,    21,    87,   178,   179,    22,    76,
      78,   177,    96,    99,   101,    22,   102,    59,   103,   104,
     123,   137,   136,   150,   140,   112,   113,   115,   148,   149,
     152,   156,    60,    61,    15,    16,   153,   127,   128,   118,
     130,    62,    63,    64,    65,   162,   172,    66,    67,    68,
      69,    70,    71,    72,   163,   167,   168,   -17,   170,   -17,
     -17,   -17,   147,   164,   181,   182,   192,   187,    -9,   185,
     -39,   -39,   -39,   -39,    24,   110,    31,   186,   155,   188,
     195,    95,   154,   125,   166,   -39,   -39,   193,     0,   126,
       0,     0,   157,     0,     0,     0,   135,     0,     0,     0,
       0,   169,   -39,   171,     0,   -39,   -39,     0,    -9,   -39,
      -9,    -9,    -9,     0,     0,     0,     0,    38,     0,   -39,
     -39,   -39,   -39,   -62,   -62,     0,   190,   -62,   -62,   -62,
     -62,   -62,   -55,   -55,   -39,   -39,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -62,   -55,   -55,   -55,   -55,
     -55,   -39,   -55,   -55,   -39,   -39,   -55,     0,   -39,     0,
       0,    40,   -62,   -62,   105,     0,     4,     5,     6,     7,
     106,     9,     0,     0,    10,    11,    12,    13,    14,     0,
       0,    15,    16,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   107,     0,     0,     0,     0,     0,    18,     0,
       0,    19,    20,     0,     0,    21,     0,     0,     0,    22,
     -66,   105,     0,     4,     5,     6,     7,   106,     9,     0,
       0,    10,    11,    12,    13,    14,     0,     0,    15,    16,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   107,
       0,     0,     0,     0,     0,    18,     0,     0,    19,    20,
       0,     0,    21,     0,     0,     0,    22,   -65,    38,     0,
     -39,   -39,   -39,   -39,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -55,   -55,   -39,   -39,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -62,   -55,   -55,   -55,
     -55,   -55,   -39,   -55,   -55,   -39,   -39,   -55,    79,    39,
       0,     0,    40,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -33,   -33,   -33,   -33,    80,    81,    82,
      83,    84,   -33,   -33,   -33,   -33,     0,    85,   -33,   -33,
     -33,   -33,   -33,   -33,   -33,   111,     0,    86,   -33,    87,
     -33,   -33,   -33,     0,     0,     0,     0,     0,     0,     0,
     -35,   -35,    15,    16,     0,     0,     0,     0,     0,   -35,
     -35,   -35,   -35,     0,     0,   -35,   -35,   -35,   -35,   -35,
     -35,   -35,   111,     0,     0,   -35,     0,   -35,   -35,   -35,
       0,     0,     0,     0,     0,     0,     0,   -34,   -34,    15,
      16,     0,     0,     0,     0,     0,   -34,   -34,   -34,   -34,
       0,     0,   -34,   -34,   -34,   -34,   -34,   -34,   -34,     0,
       0,     0,   -34,     0,   -34,   -34,   -34,   131,     0,     4,
       5,     6,     7,   132,     0,    52,     0,     4,     5,     6,
       7,     0,     0,     0,    15,    16,     0,     0,     0,     0,
       0,     0,    15,    16,     0,     0,     0,     0,     0,     0,
       0,    18,     0,     0,    19,    20,     0,     0,    21,    18,
       0,   -98,    19,    20,     0,     0,    21,     0,   -39,   -98,
     -39,   -39,   -39,   -39,     0,     0,    52,     0,     4,     5,
       6,     7,     0,     0,     0,   -39,   -39,     0,     0,     0,
       0,     0,     0,    15,    16,     0,     0,     0,     0,     0,
       0,     0,   -39,     0,     0,   -39,   -39,     0,     0,   -39,
      18,     0,    -9,    19,    20,     0,     0,    21,   -49,   -49,
      52,     0,     4,     5,     6,     7,    52,     0,     4,     5,
       6,     7,     0,     0,     0,     0,     0,    15,    16,     0,
       0,     0,     0,    15,    16,     0,     0,     0,    75,     0,
       4,     5,     6,     7,    18,     0,     0,    19,    20,     0,
      18,    21,   -98,    19,    20,    15,    16,    21,     0,     0,
     -32,     0,   -32,   -32,   -32,   -32,   -39,     0,   -39,   -39,
     -39,   -39,    18,     0,     0,    19,    20,   -32,   -32,    21,
       0,     0,     0,   -39,   -39,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -32,     0,     0,   -32,   -32,     0,
     -39,   -32,     0,   -39,   -39,     0,     0,   -39
=======
      24,   134,    72,   141,    98,    75,    75,   118,   141,   114,
      56,   124,   142,    40,    54,    41,    42,   142,   138,   139,
      53,    87,   -40,    88,   -40,   -40,   -40,    90,    90,    91,
     -40,   -63,   -63,   159,   160,   -63,   -63,   -63,   -63,   -63,
     179,   180,   -40,   -40,    74,    76,   116,   119,   143,    75,
      72,    89,    72,   -63,    24,   166,   115,    22,   125,   -40,
      94,    96,   -40,   -40,    97,    40,   -40,   122,    42,   -10,
     -63,   -63,    22,    84,   178,    85,    99,   100,   121,   136,
     102,   101,   137,   110,   111,   113,   -10,   140,   -40,   -40,
     -40,   151,   149,   150,   -40,   127,   128,   153,   130,   154,
     157,   116,   163,   165,   164,   182,   -40,   -40,   173,   183,
     186,   188,   108,   193,    31,   155,   196,   158,   168,   169,
     147,   171,    93,   -40,   167,     0,   -40,   -40,   135,   -10,
     -40,   -10,   -10,   -10,    24,     0,   123,     0,   156,     0,
     187,     0,   189,     0,     0,     0,     0,     0,     0,     0,
     194,     0,     0,     0,     0,     0,     2,     3,     0,     4,
       5,     6,   170,     0,   172,     7,     8,     9,     0,     0,
      10,    11,    12,    13,    14,     0,     0,    15,    16,     0,
       0,     0,     0,     0,     0,     0,     0,   191,    17,     0,
       0,     0,     0,     0,    18,     0,     0,    19,    20,     0,
     103,    21,     4,     5,     6,    22,     0,     0,     7,   104,
       9,     0,     0,    10,    11,    12,    13,    14,     0,     0,
      15,    16,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   105,     0,     0,     0,     0,     0,    18,     0,     0,
      19,    20,     0,   103,    21,     4,     5,     6,    22,   -67,
       0,     7,   104,     9,     0,     0,    10,    11,    12,    13,
      14,     0,     0,    15,    16,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   105,    77,     0,     0,     0,     0,
      18,     0,     0,    19,    20,     0,     0,    21,     0,     0,
       0,    22,   -66,   -34,   -34,   -34,   -34,    78,    79,    80,
      81,    82,   -34,   -34,   -34,   -34,    57,    83,   -34,   -34,
     -34,   -34,   -34,   -34,   -34,     0,     0,    84,   -34,    85,
     -34,   -34,   -34,     0,    58,    59,    15,    16,     0,     0,
       0,     0,     0,    60,    61,    62,    63,   109,     0,    64,
      65,    66,    67,    68,    69,    70,     0,     0,     0,   -18,
       0,   -18,   -18,   -18,     0,   -36,   -36,    15,    16,     0,
       0,     0,     0,     0,   -36,   -36,   -36,   -36,   109,     0,
     -36,   -36,   -36,   -36,   -36,   -36,   -36,     0,     0,     0,
     -36,     0,   -36,   -36,   -36,     0,   -35,   -35,    15,    16,
       0,     0,     0,     0,     0,   -35,   -35,   -35,   -35,     0,
       0,   -35,   -35,   -35,   -35,   -35,   -35,   -35,     0,     0,
       0,   -35,     0,   -35,   -35,   -35,   -40,     0,   -40,   -40,
     -40,     0,     0,     0,   -40,   131,     0,     4,     5,     6,
       0,     0,     0,     7,   132,     0,   -40,   -40,     0,     0,
       0,     0,     0,     0,     0,    15,    16,    38,     0,     0,
       0,     0,     0,   -40,     0,     0,   -40,   -40,     0,     0,
      39,     0,    18,   -10,     0,    19,    20,     0,     0,    21,
       0,    50,   -99,     4,     5,     6,     0,     0,     0,     7,
     -40,     0,   -40,   -40,   -40,     0,     0,     0,   -40,     0,
       0,    15,    16,     0,     0,     0,     0,     0,     0,     0,
     -40,   -40,    50,     0,     4,     5,     6,     0,    18,     0,
       7,    19,    20,     0,     0,    21,     0,   -40,   -99,     0,
     -40,   -40,    15,    16,   -40,     0,     0,   -10,     0,    50,
       0,     4,     5,     6,     0,     0,     0,     7,     0,    18,
       0,     0,    19,    20,     0,     0,    21,   -50,   -50,    15,
      16,    50,     0,     4,     5,     6,     0,     0,     0,     7,
      73,     0,     4,     5,     6,     0,    18,     0,     7,    19,
      20,    15,    16,    21,   -99,     0,     0,     0,     0,     0,
      15,    16,   -33,     0,   -33,   -33,   -33,     0,    18,     0,
     -33,    19,    20,     0,     0,    21,     0,    18,     0,     0,
      19,    20,   -33,   -33,    21,     0,     0,   -40,     0,   -40,
     -40,   -40,     0,     0,     0,   -40,     0,     0,     0,   -33,
       0,     0,   -33,   -33,     0,     0,   -33,   -40,   -40,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -40,     0,     0,   -40,   -40,     0,
       0,   -40
>>>>>>> 7c595378d79f1267335122c72d284c5ddcde1dbe
};

static const yytype_int16 yycheck[] =
{
<<<<<<< HEAD
       1,   102,     4,    26,    49,     1,     1,     1,    27,    28,
      43,    44,     7,     7,     1,     1,    29,     3,     4,    40,
      21,    42,     0,     1,    29,     3,     4,     5,     6,     7,
       8,    43,    44,    11,    12,    13,    14,    15,    45,    41,
      18,    19,     1,    43,     3,     4,    91,    29,    43,    45,
      46,    29,   153,    76,    73,    78,    57,    35,    45,    40,
      38,    39,    42,    40,    42,    42,     9,    10,    46,    27,
      28,   172,    44,    42,    42,    46,    42,     1,    45,    43,
      30,    41,    47,    13,    41,    86,    87,    88,    43,    43,
       3,     3,    16,    17,    18,    19,    45,    98,    99,   144,
     101,    25,    26,    27,    28,    42,    45,    31,    32,    33,
      34,    35,    36,    37,    43,   160,   161,    41,   163,    43,
      44,    45,   123,    30,    43,    43,    43,    42,     1,    45,
       3,     4,     5,     6,   135,    73,     1,   182,   139,   184,
     194,    44,   135,    96,   159,    18,    19,   192,    -1,    97,
      -1,    -1,   144,    -1,    -1,    -1,   108,    -1,    -1,    -1,
      -1,   162,    35,   164,    -1,    38,    39,    -1,    41,    42,
      43,    44,    45,    -1,    -1,    -1,    -1,     1,    -1,     3,
       4,     5,     6,     7,     8,    -1,   187,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    -1,    42,    -1,
      -1,    45,    46,    47,     1,    -1,     3,     4,     5,     6,
       7,     8,    -1,    -1,    11,    12,    13,    14,    15,    -1,
      -1,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,    35,    -1,
      -1,    38,    39,    -1,    -1,    42,    -1,    -1,    -1,    46,
      47,     1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      -1,    11,    12,    13,    14,    15,    -1,    -1,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,
      -1,    -1,    -1,    -1,    -1,    35,    -1,    -1,    38,    39,
      -1,    -1,    42,    -1,    -1,    -1,    46,    47,     1,    -1,
       3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,     1,    42,
      -1,    -1,    45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,     1,    -1,    40,    41,    42,
      43,    44,    45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    25,
      26,    27,    28,    -1,    -1,    31,    32,    33,    34,    35,
      36,    37,     1,    -1,    -1,    41,    -1,    43,    44,    45,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    -1,    25,    26,    27,    28,
      -1,    -1,    31,    32,    33,    34,    35,    36,    37,    -1,
      -1,    -1,    41,    -1,    43,    44,    45,     1,    -1,     3,
       4,     5,     6,     7,    -1,     1,    -1,     3,     4,     5,
       6,    -1,    -1,    -1,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    35,    -1,    -1,    38,    39,    -1,    -1,    42,    35,
      -1,    45,    38,    39,    -1,    -1,    42,    -1,     1,    45,
       3,     4,     5,     6,    -1,    -1,     1,    -1,     3,     4,
       5,     6,    -1,    -1,    -1,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    35,    -1,    -1,    38,    39,    -1,    -1,    42,
      35,    -1,    45,    38,    39,    -1,    -1,    42,    43,    44,
       1,    -1,     3,     4,     5,     6,     1,    -1,     3,     4,
       5,     6,    -1,    -1,    -1,    -1,    -1,    18,    19,    -1,
      -1,    -1,    -1,    18,    19,    -1,    -1,    -1,     1,    -1,
       3,     4,     5,     6,    35,    -1,    -1,    38,    39,    -1,
      35,    42,    43,    38,    39,    18,    19,    42,    -1,    -1,
       1,    -1,     3,     4,     5,     6,     1,    -1,     3,     4,
       5,     6,    35,    -1,    -1,    38,    39,    18,    19,    42,
      -1,    -1,    -1,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    -1,    -1,    38,    39,    -1,
      35,    42,    -1,    38,    39,    -1,    -1,    42
=======
       1,   100,    26,     1,    47,    27,    28,     4,     1,     1,
      48,     1,    10,     1,    32,     3,     4,    10,    46,    47,
      21,    32,     1,    32,     3,     4,     5,    43,    43,    45,
       9,    10,    11,    46,    47,    14,    15,    16,    17,    18,
      12,    13,    21,    22,    27,    28,    89,    44,    46,    71,
      74,    46,    76,    32,    55,   154,    48,    49,    48,    38,
      47,    45,    41,    42,    45,     1,    45,     3,     4,    48,
      49,    50,    49,    43,   173,    45,    45,    45,    33,    50,
      46,    48,    44,    84,    85,    86,     1,    44,     3,     4,
       5,    16,    46,    46,     9,    96,    97,     3,    99,    48,
       3,   144,    45,    33,    46,    46,    21,    22,    48,    46,
      48,    45,    71,    46,     1,   135,   195,   144,   161,   162,
     121,   164,    42,    38,   160,    -1,    41,    42,   106,    44,
      45,    46,    47,    48,   135,    -1,    94,    -1,   139,    -1,
     183,    -1,   185,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     193,    -1,    -1,    -1,    -1,    -1,     0,     1,    -1,     3,
       4,     5,   163,    -1,   165,     9,    10,    11,    -1,    -1,
      14,    15,    16,    17,    18,    -1,    -1,    21,    22,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   188,    32,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    -1,    41,    42,    -1,
       1,    45,     3,     4,     5,    49,    -1,    -1,     9,    10,
      11,    -1,    -1,    14,    15,    16,    17,    18,    -1,    -1,
      21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      41,    42,    -1,     1,    45,     3,     4,     5,    49,    50,
      -1,     9,    10,    11,    -1,    -1,    14,    15,    16,    17,
      18,    -1,    -1,    21,    22,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,     1,    -1,    -1,    -1,    -1,
      38,    -1,    -1,    41,    42,    -1,    -1,    45,    -1,    -1,
      -1,    49,    50,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,     1,    33,    34,    35,
      36,    37,    38,    39,    40,    -1,    -1,    43,    44,    45,
      46,    47,    48,    -1,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    -1,    28,    29,    30,    31,     1,    -1,    34,
      35,    36,    37,    38,    39,    40,    -1,    -1,    -1,    44,
      -1,    46,    47,    48,    -1,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    -1,    28,    29,    30,    31,     1,    -1,
      34,    35,    36,    37,    38,    39,    40,    -1,    -1,    -1,
      44,    -1,    46,    47,    48,    -1,    19,    20,    21,    22,
      -1,    -1,    -1,    -1,    -1,    28,    29,    30,    31,    -1,
      -1,    34,    35,    36,    37,    38,    39,    40,    -1,    -1,
      -1,    44,    -1,    46,    47,    48,     1,    -1,     3,     4,
       5,    -1,    -1,    -1,     9,     1,    -1,     3,     4,     5,
      -1,    -1,    -1,     9,    10,    -1,    21,    22,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    22,    32,    -1,    -1,
      -1,    -1,    -1,    38,    -1,    -1,    41,    42,    -1,    -1,
      45,    -1,    38,    48,    -1,    41,    42,    -1,    -1,    45,
      -1,     1,    48,     3,     4,     5,    -1,    -1,    -1,     9,
       1,    -1,     3,     4,     5,    -1,    -1,    -1,     9,    -1,
      -1,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      21,    22,     1,    -1,     3,     4,     5,    -1,    38,    -1,
       9,    41,    42,    -1,    -1,    45,    -1,    38,    48,    -1,
      41,    42,    21,    22,    45,    -1,    -1,    48,    -1,     1,
      -1,     3,     4,     5,    -1,    -1,    -1,     9,    -1,    38,
      -1,    -1,    41,    42,    -1,    -1,    45,    46,    47,    21,
      22,     1,    -1,     3,     4,     5,    -1,    -1,    -1,     9,
       1,    -1,     3,     4,     5,    -1,    38,    -1,     9,    41,
      42,    21,    22,    45,    46,    -1,    -1,    -1,    -1,    -1,
      21,    22,     1,    -1,     3,     4,     5,    -1,    38,    -1,
       9,    41,    42,    -1,    -1,    45,    -1,    38,    -1,    -1,
      41,    42,    21,    22,    45,    -1,    -1,     1,    -1,     3,
       4,     5,    -1,    -1,    -1,     9,    -1,    -1,    -1,    38,
      -1,    -1,    41,    42,    -1,    -1,    45,    21,    22,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    -1,    41,    42,    -1,
      -1,    45
>>>>>>> 7c595378d79f1267335122c72d284c5ddcde1dbe
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
<<<<<<< HEAD
       0,    49,     0,     1,     3,     4,     5,     6,     7,     8,
      11,    12,    13,    14,    15,    18,    19,    29,    35,    38,
      39,    42,    46,    50,    51,    53,    55,    56,    57,    58,
      60,    61,    62,    64,    65,    77,    88,    94,     1,    42,
      45,    93,     1,     3,     4,    90,    91,    66,    69,    83,
      80,    78,     1,    51,    87,    51,    29,   100,    45,     1,
      16,    17,    25,    26,    27,    28,    31,    32,    33,    34,
      35,    36,    37,    54,    56,     1,    55,    58,    55,     1,
      20,    21,    22,    23,    24,    30,    40,    42,    52,    29,
      29,    43,    40,    42,    92,    92,    44,    89,    42,    42,
      62,    42,    42,    45,    43,     1,     7,    29,    61,    63,
      53,     1,    51,    51,    59,    51,     1,    45,    62,    99,
       4,    41,    95,    30,     3,    91,    93,    51,    51,    84,
      51,     1,     7,    86,    87,   100,    47,    41,    43,    44,
      41,     1,     7,    43,    96,    97,    98,    51,    43,    43,
      13,    81,     3,    45,    63,    51,     3,    99,    43,    44,
      67,    70,    42,    43,    30,    87,    98,    62,    62,    51,
      62,    51,    45,    68,    71,    85,    82,    87,     9,    10,
      72,    43,    43,    73,    76,    45,    62,    42,    62,    79,
      51,    74,    43,    62,    75,    72
=======
       0,    52,     0,     1,     3,     4,     5,     9,    10,    11,
      14,    15,    16,    17,    18,    21,    22,    32,    38,    41,
      42,    45,    49,    53,    54,    56,    58,    59,    60,    61,
      63,    64,    65,    67,    68,    80,    91,    98,    32,    45,
       1,     3,     4,    94,    95,    69,    72,    86,    83,    81,
       1,    54,    90,    54,    32,   104,    48,     1,    19,    20,
      28,    29,    30,    31,    34,    35,    36,    37,    38,    39,
      40,    57,    59,     1,    58,    61,    58,     1,    23,    24,
      25,    26,    27,    33,    43,    45,    55,    32,    32,    46,
      43,    45,    96,    96,    47,    92,    45,    45,    65,    45,
      45,    48,    46,     1,    10,    32,    64,    66,    56,     1,
      54,    54,    62,    54,     1,    48,    65,   103,     4,    44,
      99,    33,     3,    95,     1,    48,    97,    54,    54,    87,
      54,     1,    10,    89,    90,   104,    50,    44,    46,    47,
      44,     1,    10,    46,   100,   101,   102,    54,    93,    46,
      46,    16,    84,     3,    48,    66,    54,     3,   103,    46,
      47,    70,    73,    45,    46,    33,    90,   102,    65,    65,
      54,    65,    54,    48,    71,    74,    88,    85,    90,    12,
      13,    75,    46,    46,    76,    79,    48,    65,    45,    65,
      82,    54,    77,    46,    65,    78,    75
>>>>>>> 7c595378d79f1267335122c72d284c5ddcde1dbe
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
#line 98 "tp4correccion.y"
    { flag_error=0; ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 99 "tp4correccion.y"
    { flag_error=0;                                         printf("\n----------------------------------------------------------------------------------\n"); ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 100 "tp4correccion.y"
    { flag_general=0; flag_error=0;                         printf("\n----------------------------------------------------------------------------------\n"); ;}
    break;

<<<<<<< HEAD
  case 8:
=======
  case 7:

/* Line 1455 of yacc.c  */
#line 101 "tp4correccion.y"
    { flag_error=0; printf("No se reconocio la entrada\n"); printf("\n----------------------------------------------------------------------------------\n"); ;}
    break;

  case 9:
>>>>>>> 7c595378d79f1267335122c72d284c5ddcde1dbe

/* Line 1455 of yacc.c  */
#line 115 "tp4correccion.y"
    { if( (yyvsp[(1) - (3)].s.tipo) != 4  ){ printf("Se esperaba un lvalue para la asignacion\n"); } ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 116 "tp4correccion.y"
    { printf("expresion no reconocida"); flag_expresion = 1; ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 126 "tp4correccion.y"
    { printf("1Un \"OPERADOR\" no es valido\n"); flag_expresion = 1; ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 131 "tp4correccion.y"
    { control( (yyvsp[(1) - (3)].s.tipo), (yyvsp[(2) - (3)].s.caracter), (yyvsp[(3) - (3)].s.tipo)); ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 148 "tp4correccion.y"
    { printf("2Un \"OPERADOR\" no es valido\n"); flag_expresion = 1; ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 161 "tp4correccion.y"
    { printf("3Un \"OPERADOR\" no es valido\n"); flag_expresion = 1; ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 168 "tp4correccion.y"
    { printf("4Un \"OPERADOR\" no es valido\n"); flag_expresion = 1; ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 189 "tp4correccion.y"
    { printf("No se reconocio la \"CATEGORIA LEXICA\"\n"); flag_expresion = 1; ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 199 "tp4correccion.y"
    { if(flag_SentCompuesta == 0) { printf("Se declaro correctamente una \"SENTENCIA COMPUESTA\"\n"); flag_general = 0; }     else { printf("Error al declarar la \"SENTENCIA COMPUESTA\"\n");      flag_SentCompuesta = 0; flag_general = 1;} ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 200 "tp4correccion.y"
    { if(flag_SentExpresion == 0) { printf("Se declaro correctamente una \"SENTENCIA DE EXPRESION\"\n"); }  else { printf("Error al declarar la \"SENTENCIA DE EXPRESION\"\n");   flag_SentExpresion = 0; flag_sentencia = 1; flag_general = 1; } ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 201 "tp4correccion.y"
    { if(flag_SentControl == 0)   { printf("Se declaro correctamente una \"SENTENCIA DE CONTROL\"\n"); }    else { printf("Error al declarar la \"SENTENCIA DE CONTROL\"\n");     flag_SentControl = 0; flag_sentencia = 1; flag_general = 1; } ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 202 "tp4correccion.y"
    { if(flag_SentIteracion == 0) { printf("Se declaro correctamente una \"SENTENCIA DE ITERACION\"\n"); }  else { printf("Error al declarar la \"SENTENCIA DE ITERRACION\"\n");  flag_SentIteracion = 0; flag_sentencia = 1; flag_general = 1; } ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 203 "tp4correccion.y"
    { if(flag_SentDeclaraciones == 0){ printf("Se \"DECLARARON VARIABLES\" correctamente\n"); }             else { printf("Error al \"DECLARAR VARIABLES\"\n");                   flag_SentDeclaraciones = 0; flag_sentencia = 1; flag_general = 1;} ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 204 "tp4correccion.y"
    { if(flag_error == 0){ printf("Se declaro una sentencia de salto (RETURN) \n"); } ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 205 "tp4correccion.y"
    { if(flag_error == 0){ printf("Error al declarar una sentencia\n"); flag_error = 1; } ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 215 "tp4correccion.y"
    { if(flag_sentencia == 1){ flag_sentencia = 0; flag_SentCompuesta = 1;  };}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 221 "tp4correccion.y"
    { printf("No se declarado sentencias\n");;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 231 "tp4correccion.y"
    { if(flag_expresion == 1){ flag_SentExpresion = 1; flag_expresion = 0; };}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 242 "tp4correccion.y"
    { printf("\nSe declaro una sentencia \"IF\"\n"); ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 242 "tp4correccion.y"
    {if(flag_expresion==1){flag_expresion=0;flag_if=1;};}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 242 "tp4correccion.y"
    {if(flag_general==1){flag_if=1;};}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 242 "tp4correccion.y"
    {if(flag_if == 1){ flag_if=0; flag_SentControl=1; };}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 243 "tp4correccion.y"
    { printf("\nSe declaro una sentencia \"SWITCH\"\n"); ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 243 "tp4correccion.y"
    {if(flag_expresion==1){flag_expresion=0;flag_if=1;};}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 243 "tp4correccion.y"
    {if(flag_general==1){flag_if=1;};}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 243 "tp4correccion.y"
    {if(flag_if == 1){ flag_if=0; flag_SentControl=1; };}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 247 "tp4correccion.y"
    { if(flag_if == 0 ){ printf("\nSe declaro una sentencia \"ELSE IF\"\n"); } ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 247 "tp4correccion.y"
    {if(flag_expresion==1){flag_expresion=0;flag_if=1;};}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 247 "tp4correccion.y"
    {if(flag_general==1){flag_if=1;};}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 248 "tp4correccion.y"
    { if(flag_if == 0){ printf("\nSe declaro una sentencia \"ELSE\"\n"); } ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 248 "tp4correccion.y"
    {if(flag_general==1){flag_if=1;};}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 260 "tp4correccion.y"
    { printf("\nSe declaro un bucle \"FOR\"\n"); ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 260 "tp4correccion.y"
    {if(flag_general==1){flag_bucles=1;};}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 260 "tp4correccion.y"
    {if(flag_bucles == 1){flag_bucles=0; flag_SentIteracion=1; };}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 261 "tp4correccion.y"
    { printf("\nSe declaro un bucle \"WHILE\"\n"); ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 261 "tp4correccion.y"
    {if(flag_expresion==1){flag_expresion=0;flag_bucles=1;};}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 261 "tp4correccion.y"
    {if(flag_general==1){flag_bucles=1;};}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 261 "tp4correccion.y"
    {if(flag_bucles == 1){flag_bucles=0; flag_SentIteracion=1; };}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 262 "tp4correccion.y"
    { printf("\nSe declaro un bucle \"DO WHILE\"\n"); ;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 262 "tp4correccion.y"
    {if(flag_general==1){flag_bucles=1;};}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 262 "tp4correccion.y"
    {if(flag_expresion ==1){flag_expresion=0;flag_bucles=1;};}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 262 "tp4correccion.y"
    {if(flag_bucles == 1){flag_bucles=0; flag_SentIteracion=1; };}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 266 "tp4correccion.y"
    { if(flag_expresion == 1){ printf("Un parametro no fue reconocido en la \"SENTENCIA DE ITERRACION\"\n"); flag_bucles = 1; flag_expresion = 0; /*ingresarSinRepetir(&listaDeIdentificadores, $<s.cadena>2,$<s.cadena>1, 2);*/ } ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 268 "tp4correccion.y"
    { if(flag_bucles == 0 && flag_bucles == 0){ printf("Un parametro no fue reconocido en la \"SENTENCIA DE ITERRACION\"\n"); flag_bucles = 1; } ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 272 "tp4correccion.y"
    { if(flag_expresion == 1 && flag_bucles == 0){ printf("Un parametro no fue reconocido en la \"SENTENCIA DE ITERRACION\"\n"); flag_bucles = 1; flag_expresion = 0; } ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 283 "tp4correccion.y"
    { if(flag_datos == 0){ strcpy(tipoDato, (yyvsp[(1) - (2)].s.cadena)); printf("Varibles de tipo \"%s\"\n", tipoDato); } ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 283 "tp4correccion.y"
    { if(flag_datos==1){flag_datos = 0; flag_SentDeclaraciones = 1;};}
    break;

<<<<<<< HEAD
  case 101:

/* Line 1455 of yacc.c  */
#line 281 "tp4correccion.y"
    { printf("Falto el TIPO DE DATO\n"); flag_datos = 1; ;}
    break;

  case 104:
=======
  case 102:
>>>>>>> 7c595378d79f1267335122c72d284c5ddcde1dbe

/* Line 1455 of yacc.c  */
#line 283 "tp4correccion.y"
    { insertarVariable(&erroresSemanticos, &listaDeVariables, &listaDeIdentificadores, (yyvsp[(1) - (5)].s.cadena)); ;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 293 "tp4correccion.y"
    { if(flag_datos == 0){ insertarIdentificador(&listaDeIdentificadores, (yyvsp[(1) - (2)].s.cadena)); } ;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 294 "tp4correccion.y"
    { if(flag_datos == 0){ insertarIdentificador(&listaDeIdentificadores, (yyvsp[(1) - (4)].s.cadena)); } ;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 295 "tp4correccion.y"
    { printf(" error LValue \n"); flag_datos = 1;;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 296 "tp4correccion.y"
    { if(flag_datos == 0){ printf("Falta IDENTIFICADOR\n"); flag_datos = 1;} ;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 308 "tp4correccion.y"
    { if(flag_datos == 0){ printf("Falto el caracter de corte\n"); flag_datos = 1;} ;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 314 "tp4correccion.y"
    { printf("\nSe identifico a la funcion \"%s\" de tipo \"%s\"\n", (yyvsp[(2) - (3)].s.cadena), (yyvsp[(1) - (3)].s.cadena)); funcionRepetida = buscarFuncion(&listaFunciones, (yyvsp[(2) - (3)].s.cadena)); insertarFuncionSinRepetir(&listaFunciones, (yyvsp[(1) - (3)].s.cadena), (yyvsp[(2) - (3)].s.cadena)); ;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 314 "tp4correccion.y"
    { if(flag_funciones == 0){ printf("Se %s correctamente la funcion: \"%s\"\n", funcion, (yyvsp[(2) - (6)].s.cadena)); } else { printf("Se definio/declaro incorrectamente la funcion \"%s\"\n", (yyvsp[(2) - (6)].s.cadena)); flag_funciones = 0; funcionRepetida = 0;} ;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 315 "tp4correccion.y"
    { printf("Se definio/declaro incorrectamente la funcion\n"); flag_funciones = 0; ;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 319 "tp4correccion.y"
    { if(flag_funciones == 0){ printf("Se declararon los parametros de la funcion correctamente\n"); } else{ printf("Se declararon incorrectamente los parametros de la funcion\n"); } ;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 320 "tp4correccion.y"
    { if(flag_funciones == 0){ printf("No se declararon parametros para la funcion\n"); } ;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 329 "tp4correccion.y"
    { if(funcionRepetida == 0){ agregarParametros(&(*listaFunciones).parametros, (yyvsp[(1) - (2)].s.cadena)); } ;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 330 "tp4correccion.y"
    { if(funcionRepetida == 0){ agregarParametros(&(*listaFunciones).parametros, (yyvsp[(1) - (1)].s.cadena)); }  ;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 331 "tp4correccion.y"
    {  if(flag_funciones == 0) { printf("Valor no reconocido para asignar \n"); } flag_funciones = 1; ;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 335 "tp4correccion.y"
    { funcion = "declaro"; ;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 336 "tp4correccion.y"
    { if(flag_general == 1){flag_general = 0; flag_funciones = 1; }; funcion = "definio"; ;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 337 "tp4correccion.y"
    { printf("Se esperaba un punto y como o una sentencia compuesta\n"); flag_funciones = 1; ;}
    break;



/* Line 1455 of yacc.c  */
<<<<<<< HEAD
#line 2147 "tp4correccion.tab.c"
=======
#line 2159 "tp4correccion.tab.c"
>>>>>>> 7c595378d79f1267335122c72d284c5ddcde1dbe
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
#line 353 "tp4correccion.y"


int main()
{      
    //yydebug = 1;
    yyin = fopen("gramatica.txt", "r");
    yyparse();

<<<<<<< HEAD
    informeDeLectura(&listaIdentificador, &listaFunciones, &lista);

=======
    informeDeLectura(&listaDeVariables, &listaFunciones, &erroresSemanticos);
	printf("\n\n\nfin\n\n");
>>>>>>> 7c595378d79f1267335122c72d284c5ddcde1dbe
}

