%{
#include <stdio.h>
extern FILE* yyin;
extern char* yytext;
extern int yylineno;

%}



%token INCLUDE MAIN TIP CLASS CONST ID NR ASSIGN OPR VARBOOL STRING IF ELSE DO WHILE FOR AND OR RETURN DIGIT

%token EVAL TYPEOF
%left OPR
%left '+' '-'
%left '!'
%left '^' '*' '/' '%' 
%left '(' ')'
%left AND OR





%start progr
%%

// mai trebuie float 

progr   : headers outside_global clase outside_functii main {printf("program corect sintactic");}
        ;

headers : headers INCLUDE
        | INCLUDE
        ;

outside_global : global;
               |
               ;

outside_functii : functii
                |
	        ;
        
	     
// variabile globale
	
global  : variabila ';'
	    | global variabila ';'
	    | global CONST variabila ';'
            | CONST variabila ';'
            | eval_type
	    ;
	
variabila : TIP ID 		        /* variabila simpla */
	  | TIP ID '[' NR ']'	        /* vectori */
          | TIP ID ASSIGN operator
          | TIP ID ASSIGN VARBOOL
          | TIP ID ASSIGN STRING
	  ;
	
// functii

functii : functii functie 
        | CONST functie 
        | functii CONST functie 
	| functie 
	;
	
functie : TIP ID '(' parametri ')' '{' instructiuni '}'
        | TIP ID '(' parametri ')' '{' '}'
        | TIP ID '(' parametri ')' '{' instructiuni RETURN ret ';' '}'
        | TIP ID '(' parametri ')' '{' RETURN ret ';' '}'
	;

eval_type : EVAL '(' parametri ')' ';'
          | TYPEOF '(' parametri ')' ';'
          ;

ret : operator
    | VARBOOL
    | STRING
    ;

parametri : parametru
	  | parametri ',' parametru
	  ;

parametru : TIP ID
	  | TIP ID '[' NR ']'
          |
	  ;

instructiuni : stmt 
	     | instructiuni  stmt 
	     ;
	  
const_ : CONST TIP ID ';'
       | CONST TIP ID ASSIGN expr ';'
       | CONST TIP ID ASSIGN operator ';'
       | CONST TIP ID ASSIGN VARBOOL ';'
       | CONST TIP ID ASSIGN STRING ';'
       | CONST ID ASSIGN expr ';'
       | CONST ID ASSIGN operator ';'
       | CONST ID ASSIGN VARBOOL ';'
       | CONST ID ASSIGN STRING ';'
       ;

stmt : const_
     | TIP ID ';'
     | TIP ID ASSIGN expr ';'
     | TIP ID ASSIGN operator ';'
     | TIP ID ASSIGN VARBOOL ';'
     | TIP ID ASSIGN STRING ';'
     | ID ASSIGN expr ';'
     | ID ASSIGN operator ';'
     | ID ASSIGN VARBOOL ';'
     | ID ASSIGN STRING ';'
     | ID DIGIT ';'
     | ID '(' apel_fct ')' ';'
     | IF '(' conditii ')' '{' instructiuni '}'
     | IF '(' conditii ')' '{' instructiuni '}' ELSE '{' instructiuni '}'
     | WHILE '(' conditii ')' '{' instructiuni '}'
     | DO '{' instructiuni '}' WHILE '(' conditii ')' ';'
     | FOR '(' for_stmt ';' conditii ';' for_expr ')' '{' instructiuni '}'
     ;

for_stmt : TIP ID ASSIGN NR
         | TIP ID ASSIGN ID
         | ID ASSIGN NR
         | ID ASSIGN ID
         ;

for_expr : ID ASSIGN expr
         | ID DIGIT
	 ;
	 
operator : NR
	 | ID
	 ;
	 
expr : operator '*' operator
     | operator '/' operator
     | operator '+' operator
     | operator '-' operator
     | operator '%' operator
     ;

comparatii : operator OPR operator
	   ;
    
conditii : comparatii AND comparatii
	 | comparatii OR comparatii
         | comparatii
	 ;

apel_fct : operator 
         | apel_fct ',' operator
         ;


// user defined datatypes

clase : clase CLASS ID '{' instr_clasa '}' ';'
      | CLASS ID '{' instr_clasa '}' ';' 
      ;
 

instr_clasa : functii
            | instructiuni functii
            | functii instructiuni
            | instructiuni
            ;


// main()

main : MAIN '(' ')' '{' instructiuni '}'
     ;

%%
int yyerror(char * s){
printf("eroare: %s la linia:%d\n",s,yylineno);
}

int main(int argc, char** argv){
yyin=fopen(argv[1],"r");
yyparse();
} 
