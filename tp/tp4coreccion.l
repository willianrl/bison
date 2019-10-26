%{

#include "tp4correccion.tab.h"
#include <string.h>
#include <stdlib.h>

#define CARACTER 1
#define CADENA 2
#define NUMERO 3
%}

%%

do        { strcpy(yylval.s.cadena, yytext); return DO; }
while     { strcpy(yylval.s.cadena, yytext); return WHILE; }
for       { strcpy(yylval.s.cadena, yytext); return FOR; }
if        { strcpy(yylval.s.cadena, yytext); return IF; }
else      { strcpy(yylval.s.cadena, yytext); return ELSE; }
"else if" { strcpy(yylval.s.cadena, yytext); return ELSEIF; }
switch    { strcpy(yylval.s.cadena, yytext); return SWITCH; }
return    { strcpy(yylval.s.cadena, yytext); return RETURN;}
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

"+=" | "-=" | "*=" | "/=" | "%=" | "<<=" | ">>=" | "&=" | "|="    { strcpy(yylval.s.cadena, yyttext); return AUTOASIGNACION; }
"<" | ">" | "<=" | ">=" | "==" | "!="                             { strcpy(yylval.s.cadena, yytext); return COMPARACION; }

"\n"    { return '\n'; }

char|int|float|double|void|struct|enum|bool  { strcpy(yylval.s.cadena, yytext);                                                             return TIPODATO; }
[a-zA-Z_]([a-zA-Z_]|[0-9])*                  { strcpy(yylval.s.cadena, yytext);                                                             return IDENTIFICADOR; }
[0-9]+                                       { strcpy(yylval.s.cadena, yytext); yylval.s.entero = atoi(yytext); yylval.s.tipo = NUMERO;     return NUM; }
\"([ -!#-~]|\\\")*\"                         { strcpy(yylval.s.cadena, yytext); yylval.s.tipo = CADENA;                                     return LITERALESCADENA; }
'[ -&\(-~]'|'\\[0ntabfr"\vox']'              { yylval.s.caracter = yytext[1]; yylval.s.entero = yytext[1]; yylval.s.tipo = CARACTER;        return CCARACTER; }





%%
  
   
