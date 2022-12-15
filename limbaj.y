%{
#include <stdio.h>
extern FILE* yyin;
extern char* yytext;
extern int yylineno;
%}
%token ID TIP BGIN END ASSIGN NR OPR IF THEN ELSE WHILE AND OR

%left OPR
%left '+' '-'
%left '*' '/' '%'
%left AND OR
%start progr
%%
progr: declaratii bloc {printf("program corect sintactic\n");}
     ;

declaratii :  declaratie ';'
	      | declaratii declaratie ';'
	      ;
declaratie : TIP ID                     /* variabile */
           | TIP ID '(' lista_param ')' /* fct cu param */
           | TIP ID '(' ')'             /* fct fara param */
           ;
lista_param : param 
            | lista_param ','  param 
            ;
            
param : TIP ID
      ; 

lista_apel : NR
           | ID
           | lista_apel ',' NR
           | lista_apel ',' ID
           ;
      
/* bloc */
bloc : BGIN list END  
     ;
     
/* lista instructiuni */

list : statement ';' 
     | list statement ';'
     | conditii
     | list conditii ';'
     | list if 
     | list while
     ;

/* instructiune */

statement: ID ASSIGN ID           /* x = y */
         | ID ASSIGN NR  	    /* x = 3 */ 
         | ID '(' lista_apel ')'  /* z ( 3 , 7 , 8 ) */
         ;

expr: expr '*' expr
    | expr '/' expr
    | expr '+' expr
    | expr '-' expr
    | expr '%' expr
    | expr OPR expr
    | NR
    | ID
    ;

conditii: expr AND expr
        | expr OR expr
        | expr
        ;
   

if : IF '(' conditii ')' THEN  '{' list '}'
   | IF '(' conditii ')' THEN  '{' list '}' ELSE  '{' list '}'
   ;

while : WHILE '(' conditii ')' '{' list '}'
     ;


%%
int yyerror(char * s){
printf("eroare: %s la linia:%d\n",s,yylineno);
}

int main(int argc, char** argv){
yyin=fopen(argv[1],"r");
yyparse();
} 

//-Wcounterexamples