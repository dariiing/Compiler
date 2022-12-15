%{
#include <stdio.h>
#include "y.tab.h"
%}
%option noyywrap
%%
"int"|"float"|"char"|"string"|"bool" {return TIP;}
"start" {return BGIN;}
"end" {return END;}
"if" {return IF;}
"then" {return THEN;}
"else" { return ELSE;}
"while" { return WHILE;}
[a-z]* {return ID;} 
":=" {return ASSIGN;}
"<" {return LESS;}
"<=" {return LESSEQ;}
">" {return GREATER;}
">=" {return GREATEREQ;}
"==" {return EQUAL;}
"!=" {return NOTEQUAL;}
[0-9]+ {return NR;}
[ \t] ;
\n {yylineno++;}
. {return yytext[0];}
