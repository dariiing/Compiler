%{
#include <stdio.h>
#include "y.tab.h"
%}
%option noyywrap
%%
"int"|"float"|"char"|"string"|"bool" {return TIP;}
"if" {return IF;}
"else" { return ELSE;}

"while" { return WHILE;}
"do" {return DO;}
"for" {return FOR;}

"<=" {return LSEQ;}
"<"  {return LS;}
">=" {return GTEQ;}
">"  {return GT;}
"==" {return EQ;}
"!=" {return NOTEQ;}

"&&" {return AND;}
"||" {return OR;}

"start" {return BGIN;}
"end" {return END;}

"=" {return ASSIGN;}
[a-z]* {return ID;} 
0|[1-9]+[0-9]* {return NR;}


[ \t] ;
\n {yylineno++;}
. {return yytext[0];}
