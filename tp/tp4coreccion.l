%{

#include "tp4correccion.tab.h"
#include <string.h>
#include <stdlib.h>

#define CARACTER 1
#define CADENA 2
#define NUMERO 3
#define ID 4
#define FLOAT 5

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
"="       { return '='; }
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

"\n"    { yylineno++; return '\n'; }

char|int|float|double|void|struct|enum|bool    { strcpy(yylval.s.cadena, yytext);                              return TIPODATO; }
[a-zA-Z_]([a-zA-Z_]|[0-9])*                           { strcpy(yylval.s.cadena, yytext);                              return IDENTIFICADOR; }
[0-9]+                                                { strcpy(yylval.s.cadena, yytext); yylval.s.entero = atoi(yytext); strcpy(yylval.s.tipo, "int");     return NUM; }
\"([ -!#-~]|\\\")*\"                                  { strcpy(yylval.s.cadena, yytext); strcpy(yylval.s.tipo, "string");  return LITERALESCADENA; }
'[ -&\(-~]'|'\\[0ntabfr"\vox']'                       { yylval.s.caracter = yytext[1]; yylval.s.entero = yytext[1]; strcpy(yylval.s.tipo, "char");       return CCARACTER; }




%%
//0[xX][A-Fa-f0-9]+                                     { strcpy(yylval.s.tipo, "int");  return HEXA; }
//([0-9]*"."[0-9]+([eE]([\+\-]?)[0-9]+)?)|([0-9]+"."([eE]([\+\-]?)[0-9]+)?)|([0-9]+[eE][\+\-]?[0-9]+) { yylval.s.entero = atof(yytext); strcpy(yylval.s.tipo, "float"); return REAL; }
//0[0-7]*                                               { strcpy(yylval.s.tipo, "int");        return OCTAL; }