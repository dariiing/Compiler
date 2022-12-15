%{
#include <stdio.h>
#include "y.tab.h"
%}
%option noyywrap
%%
"int"|"float"|"char"|"string" {return TIP;}
"start" {return BGIN;}
"end" {return END;}
[a-z]* {return ID;} 
":=" {return ASSIGN;}
"<" {return LESS;}
">" {return GREATER;}
"==" {return EQUAL;}
"!=" {return NOTEQUAL;}
"<=" {return LEQ;}
">=" {return GEQ;}

[0-9]+ {return NR;}
[ \t] ;
\n {yylineno++;}
. {return yytext[0];}

 
