%{
#include <stdio.h>
extern FILE* yyin;
extern char* yytext;
extern int yylineno;
%}
%token ID TIP BGIN END ASSIGN NR LESS GREATER EQUAL NOTEQUAL IF THEN ELSE WHILE
%start progr
%%
progr: declaratii bloc {printf("program corect sintactic\n");}
     ;

declaratii :  declaratie ';'
	   | declaratii declaratie ';'
	   ;
declaratie : TIP ID                     /* pentru variabile */
           | TIP ID '(' lista_param ')' /* pentru functii */
           | TIP ID '(' ')'             /* fct fara paramterii */
           ;
lista_param : param
            | lista_param ','  param 
            ;
            
param : TIP ID
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

conditii: ID LESS ID
        | ID LESS NR
        | NR LESS NR
        | NR LESS ID
        | ID GREATER ID
        | ID GREATER NR
        | NR GREATER NR
        | NR GREATER ID
        | ID EQUAL ID
        | ID EQUAL NR
        | NR EQUAL NR
        | NR EQUAL ID
        | ID NOTEQUAL ID
        | ID NOTEQUAL NR
        | NR NOTEQUAL NR
        | NR NOTEQUAL ID
        | ID
        | NR
        ;    

if : IF '(' conditii ')' THEN list
   | IF '(' conditii ')' THEN list ELSE list 
   ;

while : WHILE '(' conditii ')' '{' list '}'
     ;


/* instructiune */

statement: ID ASSIGN ID           /* x := y */
         | ID ASSIGN NR  	    /* x := 3 */ 
         | ID '(' lista_apel ')'  /* z ( 3 , 7 , 8 ) */
         ;

lista_apel : NR
           | lista_apel ',' NR
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