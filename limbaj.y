%{
#include "functii.h"

extern FILE* yyin;
extern char* yytext;

%}

%union {
        char *value;
}

%token MAIN CLASS CONST ASSIGN OPR IF ELSE DO WHILE FOR AND OR RETURN DIGIT 

%token EVAL TYPEOF

%token<value> ID TIP VARBOOL STRING INCLUDE NR
%type<value> operator
%type<value> expr

%left OPR
%left '+' '-'
%left '!'
%left '^' '*' '/' '%' 
%left '(' ')'
%left AND OR


%start progr
%%


progr   : headers outside_global clase outside_functii main {printf("program corect sintactic\n");}
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
        ;

variabila : TIP  ID                   /* variabila simpla */  {tip_id_val(false, $1, $2, "");}	              
	  | TIP  ID '[' NR ']'	      /* vectori */           {char* x = (char *)malloc(10); sprintf(x, "%s[%s]", $2, $4); tip_id_val(false, strcat($1, "[]"), x, "");}	
          | TIP  ID ASSIGN NR                                 {tip_id_val(false, $1, $2, $4);}
          | TIP  ID ASSIGN ID                                 {tip_id_val(false, $1, $2, $4);}
          | TIP  ID ASSIGN VARBOOL                            {tip_id_val(false, $1, $2, $4);}
          | TIP  ID ASSIGN STRING                             {tip_id_val(false, $1, $2, $4);}
          | CONST TIP ID                                      {tip_id_val(true, $2, $3, "");}    
          | CONST TIP ID ASSIGN expr                          {tip_id_val(true, $2, $3, $5);}
          | CONST TIP ID ASSIGN operator                      {tip_id_val(true, $2, $3, $5);}
          | CONST TIP ID ASSIGN VARBOOL                       {tip_id_val(true, $2, $3, $5);}
          | CONST TIP ID ASSIGN STRING                        {tip_id_val(true, $2, $3, $5);}
          | 
	  ;

// functii

functii : functii functie 
	| functie 
	;
	
functie : TIP ID '(' parametri ')' '{' instructiuni '}'                         {tip_fct(false, $1, $2, "");}
        | TIP ID '(' parametri ')' '{' '}'                                      {tip_fct(false, $1, $2, "");}
        | TIP ID '(' parametri ')' '{' instructiuni RETURN ret ';' '}'          {tip_fct(false, $1, $2, $1);}
        | TIP ID '(' parametri ')' '{' RETURN ret ';' '}'                       {tip_fct(false, $1, $2, $1);}
        | CONST TIP ID '(' parametri ')' '{' instructiuni'}'                    {tip_fct(true, $2, $3, $2);}
        | CONST TIP ID '(' parametri ')' '{' '}'                                {tip_fct(true, $2, $3, $2);}
        | CONST TIP ID '(' parametri ')' '{' instructiuni RETURN ret ';' '}'    {tip_fct(true, $2, $3, $2);}
        | CONST TIP ID '(' parametri ')' '{' RETURN ret ';' '}'                 {tip_fct(true, $2, $3, $2);}
	;

ret : operator
    | VARBOOL
    | STRING
    ;

parametri : parametru
	  | parametri ',' parametru
	  ;

parametru : TIP ID              {par_fct($1, $2);}             
	  | TIP ID '[' NR ']'   {char* y = (char *)malloc(10); sprintf(y, "%s[%s]", $2, $4); par_fct(strcat($1, "[]"), y);}
          |                     {par_fct("", "");}
	  ;

instructiuni : stmt 
	     | instructiuni  stmt 
	     ;
	  
const_ : CONST TIP ID                  ';'        {tip_id_val(true, $2, $3, "");}    
     //| CONST TIP ID ASSIGN expr      ';'        {tip_id_val(true, $2, $3, $5);}
       | CONST TIP ID ASSIGN operator  ';'        {tip_id_val(true, $2, $3, $5);}
       | CONST TIP ID ASSIGN VARBOOL   ';'        {tip_id_val(true, $2, $3, $5);}
       | CONST TIP ID ASSIGN STRING    ';'        {tip_id_val(true, $2, $3, $5);}
       | CONST ID ASSIGN expr          ';'                
       | CONST ID ASSIGN operator      ';'            
       | CONST ID ASSIGN VARBOOL       ';'             
       | CONST ID ASSIGN STRING        ';'            
       ;


