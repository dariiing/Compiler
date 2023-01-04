#ifndef FUNCTII_H
#define FUNCTII_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

extern int yylineno;
extern int count_lines;
int var_used;
int fct_used;
int count = 0; //pt table[] 
int count_fct = 0; //pt t_fct[]
int errors = 0; // pentru tabele

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
//verifica daca variabilele/functiile sunt initializate de doua ori

bool found(char* variable){

        // variables
        int i;
        var_used = 0;
        for(i = 0; i < count; i++){
                
                char *x;
                x = (char*)malloc(strlen(table[i].name));
                strcpy(x, table[i].name);
                char *pch;
                pch = strtok (x," ");
                
                if(pch != NULL){
                        strcpy(x, pch);
                }
                if(strcmp(x, variable) == 0){
                        var_used = table[i].line_number;
                        return true;
                }
                
        }
        return false;
}

bool fct_found(char* variable){

        // functions
        int i;
        fct_used = 0;
        for(i = 0; i < count_fct; i++){
                
                char *x;
                x = (char*)malloc(strlen(t_fct[i].name));
                strcpy(x, t_fct[i].name);
                char *pch;
                pch = strtok (x," ");
                
                if(pch != NULL){
                        strcpy(x, pch);
                }
                if(strcmp(x, variable) == 0){
                        fct_used = t_fct[i].rownum;
                        return true;
                }
                
        }
        return false;
}

void search_function(char* name) // daca exista sau nu functia resp
{
   int ok = 0, i;
   for (i = 0; i < count_fct; i++) {
         if (strstr(t_fct[i].name, name) !=NULL) {
            ok = 1;
         }
   }
   if(ok==0) {
        char s[200];
        sprintf(s,"Functia <%s> nu a fost declarata", name);
        yyerror(s);
        exit(0);
   }
}

void search_var(char* name) // daca exista sau nu functia resp
{
   int ok = 0, i;
   for (i = 0; i < count; i++) {
         if (strstr(table[i].name, name) !=NULL) {
            ok = 1;
         }
   }
   if(ok==0) {
        char s[200];
        sprintf(s,"Variabila <%s> nu a fost declarata", name);
        yyerror(s);
        exit(0);
   }
}

int yyerror(char * s){
        printf("%s -> eroare la linia: %d\n",s,yylineno);
        errors = 1;
}

//informatii despre variabile

void tip_id_val(bool cnst, char* typ, char* idd, char* vall){

        if(found(idd) == false){
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
        else{
                char s[200];
                sprintf(s,"Variabila <%s> este deja declarata la linia %d", idd,var_used);
                yyerror(s);
                exit(0);
        }
}

//informatii despre functii

void tip_fct(bool cnst, char * typ, char *idd, char *rett){

        if(fct_found(idd) == false){
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
                t_fct[count_fct].ret = rett;
                if(t_fct[count_fct].nr_param == 0){
                t_fct[count_fct].rownum = yylineno;
                }
                

                count_fct++;
       }
       else{
                char s[200];
                sprintf(s,"Functia <%s> este deja declarata la linia %d", idd, var_used);
                yyerror(s);
                exit(0);
        }


}

// FUNCTII PENTRU TABEL

void print_table (int errors)
{
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
                fclose(fp);
        }
}

#endif