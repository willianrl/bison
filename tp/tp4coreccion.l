%{

#include "tp4correccion.tab.h"
#include <string.h>
#include <stdlib.h>

%}

%%

do      { strcpy(yylval.cadena, yytext); return DO; }
while   { strcpy(yylval.cadena, yytext); return WHILE; }
for     { strcpy(yylval.cadena, yytext); return FOR; }
if      { strcpy(yylval.cadena, yytext); return IF; }
else    { strcpy(yylval.cadena, yytext); return ELSE; }
"else if" { strcpy(yylval.cadena, yytext); return ELSEIF; }
switch  { strcpy(yylval.cadena, yytext); return SWITCH; }
return  { strcpy(yylval.cadena, yytext); return RETURN;}
"="     { return '='; }
","     { return ','; }
";"     { return ';'; }
"+"     { return '+'; }
"-"     { return '-'; }
"*"     { return '*'; }
"/"     { return '/'; }
"%"     { return '%'; }
")"     { return ')'; }
"("     { return '('; }
"{"     { return '{'; }
"}"     { return '}'; }
"["     { return '['; }
"]"     { return ']'; }
"&"     { return '&'; }
"|"     { return '|'; }
"<"     { return '<'; }
">"     { return '>'; }
"!"     { return '!'; }

"\n"    { return '\n'; }

char|int|float|double|void|struct|enum|bool  { strcpy(yylval.cadena, yytext); return TIPODATO; }
[a-zA-Z_]([a-zA-Z_]|[0-9])*                  { strcpy(yylval.cadena, yytext); return IDENTIFICADOR; }
[0-9]+                                       { yylval.tipoDato = 1;  return NUM; }
\"([ -!#-~]|\\\")*\"                         { yylval.tipoDato = 2;  return LITERALESCADENA; }
'[ -&\(-~]'|'\\[0ntabfr"\vox']'              { yylval.tipoDato = 3;  return CCARACTER; }





%%
  
   
