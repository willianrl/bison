%{

#include "tp4correccion.tab.h"
#include <string.h>
#include <stdlib.h>

#define CARACTER 1
#define CADENA 2
#define NUMERO 3
#define ID 4

int yylineno = 1;
%}

%%

%option yylineno;

do        { strcpy(yylval.s.cadena, yytext); return DO; }
while     { strcpy(yylval.s.cadena, yytext); return WHILE; }
for       { strcpy(yylval.s.cadena, yytext); return FOR; }
"else if" { strcpy(yylval.s.cadena, yytext); return ELSEIF; }
if        { strcpy(yylval.s.cadena, yytext); return IF; }
else      { strcpy(yylval.s.cadena, yytext); return ELSE; }
switch    { strcpy(yylval.s.cadena, yytext); return SWITCH; }
return    { strcpy(yylval.s.cadena, yytext); return RETURN;}
"||"      { return OR; }
"&&"      { return AND; }
"++"      { return INCREMENTO; }
"--"      { return DECREMENTO; }
"+="      { return SUMAASIGNACION; }
"-="      { return RESTAASIGNACION; }
"*="      { return MULTIASIGNACION; }
"/="      { return DIVASIGNACION; }
"%="      { return RESTOASIGNACION; }
"<="      { return MENORIGUAL; }
">="      { return MAYORIGUAL; }
"!="      { return DISTINTO; }
"=="      { return IGUALDAD; }
"="       { yylval.s.caracter = yytext[0]; return '='; }
","       { return ','; }
";"       { return ';'; }
"+"       { yylval.s.caracter = yytext[0]; return '+'; }
"-"       { yylval.s.caracter = yytext[0]; return '-'; }
"*"       { yylval.s.caracter = yytext[0]; return '*'; }
"/"       { yylval.s.caracter = yytext[0]; return '/'; }
"%"       { yylval.s.caracter = yytext[0]; return '%'; }
")"       { return ')'; }
"("       { return '('; }
"{"       { return '{'; }
"}"       { return '}'; }
"["       { return '['; }
"]"       { return ']'; }
"&"       { return '&'; }
"|"       { return '|'; }
"!"       { return '!'; }
">"       { return '>'; }
"<"       { return '<'; }

"\n"      { yylineno++; return '\n'; }

char|int|float|double|void|struct|enum|bool   { strcpy(yylval.s.cadena, yytext);                                                             return TIPODATO; }
[a-zA-Z_]([a-zA-Z_]|[0-9])*                   { strcpy(yylval.s.cadena, yytext); yylval.s.tipo = ID;                                         return IDENTIFICADOR; }

[0-9]+                                        { strcpy(yylval.s.cadena, yytext); yylval.s.entero = atoi(yytext); yylval.s.tipo = NUMERO;     return NUM; }


\"([ -!#-~]|\\\")*\"                          { strcpy(yylval.s.cadena, yytext); yylval.s.tipo = CADENA;                                     return LITERALESCADENA; }
'[ -&\(-~]'|'\\[0ntabfr"\vox']'               { yylval.s.caracter = yytext[1]; yylval.s.entero = yytext[1]; yylval.s.tipo = CARACTER;        return CCARACTER; }




%%

// 0[0-7]*                                       { return OCTAL; }
// 0[xX][A-Fa-f0-9]+                             { return HEXA; }
// ([0-9]*"."[0-9]+([eE]([\+\-]?)[0-9]+)?)|([0-9]+"."([eE]([\+\-]?)[0-9]+)?)|([0-9]+[eE][\+\-]?[0-9]+) { return REAL; }


/*
%token <s> HEXA
%token <s> OCTAL
%token <s> REAL
*/