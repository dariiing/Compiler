%{
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

extern FILE* yyin;
extern char* yytext;
extern int yylineno;
extern int count_lines;

void tip_id_val(bool, char *, char *, char*);
void tip_fct(bool, char *, char *, char*);
void par_fct(char *, char *);

int count = 0; //pt table[] 
int count_fct = 0; //pt t_fct[]
int errors = 0;

struct fct{

        struct param{
                char* type;
                char* name;
                char* value;
                
        } param_fct[5];

        
        char* type;
        char* name;
        char* ret;
        int rownum;
        int nr_param;
        bool const_fct;

}t_fct[40];

struct data{

        char* type;
        char* name;
        char* value;

        int line_number;
        bool const_var; 

} table[40];

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

headers : headers INCLUDE {tip_id_val(false, "header", $2, "");}
        | INCLUDE {tip_id_val(false, "header", $1, "");}
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
        | eval_type
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
	
        // int vector[5] = {1, 2, 3, 4, 5};


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

parametru : TIP ID              {par_fct($1, $2);}             
	  | TIP ID '[' NR ']'   {char* y = (char *)malloc(10); sprintf(y, "%s[%s]", $2, $4); par_fct(strcat($1, "[]"), y);}
          |
	  ;

instructiuni : stmt 
	     | instructiuni  stmt 
	     ;
	  
const_ : CONST TIP ID                  ';'        {tip_id_val(true, $2, $3, "");}    
       | CONST TIP ID ASSIGN expr      ';'        {tip_id_val(true, $2, $3, $5);}
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
     | TIP ID ASSIGN expr                ';'    {tip_id_val(false, $1, $2, $4);}
     | TIP ID ASSIGN operator            ';'    {tip_id_val(false, $1, $2, $4);}	
     | TIP ID ASSIGN VARBOOL             ';'    {tip_id_val(false, $1, $2, $4);}
     | TIP ID ASSIGN STRING              ';'    {tip_id_val(false, $1, $2, $4);}
     | ID ASSIGN expr                    ';'
     | ID ASSIGN operator                ';'
     | ID ASSIGN VARBOOL                 ';'
     | ID ASSIGN STRING                  ';'
     | ID DIGIT                          ';'
     | ID '(' apel_fct ')'               ';'
     | IF '(' conditii ')' '{' instructiuni '}'
     | IF '(' conditii ')' '{' instructiuni '}' ELSE '{' instructiuni '}'
     | WHILE '(' conditii ')' '{' instructiuni '}'
     | DO '{' instructiuni '}' WHILE '(' conditii ')' ';'
     | FOR '(' for_stmt ';' conditii ';' for_expr ')' '{' instructiuni '}'
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
     | operator '%' operator {char* e = (char *)malloc(10); sprintf(e, "%s\%%s", $1, $3); $$ = e;}
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

clase : clase CLASS ID '{' instr_clasa '}' ';' // class abcd{ }
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
        errors = 1;
}

