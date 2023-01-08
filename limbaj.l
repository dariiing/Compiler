%{
#include <stdio.h>
#include "code.h"
#include "y.tab.h"

%}
%option noyywrap
%%
"#include"[ ]*<.+\.h>                      {yylval.value = strdup(yytext); return INCLUDE;}

"Eval"                                      {return EVAL;}
"TypeOf"                                    {return TYPEOF;}

"class"                                     {return CLASS;}
"main"                                      {return MAIN;}
"int"|"float"|"char"|"string"|"bool"|"void" {yylval.value = strdup(yytext); return TIP;}
"const"                                     {return CONST;}
"++"|"--"                                   {return DIGIT;}
"if"                                        {return IF;}
"else"                                      {return ELSE;}

"while"                                     {return WHILE;}
"do"                                        {return DO;}
"for"                                       {return FOR;}


"<="|"<"|">="|">"|"=="|"!="                 {return OPR;}
"&&"                                        {return AND;}
"||"                                        {return OR;}

"return"                                    {return RETURN;}
"true"|"false"                              {yylval.value = strdup(yytext); return VARBOOL;}
\"[^\"]*\"                                  {yylval.value = strdup(yytext); return STRING;} 
[a-zA-Z][a-z0-9A-Z]*                        {yylval.value = strdup(yytext); return ID;}    
0|[1-9]+([0-9])?("."[0-9]+)?                {yylval.value = strdup(yytext); return NR;}
"="                                         {return ASSIGN;}

[ \t] ;
\n {yylineno++;}
. {return yytext[0];}

