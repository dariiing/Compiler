%{
#include <stdio.h>
extern FILE* yyin;
extern char* yytext;
extern int yylineno;
%}
%token ID TIP BGIN END ASSIGN NR LESS GREATER EQUAL NOTEQUAL LEQ GEQ
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
list :  statement ';' 
     | list statement ';'
     | conditii ';'
     | list conditii ';'
     /*| list if ';'*/
     ;

conditii: conditii LESS conditii
        | '(' conditii LESS conditii ')'
        | conditii GREATER conditii
        | '(' conditii GREATER conditii ')'
        | conditii EQUAL conditii
        | '(' conditii EQUAL conditii ')'
        | conditii NOTEQUAL conditii
        | '('conditii NOTEQUAL conditii ')'
        | conditii LEQ conditii
        | '('conditii LEQ conditii ')'
        | conditii GEQ conditii
        | '('conditii GEQ conditii ')'
        | ID
        | NR
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