int main(int argc, char** argv){
        yyin=fopen(argv[1],"r");
        yyparse();
        fclose(yyin);
        FILE* fp;
        if(errors==0){
                fp = fopen("symbol_table.txt", "w+");
                fprintf(fp,"\n\n");
                fprintf(fp,"                               SYMBOL TABLE  VARIABLES                                                   \n");
                fprintf(fp,"---------------------------------------------------------------------------------------------------------\n");
                fprintf(fp,"      TYPE                       NAME                    VALUE                    LINE NO                \n");
                fprintf(fp,"---------------------------------------------------------------------------------------------------------\n");
                int i, max = 0 ;
                for(i=0; i<count; i++) {
                        if(strlen(table[i].name)>max) {
                                max = strlen(table[i].name);
                        }
                }
                int temp;
                for(i=0; i<count; i++) {
                         if(strlen(table[i].name)!=max)
                         {
                                 temp = max - strlen(table[i].name);
                                 char *const_ptr;
                                 const_ptr = (char*)malloc(24);
                                 strcat(const_ptr, table[i].name);
                                 while( temp != 0)
                                {
                                  strcat(const_ptr, " ");
                                         temp--;
                                }
                                table[i].name = const_ptr;
                        }
                }
                max = 0;
                for(i=0; i<count; i++) {
                        if(strlen(table[i].value)>max) {
                                max = strlen(table[i].value);
                        }
                }
                for(i=0; i<count; i++) {
                         if(strlen(table[i].value)!=max)
                         {
                                 temp = max - strlen(table[i].value);
                                 char *const_ptr;
                                 const_ptr = (char*)malloc(24);
                                 strcat(const_ptr, table[i].value);
                                 while( temp != 0)
                                {
                                  strcat(const_ptr, " ");
                                  temp--;
                                }
                                table[i].value = const_ptr;
                        }
                }
                for(i=0; i<count; i++) {
		        fprintf(fp,"%s\t\t\t%s\t\t\t%s\t\t%d\n", table[i].type, table[i].name, table[i].value, table[i].line_number);
                        fprintf(fp,"---------------------------------------------------------------------------------------------------------\n");
	        }
                fclose(fp);
                fp = fopen("symbol_function_table.txt", "w+");
                fprintf(fp,"                                       SYMBOL TABLE  FUNCTIONS                                      \n");
                fprintf(fp,"----------------------------------------------------------------------------------------------------\n");
                fprintf(fp,"   LINE NO           TYPE           NAME           RETURN              PARAM                        \n");
                fprintf(fp,"----------------------------------------------------------------------------------------------------\n");
                int j;
                max = 0;
                for(i=0; i<count_fct; i++) {
                        if(strlen(t_fct[i].name)>max) {
                                max = strlen( t_fct[i].name);
                        }
                }
                for(i=0; i<count_fct; i++) {
                         if(strlen( t_fct[i].name)!=max)
                         {
                                 temp = max - strlen( t_fct[i].name);
                                 char *const_ptr;
                                 const_ptr = (char*)malloc(24);
                                 strcat(const_ptr,  t_fct[i].name);
                                 while( temp != 0)
                                {
                                  strcat(const_ptr, " ");
                                         temp--;
                                }
                                 t_fct[i].name = const_ptr;
                        }
                }
                max = 0;
                 for(i=0; i<count_fct; i++) {
                        if(strlen(t_fct[i].ret)>max) {
                                max = strlen( t_fct[i].ret);
                        }
                }
                for(i=0; i<count_fct; i++) {
                         if(strlen( t_fct[i].ret)!=max)
                         {
                                 temp = max - strlen( t_fct[i].ret);
                                 char *const_ptr;
                                 const_ptr = (char*)malloc(24);
                                 strcat(const_ptr,  t_fct[i].ret);
                                 while( temp != 0)
                                {
                                  strcat(const_ptr, " ");
                                         temp--;
                                }
                                 t_fct[i].ret = const_ptr;
                        }
                }
                for(j = 0; j < count_fct; j++){
                        fprintf(fp,"\t%d\t\t\t%s\t\t\t%s\t\t\t%s\t\t\t %s %s\n ", t_fct[j].rownum, t_fct[j].type, t_fct[j].name, t_fct[j].ret, t_fct[j].param_fct[0].type, t_fct[j].param_fct[0].name);
                        fprintf(fp,"---------------------------------------------------------------------------------------------------\n");
                }
        }

}

void tip_id_val(bool cnst, char* typ, char* idd, char* vall){
        if(cnst == false){
                char *const_ptr;
                const_ptr = (char*)malloc(24);

                strcat(const_ptr, "     ");
                strcat(const_ptr, typ);
                strcat(const_ptr, "   ");
                table[count].type = const_ptr;

        }
        else{

                char *const_ptr;
                const_ptr = (char*)malloc(24);

                strcat(const_ptr, "   const ");
                strcat(const_ptr, typ);
                table[count].type = const_ptr;
                
        }
        if(strlen(idd)< 10){
                char *const_ptr;
                const_ptr = (char*)malloc(24);
                strcat(const_ptr, "       ");
                strcat(const_ptr, idd);
                table[count].name = const_ptr;
        }
        else{
                table[count].name = idd;
        }
        table[count].value = vall;
        table[count].line_number = yylineno;
        count++;
}

// parametrii functie

void par_fct(char * typ, char *idd){

        int ce_dq = 0;
        ce_dq = t_fct[count_fct].nr_param;

        if(typ != NULL){

        t_fct[count_fct].param_fct[ce_dq].type = typ;
        t_fct[count_fct].param_fct[ce_dq].name = idd;}
        else{

                strcpy(t_fct[count_fct].param_fct[ce_dq].type, "");
                strcpy(t_fct[count_fct].param_fct[ce_dq].name, "");
        

        }

        t_fct[count_fct].rownum = yylineno;

        t_fct[count_fct].nr_param++;
        
}

// tip + nume + return functie

void tip_fct(bool cnst, char * typ, char *idd, char *rett){

        
        if(cnst == false){
                char *const_ptr;
                const_ptr = (char*)malloc(24);
                strcat(const_ptr, "   ");
                strcat(const_ptr, typ);
                strcat(const_ptr, "   ");
                t_fct[count_fct].type = const_ptr;

        }

        if(cnst == true) {

                char *const_ptr;
                const_ptr = (char*)malloc(24);

                strcat(const_ptr, "const ");
                strcat(const_ptr, typ);
                t_fct[count_fct].type = const_ptr;

        }

        t_fct[count_fct].name = idd;
        if(strlen(rett)<0){
                char *const_ptr;
                const_ptr = (char*)malloc(24);
                strcat(const_ptr, "N/A");
                t_fct[count_fct].ret = const_ptr;
        }
        else{
                t_fct[count_fct].ret = rett;
        }
        if(t_fct[count_fct].nr_param == 0){
                t_fct[count_fct].rownum = yylineno;
        }
        

        count_fct++;


}