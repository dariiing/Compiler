%{
#include <stdio.h>
extern FILE* yyin;
extern char* yytext;
extern int yylineno;
%}
%token ID TIP BGIN END ASSIGN NR OPR IF ELSE WHILE AND OR DO FOR

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
           | TIP ID '[' NR ']'          /* vectori */
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

list : statement 
     | list statement
     ;

/* instructiune */

for_stmt :  ID ASSIGN NR
          | ID ASSIGN ID
          | TIP ID ASSIGN NR
          | TIP ID ASSIGN ID
          ;


statement: ID ASSIGN expr ';'
         | TIP ID ASSIGN expr ';'
         | ID '(' lista_apel ')' ';'    /* z ( 3 , 7 , 8 ) */
         | IF '(' conditii ')' '{' list '}'
         | IF '(' conditii ')' '{' list '}' ELSE  '{' list '}'
         | WHILE '(' conditii ')' '{' list '}'
         | DO '{' list '}' WHILE '(' conditii ')' ';'
         | FOR '(' for_stmt ';' conditii ';' expr ')' '{' list '}'
         ;

// sunt o gramada de bullshit uri care merg tho gen: for(x=5; x; x==3) da corect sintactic

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
   



%%
int yyerror(char * s){
printf("eroare: %s la linia:%d\n",s,yylineno);
}

int main(int argc, char** argv){
yyin=fopen(argv[1],"r");
yyparse();
} 

//-Wcounterexamples