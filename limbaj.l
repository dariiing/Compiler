%{
#include <stdio.h>
#include "y.tab.h"
extern int yylval;
%}
%option noyywrap
%%
^"#include"[ ]*<.+\.h>                      {return INCLUDE;}

"Eval"                                      {return EVAL;}
"TypeOf"                                    {return TYPEOF;}

"class"                                     {return CLASS;}
"main"                                      {return MAIN;}
"int"|"float"|"char"|"string"|"bool"|"void" {return TIP;}
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
"true"|"false"                              {return VARBOOL;}
\"[^\"]*\"                                  {return STRING;} 
[a-z]*                                      {return ID;} 
[0-9]+                                      {return NR;}
"="                                         {return ASSIGN;}

[ \t] ;
\n {yylineno++;}
. {return yytext[0];}

