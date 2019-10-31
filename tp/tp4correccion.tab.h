
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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

/* Line 1676 of yacc.c  */
#line 39 "tp4correccion.y"

struct{
  char cadena[30];
  char caracter;
  int entero;
  int tipo;
}s;




/* Line 1676 of yacc.c  */
#line 95 "tp4correccion.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


