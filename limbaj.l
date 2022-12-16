%{
#include <stdio.h>
#include "y.tab.h"
extern int yylval;
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
"true"|"false" { return BOOLEAN;}
0|[1-9]+[0-9]* { yylval=atoi(yytext); return NR;}


[ \t] ;
\n {yylineno++;}
. {return yytext[0];}
