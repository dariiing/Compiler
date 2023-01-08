%{
#include "functii.h"
#include "code.h"

AstNode* buildAST(DATATYPE, AstNode *, AstNode *);
int evalAST(AstNode *);
void freeAST(AstNode*);
AstNode* addNode(int);

extern FILE* yyin;
extern char* yytext;

%}

%union {
        char *value;
        ExprInfo ptr;
}

%token MAIN CLASS CONST ASSIGN OPR IF ELSE DO WHILE FOR AND OR RETURN DIGIT 

%token EVAL TYPEOF

%token<value> ID TIP VARBOOL STRING INCLUDE NR
%type<ptr> expr

%left OPR
%left '+' '-'
%left '!'
%left '^' '*' '/' '%' 
%left '(' ')'
%left AND OR
%left ','


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
           | TIP ID ASSIGN expr                ';'    {tip_id_val(false, $1, $2, $4.idk); verif_type_var($2,$4.idk);}
           | TIP ID ASSIGN VARBOOL             ';'    {tip_id_val(false, $1, $2, $4); verif_type_var($2,$4);}
           | TIP ID ASSIGN STRING              ';'    {tip_id_val(false, $1, $2, $4); verif_type_var($2,$4);}
           | ID ASSIGN expr                    ';'    {search_var($1); verif_type_var($1,$3.idk);}
           | ID ASSIGN VARBOOL                 ';'    {search_var($1); verif_type_var($1,$3);}
           | ID ASSIGN STRING                  ';'    {search_var($1); verif_type_var($1,$3);}
           | ID DIGIT                          ';'    {search_var($1);}
           | ID '(' apel_fct ')'               ';'    {search_function($1);}
           ;

apel_clase : ID '.' ID '(' apel_fct ')'            ';'
           | ID '.' ID                             ';'
           | ID '.' ID ASSIGN expr

apel_fct : apel_fct ',' apel_fct
         | expr
         | ID '(' apel_fct ')' 
         |
         ;


main : MAIN '(' ')' '{' instr_main '}'
     ;

instr_main: instr_main stmt
          | instr_main apel_clase
          | stmt
          | apel_clase
          ;
   
          
variabila : TIP  ID                   /* variabila simpla */  {tip_id_val(false, $1, $2, "");}	              
	  | TIP  ID '[' NR ']'	      /* vectori */           {char* x = (char *)malloc(10); sprintf(x, "%s[%s]", $2, $4); tip_id_val(false, strcat($1, "[]"), x, "");}	
          | TIP  ID ASSIGN NR                                 {tip_id_val(false, $1, $2, $4); verif_type_var($2,$4);}
          | TIP  ID ASSIGN ID                                 {tip_id_val(false, $1, $2, $4); verif_type_var($2,$4);}
          | TIP  ID ASSIGN VARBOOL                            {tip_id_val(false, $1, $2, $4); verif_type_var($2,$4);}
          | TIP  ID ASSIGN STRING                             {tip_id_val(false, $1, $2, $4); verif_type_var($2,$4);}
          | CONST TIP ID                                      {tip_id_val(true, $2, $3, "");}    
          | CONST TIP ID ASSIGN expr                          {tip_id_val(true, $2, $3, $5.idk); verif_type_var($3,$5.idk);}
          | CONST TIP ID ASSIGN VARBOOL                       {tip_id_val(true, $2, $3, $5); verif_type_var($3,$5);}
          | CONST TIP ID ASSIGN STRING                        {tip_id_val(true, $2, $3, $5); verif_type_var($3,$5);}
          | 
	  ;

// functii

functii : functii functie 
	| functie 
	;
	
functie : TIP ID '(' parametri ')' '{' instructiuni '}'                         {tip_fct(false, $1, $2, ""); }
        | TIP ID '(' parametri ')' '{' '}'                                      {tip_fct(false, $1, $2, ""); }
        | TIP ID '(' parametri ')' '{' instructiuni RETURN expr ';' '}'         {tip_fct(false, $1, $2, $9.idk); }
        | TIP ID '(' parametri ')' '{' instructiuni RETURN VARBOOL ';' '}'      {tip_fct(false, $1, $2, $9); }
        | TIP ID '(' parametri ')' '{' instructiuni RETURN STRING ';' '}'       {tip_fct(false, $1, $2, $9); }
        | TIP ID '(' parametri ')' '{' RETURN expr ';' '}'                      {tip_fct(false, $1, $2, $8.idk); }
        | TIP ID '(' parametri ')' '{' RETURN VARBOOL ';' '}'                   {tip_fct(false, $1, $2, $8); }
        | TIP ID '(' parametri ')' '{' RETURN STRING ';' '}'                    {tip_fct(false, $1, $2, $8); }
        | CONST TIP ID '(' parametri ')' '{' instructiuni'}'                    {tip_fct(true, $2, $3, $2);  }
        | CONST TIP ID '(' parametri ')' '{' '}'                                {tip_fct(true, $2, $3, $2);  }
        | CONST TIP ID '(' parametri ')' '{' instructiuni RETURN expr ';' '}'   {tip_fct(true, $2, $3, $10.idk); }
        | CONST TIP ID '(' parametri ')' '{' instructiuni RETURN VARBOOL ';' '}'{tip_fct(true, $2, $3, $10); }
        | CONST TIP ID '(' parametri ')' '{' instructiuni RETURN STRING ';' '}' {tip_fct(true, $2, $3, $10); }
        | CONST TIP ID '(' parametri ')' '{' RETURN expr ';' '}'                {tip_fct(true, $2, $3, $9.idk);  }
        | CONST TIP ID '(' parametri ')' '{' RETURN VARBOOL ';' '}'             {tip_fct(true, $2, $3, $9);  }
        | CONST TIP ID '(' parametri ')' '{' RETURN STRING ';' '}'              {tip_fct(true, $2, $3, $9);  }
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
       | CONST TIP ID ASSIGN expr      ';'        {tip_id_val(true, $2, $3, $5.idk);}
       | CONST TIP ID ASSIGN VARBOOL   ';'        {tip_id_val(true, $2, $3, $5);}
       | CONST TIP ID ASSIGN STRING    ';'        {tip_id_val(true, $2, $3, $5);}
       | CONST ID ASSIGN expr          ';'                
       | CONST ID ASSIGN VARBOOL       ';'             
       | CONST ID ASSIGN STRING        ';'            
       ;


