%{
#include <stdio.h>
#include <string.h>
extern FILE* yyin;
extern char* yytext;
extern int yylineno;
extern int count_lines;

int count = 0; //pt table[]
int q;
char type[10];
char id[10];

struct data{
        char* value;
        char* data_type;
        char* type;
        int line_number;
} table[40];

int search(char *);
void insert_id();
void add_in_table(char);
void insert_type();
%}



%token INCLUDE MAIN  CLASS CONST ID NR ASSIGN OPR VARBOOL STRING IF ELSE DO WHILE FOR AND OR RETURN DIGIT TINT TFLOAT TCHAR TSTRING TBOOL TVOID

%token EVAL TYPEOF
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
	    | global CONST {strcpy(type,"const");} variabila ';'
            | CONST {strcpy(type,"const ");} variabila ';'
            | eval_type
	    ;

datatype: TINT      { insert_type(); }
        | TFLOAT    { insert_type(); }
        | TCHAR     { insert_type(); }
        | TSTRING   { insert_type(); }
        | TBOOL     { insert_type(); }
        | TVOID     { insert_type(); }
        ;

id_table: ID { insert_id(); }
        ;

variabila : datatype id_table 		         { add_in_table('V'); }       /* variabila simpla */
	  | datatype id_table '[' NR ']'	 { add_in_table('V'); }      /* vectori */
          | datatype id_table ASSIGN operator    { add_in_table('V'); }
          | datatype id_table ASSIGN VARBOOL     { add_in_table('V'); }
          | datatype id_table ASSIGN STRING      { add_in_table('V'); }
	  ;
	
// functii

functii : functii functie 
        | CONST functie 
        | functii CONST functie 
	| functie 
	;
	
functie : datatype id_table '(' parametri ')' '{' instructiuni '}'
        | datatype id_table '(' parametri ')' '{' '}'
        | datatype id_table '(' parametri ')' '{' instructiuni RETURN ret ';' '}'
        | datatype id_table '(' parametri ')' '{' RETURN ret ';' '}'
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

parametru : datatype id_table
	  | datatype id_table '[' NR ']'
          |
	  ;

instructiuni : stmt 
	     | instructiuni  stmt 
	     ;
	  
const_ : CONST datatype id_table ';'                  { add_in_table('V'); }
       | CONST datatype id_table ASSIGN expr ';'      { add_in_table('V'); }
       | CONST datatype id_table ASSIGN operator ';'  { add_in_table('V'); }
       | CONST datatype id_table ASSIGN VARBOOL ';'   { add_in_table('V'); }
       | CONST datatype id_table ASSIGN STRING ';'    { add_in_table('V'); }
       | CONST id_table ASSIGN expr ';'               { add_in_table('V'); }
       | CONST id_table ASSIGN operator ';'           { add_in_table('V'); }
       | CONST id_table ASSIGN VARBOOL ';'            { add_in_table('V'); }
       | CONST id_table ASSIGN STRING ';'             { add_in_table('V'); }
       ;

stmt : const_
     | datatype id_table                     { add_in_table('V'); } ';'
     | datatype id_table ASSIGN expr         { add_in_table('V'); } ';'
     | datatype id_table ASSIGN operator     { add_in_table('V'); } ';'
     | datatype id_table ASSIGN VARBOOL      { add_in_table('V'); } ';'
     | datatype id_table ASSIGN STRING       { add_in_table('V'); } ';'
     | id_table ASSIGN expr                  ';'
     | id_table ASSIGN operator              { add_in_table('V'); } ';'
     | id_table ASSIGN VARBOOL               { add_in_table('V'); } ';'
     | id_table ASSIGN STRING                { add_in_table('V'); } ';'
     | ID DIGIT ';'
     | ID '(' apel_fct ')' ';'
     | IF '(' conditii ')' '{' instructiuni '}'
     | IF '(' conditii ')' '{' instructiuni '}' ELSE '{' instructiuni '}'
     | WHILE '(' conditii ')' '{' instructiuni '}'
     | DO '{' instructiuni '}' WHILE '(' conditii ')' ';'
     | FOR '(' for_stmt ';' conditii ';' for_expr ')' '{' instructiuni '}'
     ;

for_stmt : datatype ID ASSIGN NR
         | datatype ID ASSIGN ID
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
}

int main(int argc, char** argv){
        yyin=fopen(argv[1],"r");
        yyparse();
        printf("\n\n");
        printf("                        SYMBOL TABLE                        \n");
        printf("------------------------------------------------------------\n");
        printf("VARIABLE        TYPE                     VALUE       LINE NO\n");
        int i;
        for(i=0; i<count; i++) {
		printf("%s\t\t%s\t\t%s\t\t%d\t\t\n", table[i].type, table[i].data_type, table[i].value, table[i].line_number);
	}

} 

int search(char *type) {
	int i;
	for(i=count-1; i>=0; i--) {
		if(strcmp(table[i].value, type)==0) {
			return -1;
			break;
		}
	}
	return 0;
}

void insert_type() {
        if(strcmp(type,"const")==0){
                strcat(type, " ");
                strcat(type, yytext);
        }
        else{
	        strcpy(type, yytext);
                strcat(type, "      ");
        }
}

void insert_id() {
	strcpy(id, yytext);
}

void add_in_table(char c) {
  q=search(yytext);
  int i;
  if(!q) {
    	if(c == 'V') {
                /* char* temp;             daca scriu chestia asta nu imi mai verifica urmatoarele variabile globale
                strcpy(temp,yytext);
                if(strcmp(yytext,";")>=0){
                        strcpy(temp,"no value");
                }  */
		table[count].value=strdup(yytext);
		table[count].data_type=strdup(type);
		table[count].line_number=yylineno;
                table[count].type=strdup(id);
		count++;
		}
	}
}