stmt : const_
     | TIP ID                            ';'    {tip_id_val(false, $1, $2, "");}
   //| TIP ID ASSIGN expr                ';'    {tip_id_val(false, $1, $2, $4);}
     | TIP ID ASSIGN operator            ';'    {tip_id_val(false, $1, $2, $4);}	
     | TIP ID ASSIGN VARBOOL             ';'    {tip_id_val(false, $1, $2, $4);}
     | TIP ID ASSIGN STRING              ';'    {tip_id_val(false, $1, $2, $4);}
     | ID ASSIGN expr                    ';'    {search_var($1);}
     | ID ASSIGN operator                ';'    {search_var($1);}
     | ID ASSIGN VARBOOL                 ';'    {search_var($1);}
     | ID ASSIGN STRING                  ';'    {search_var($1);}
     | ID DIGIT                          ';'    {search_var($1);}
     | ID '(' apel_fct ')'               ';'     {search_function($1);}
     | IF '(' conditii ')' '{' instructiuni '}'
     | IF '(' conditii ')' '{' instructiuni '}' ELSE '{' instructiuni '}'
     | WHILE '(' conditii ')' '{' instructiuni '}'
     | DO '{' instructiuni '}' WHILE '(' conditii ')' ';'
     | FOR '(' for_stmt ';' conditii ';' for_expr ')' '{' instructiuni '}'
     | eval_type /* in main*/           ';'
     ;

eval_type : EVAL '(' parametri ')' ';' 
          | TYPEOF '(' parametri ')' ';'
          ;

for_stmt : TIP ID ASSIGN NR {tip_id_val(false, $1, $2, $4);}	
         | TIP ID ASSIGN ID {tip_id_val(false, $1, $2, $4);}	
         | ID ASSIGN NR 
         | ID ASSIGN ID
         ;

for_expr : ID ASSIGN expr
         | ID DIGIT
	 ;
	 
operator : NR {$$ = $1;}
	 | ID {$$ = $1;}
	 ;
	 
expr : operator '*' operator {char* a = (char *)malloc(10); sprintf(a, "%s*%s", $1, $3); $$ = a;} 
     | operator '/' operator {char* b = (char *)malloc(10); sprintf(b, "%s/%s", $1, $3); $$ = b;}
     | operator '+' operator {char* c = (char *)malloc(10); sprintf(c, "%s+%s", $1, $3); $$ = c;}
     | operator '-' operator {char* d = (char *)malloc(10); sprintf(d, "%s-%s", $1, $3); $$ = d;}
     | operator '%' operator {char* e = (char *)malloc(10); sprintf(e, "%s%%%s", $1, $3); $$ = e;}
     ;
     

comparatii : operator OPR operator
	   ;
    
conditii : comparatii AND comparatii
	 | comparatii OR comparatii
         | comparatii
	 ;


apel_fct : operator 
         | apel_fct ',' operator
         | apel_fct ',' expr
         | expr
         | ID '(' apel_fct ')' 
         | apel_fct ',' ID '(' apel_fct ')' 
         |
         ;


// user defined datatypes

clase : clase CLASS ID '{' instr_clasa '}' ';' // class abcd{ }
      | CLASS ID '{' instr_clasa '}' ';' 
      ;
 

instr_clasa : functii
            | instructiuni_clasa functii
            | functii instructiuni_clasa
            | instructiuni_clasa
            | functii instructiuni_clasa functii
            | instructiuni_clasa functii instructiuni_clasa
            ;

instructiuni_clasa : stmt_clasa
	           | instructiuni_clasa  stmt_clasa
	           ;

stmt_clasa : TIP ID                            ';'    {tip_id_val(false, $1, $2, "");}
         //| TIP ID ASSIGN expr                ';'    {tip_id_val(false, $1, $2, $4);}
           | TIP ID ASSIGN operator            ';'    {tip_id_val(false, $1, $2, $4);}	
           | TIP ID ASSIGN VARBOOL             ';'    {tip_id_val(false, $1, $2, $4);}
           | TIP ID ASSIGN STRING              ';'    {tip_id_val(false, $1, $2, $4);}
           | ID ASSIGN expr                    ';'    {search_var($1);}
           | ID ASSIGN operator                ';'    {search_var($1);}
           | ID ASSIGN VARBOOL                 ';'    {search_var($1);}
           | ID ASSIGN STRING                  ';'    {search_var($1);}
           | ID DIGIT                          ';'    {search_var($1);}
           | ID '(' apel_fct ')'               ';'     {search_function($1);}
           ;

apel_clase : ID '.' ID '(' apel_fct ')' ';'
           | ID '.' ID ';'
           | ID '.' ID ASSIGN expr
           | apel_clase ID '.' ID '(' apel_fct ')' ';'
           | apel_clase ID '.' ID                  ';'
           | apel_clase ID '.' ID ASSIGN expr      ';'

main : MAIN '(' ')' '{' instructiuni '}'
     | MAIN '(' ')' '{' apel_clase instructiuni '}'
     | MAIN '(' ')' '{' instructiuni apel_clase '}'
     | MAIN '(' ')' '{' apel_clase instructiuni apel_clase '}'
     ;

%%


int main(int argc, char** argv){
        yyin=fopen(argv[1],"r");
        yyparse();
        fclose(yyin);
        print_table(errors);
}