stmt : const_
     | TIP ID                            ';'    {tip_id_val(false, $1, $2, "");}
     | TIP ID ASSIGN expr                ';'    {tip_id_val(false, $1, $2, $4.idk); verif_type_var($2,$4.idk);}	
     | TIP ID ASSIGN VARBOOL             ';'    {tip_id_val(false, $1, $2, $4); verif_type_var($2,$4);}
     | TIP ID ASSIGN STRING              ';'    {tip_id_val(false, $1, $2, $4); verif_type_var($2,$4);}
     | ID ASSIGN expr                    ';'    {search_var($1); verif_type_var($1,$3.idk);}
     | ID ASSIGN VARBOOL                 ';'    {search_var($1); verif_type_var($1,$3);}
     | ID ASSIGN STRING                  ';'    {search_var($1); verif_type_var($1,$3);}
     | ID DIGIT                          ';'    {search_var($1);} 
     | ID '(' apel_fct ')'               ';'    {search_function($1);}
     | IF '(' conditii ')' '{' instructiuni '}'
     | IF '(' conditii ')' '{' instructiuni '}' ELSE '{' instructiuni '}'
     | WHILE '(' conditii ')' '{' instructiuni '}'
     | DO '{' instructiuni '}' WHILE '(' conditii ')' ';'
     | FOR '(' for_stmt ';' conditii ';' for_expr ')' '{' instructiuni '}'
     | eval_type /* in main()*/           ';'
     ;

eval_type : EVAL '(' expr ')' {printf("output eval: %d\n", evalAST($3.ast)); freeAST($3.ast);}
          | TYPEOF '(' expr ')' 
          ;

for_stmt : TIP ID ASSIGN NR {tip_id_val(false, $1, $2, $4);verif_type_var($2,$4);}	
         | TIP ID ASSIGN ID {tip_id_val(false, $1, $2, $4);verif_type_var($2,$4);}	
         | ID ASSIGN NR 
         | ID ASSIGN ID
         ;

for_expr : ID ASSIGN expr
         | ID DIGIT
	 ;

//expresii aritmetice 
expr : expr '*' expr {$$.ast = buildAST(MUL, $1.ast, $3.ast); char* a = (char *)malloc(10); sprintf(a, "%s*%s", $1.idk, $3.idk); $$.idk = a;} 
     | expr '/' expr {$$.ast = buildAST(DIV, $1.ast, $3.ast); char* b = (char *)malloc(10); sprintf(b, "%s/%s", $1.idk, $3.idk); $$.idk = b;}
     | expr '+' expr {$$.ast = buildAST(ADD, $1.ast, $3.ast); char* c = (char *)malloc(10); sprintf(c, "%s+%s", $1.idk, $3.idk); $$.idk = c;}
     | expr '-' expr {$$.ast = buildAST(SUB, $1.ast, $3.ast); char* d = (char *)malloc(10); sprintf(d, "%s-%s", $1.idk, $3.idk); $$.idk = d;}
     | expr '%' expr {$$.ast = buildAST(MOD, $1.ast, $3.ast); char* e = (char *)malloc(10); sprintf(e, "%s%%%s", $1.idk, $3.idk); $$.idk = e;}
     | expr '^' expr {$$.ast = buildAST(POW, $1.ast, $3.ast); char* f = (char *)malloc(10); sprintf(f, "%s^%s", $1.idk, $3.idk); $$.idk = f;}
     | '(' expr ')'  {$$ = $2; char* f = (char *)malloc(10); sprintf(f, "%s", $2.idk); $$.idk = f;}
     | NR            {$$.ast = addNode(atoi($1)); $$.idk = $1;}
     | ID            {int ct = sVar($1); if(ct > -1 && strstr(table[ct].type, "int") != NULL) {$$.ast = addNode(atoi(table[ct].value));} $$.idk = $1;}
     ;

//expresii boolene
conditii : apel_fct                  //"<="|"<"|">="|">"|"=="|"!="
         | conditii OPR conditii  // ex: true != false
         | '(' conditii OPR conditii ')'
         | conditii AND conditii 
         | '(' conditii AND conditii ')'  
	 | conditii OR conditii
         | '(' conditii OR conditii ')'
         | VARBOOL                //true / false
	 | '(' VARBOOL ')' 
         ;

%%


int main(int argc, char** argv){
        yyin=fopen(argv[1],"r");
        yyparse();
        fclose(yyin);
        print_table(errors);
}