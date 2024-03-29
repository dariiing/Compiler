#ifndef FUNCTII_H
#define FUNCTII_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
extern int yylineno;
extern int count_lines;
int var_used;
int fct_used;
int count = 0;     // pt table[]
int count_fct = 0; // pt t_fct[]
int errors = 0;    // pentru tabele

struct fct
{

        struct param
        {
                char *type;
                char *name;
                char *value;

        } param_fct[5];

        char *type;
        char *name;
        char *ret;
        int rownum;
        int nr_param;
        bool const_fct;

} t_fct[40];

struct data
{

        char *type;
        char *name;
        char *value;

        int line_number;
        bool const_var;

} table[100];

int yyerror(char *s)
{
        printf("%s -> eroare la linia: %d\n", s, yylineno);
        errors = 1;
}

// parametrii functie

void par_fct(char *typ, char *idd)
{

        int contor = 0;
        contor = t_fct[count_fct].nr_param;

        if (typ != NULL)
        {

                t_fct[count_fct].param_fct[contor].type = typ;
                t_fct[count_fct].param_fct[contor].name = idd;
        }
        else
        {

                strcpy(t_fct[count_fct].param_fct[contor].type, "");
                strcpy(t_fct[count_fct].param_fct[contor].name, "");
        }

        t_fct[count_fct].rownum = yylineno;
        t_fct[count_fct].nr_param++;
}

// tip + nume + return functie
// verifica daca variabilele/functiile sunt initializate de doua ori

bool found(char *variable)
{

        // variables
        int i;
        var_used = 0;
        for (i = 0; i < count; i++)
        {

                // char *x;
                // x = (char *)malloc(strlen(table[i].name));
                // strcpy(x, table[i].name);
                // char *pch;
                // pch = strtok(x, " ");

                // if (pch != NULL)
                // {
                //         strcpy(x, pch);
                // }
                if (strcmp(table[i].name, variable) == 0)
                {
                        var_used = table[i].line_number;
                        return true;
                }
        }
        return false;
}

// returneaza indexul din tabelul de variabile unde gaseste variabila respectiva
int sVar(char *name)
{
        for (int i = 0; i < count; ++i)
        {
                if (strcmp(table[i].name, name) == 0)
                {
                        return i;
                }
        }
        return -1;
}

// returneaza indexul din tabelul de functii unde gaseste functia respectiva
int sFct(char *name)
{
        for (int i = 0; i < count_fct; ++i)
        {
                if (strcmp(t_fct[i].name, name) == 0)
                {
                        return i;
                }
        }
        return -1;
}

bool fct_found(char *fct_name)
{

        // fct_found == true  => fct deja exista
        // fct_found == false => fct nu exista

        int i;
        fct_used = 0;

        // caut prin toate functiile daca denumirea deja exista
        for (i = 0; i < count_fct; i++)
        {
                // scot spatiile pentru formatare
                char *name;
                name = (char *)malloc(strlen(t_fct[i].name));
                strcpy(name, t_fct[i].name);

                int contor_exist_fct = 0;
                contor_exist_fct = t_fct[i].nr_param;

                // daca denumirea exista && nu compara functia noua cu ea insasi
                if (strcmp(name, fct_name) == 0 && contor_exist_fct != yylineno)
                {
                        // daca denumirea exista, dar tipul e diferit
                        if (strcmp(t_fct[count_fct].type, t_fct[i].type) != 0)
                        {
                                char s[60];
                                sprintf(s, "Functiile de tip diferit necesita denumiri diferite\n");
                                yyerror(s);
                                exit(0);
                        }
                        // daca denumirea exista, verific daca parametrii sunt la fel

                        // verific daca au acelasi nr de param
                        int contor_new_fct = 0;
                        contor_new_fct = t_fct[count_fct].nr_param;

                        // daca nr_param e diferit, atunci fct sunt diferite

                        if (contor_new_fct != contor_exist_fct)
                        {
                                return false;
                        }
                        else
                        {
                                int count_param_identici = 0;
                                for (int j = 0; j < contor_exist_fct; ++j)
                                {
                                        if (strcmp(t_fct[count_fct].param_fct[j].type, t_fct[i].param_fct[j].type) == 0)
                                        {
                                                count_param_identici++;
                                        }
                                }
                                if (count_param_identici == contor_exist_fct)
                                {
                                        return true;
                                }
                        }
                }
        }
        return false;
}

// search_function verifica daca exista declararea functiei;

void search_function(char *name) // daca exista sau nu functia resp
{
        int ok = 0, i;
        for (i = 0; i < count_fct; i++)
        {
                if (strcmp(t_fct[i].name, name) == 0)
                {
                        ok = 1;
                }
        }
        if (ok == 0)
        {
                char s[200];
                sprintf(s, "Functia <%s> nu a fost declarata", name);
                yyerror(s);
                exit(0);
        }
}

// search_var returneaza tipul variabilei daca o gaseste;
char *search_var(char *name)
{
        int i;
        for (i = 0; i < count; i++)
        {
                if (strcmp(table[i].name, name) == 0)
                {
                        return table[i].type;
                }
        }
        return "none";
}

int search_line_var(char *name)
{
        int i;
        i = sVar(name);
        if (strcmp(table[i].name, name) == 0)
        {
                return table[i].line_number;
        }

        return -1;
}
// TIP ID ASSIGN expr

void verif_type_var(char *id, char *expr)
{
        //printf("Id %s\n", id);
        //printf("Expr %s\n", expr);
        int i, ok = 1, tabel = 0, j, este_param = 0;
        char type[30];
        char *p;
        //printf("inainte\n");
        for (i = 0; i < count; i++)
        { // caut in tabel tipul variabilei
                if (strcmp(table[i].name, id) == 0)
                {
                        strcpy(type, table[i].type);
                        tabel = 1;
                }
        }
        //printf("dupa for\n");
        if (tabel == 0)
        {
                strcpy(type, "undefined");
        }
        // printf("type: %s\n",type);
        if (strstr(type, "int") != NULL && tabel == 1)
        { // daca e de tip int => expresia de tip int

                if (strstr(expr, ".") != NULL || strstr(expr, "true") != NULL || strstr(expr, "false") != NULL || strstr(expr, "\"") != NULL) // e nr float
                {
                        char s[200];
                        sprintf(s, "Variabila <%s> nu contine o valoare de tip int", id);
                        yyerror(s);
                        exit(0);
                }
                else if (strstr(expr, "+") != NULL || strstr(expr, "-") != NULL || strstr(expr, "*") != NULL || strstr(expr, "/") != NULL || strstr(expr, "%") != NULL || strstr(expr, "^") != NULL)
                {
                        p = strtok(expr, "+-/*^");
                        int exist = 0;
                        char type_p[20];

                        while (p)
                        {
                                int alfa = 0;
                                for (i = 0; p[i]; i++)
                                {
                                        if (isalpha(p[i]))
                                        {
                                                alfa = 1;
                                        }
                                }

                                if (alfa == 1)
                                { // daca e variabila
                                        // verific in tabel
                                        for (i = 0; i < count; i++)
                                        { // caut in tabel tipul variabilei
                                                if (strcmp(table[i].name, p) == 0)
                                                {
                                                        strcpy(type_p, table[i].type);
                                                        exist = 1;
                                                }
                                        }
                                        if (exist == 0)
                                        {
                                                char s[200];
                                                sprintf(s, "Variabila <%s> nu a fost declarata", p);
                                                yyerror(s);
                                                exit(0);
                                        }
                                        else if (strstr(type_p, "int") == NULL)
                                        {
                                                char s[200];
                                                sprintf(s, "Variabila <%s> nu este de tip int", p);
                                                yyerror(s);
                                                exit(0);
                                        }
                                }
                                p = strtok(NULL, "+-/*^");
                        }
                }
        }
        else if (strstr(type, "float") != NULL && tabel == 1)
        {
                if (strstr(expr, "+") != NULL || strstr(expr, "-") != NULL || strstr(expr, "*") != NULL || strstr(expr, "/") != NULL || strstr(expr, "%") != NULL || strstr(expr, "^") != NULL)
                {
                        p = strtok(expr, "+-/*^"); //  ex: 12.3+1223.2-4556.34
                        int exist = 0;
                        char type_p[20];

                        while (p)
                        {
                                int alfa = 0;
                                for (i = 0; p[i]; i++)
                                {
                                        if (isalpha(p[i]))
                                        {
                                                alfa = 1;
                                        }
                                }
                                if (strstr(p, ".") == NULL && alfa == 0)
                                { // daca nu e variabila || nr float

                                        char s[200];
                                        sprintf(s, "Variabila <%s> nu contine o valoare de tip float", id);
                                        yyerror(s);
                                        exit(0);
                                }
                                else if (alfa == 1)
                                { // daca e variabila
                                        // verific in tabel
                                        for (i = 0; i < count; i++)
                                        { // caut in tabel tipul variabilei
                                                if (strstr(table[i].name, p) != NULL)
                                                {
                                                        strcpy(type_p, table[i].type);
                                                        exist = 1;
                                                }
                                        }
                                        if (exist == 0)
                                        {
                                                char s[200];
                                                sprintf(s, "Variabila <%s> nu a fost declarata", p);
                                                yyerror(s);
                                                exit(0);
                                        }
                                        else if (strstr(type_p, "float") == NULL)
                                        {
                                                char s[200];
                                                sprintf(s, "Variabila <%s> nu este de tip float ", p);
                                                yyerror(s);
                                                exit(0);
                                        }
                                }
                                p = strtok(NULL, "+-/*^");
                        }
                }
                else if (strstr(expr, "+") == NULL || strstr(expr, "-") == NULL || strstr(expr, "*") == NULL || strstr(expr, "/") == NULL || strstr(expr, "%") == NULL || strstr(expr, "^") == NULL) // daca nu contine asta ins ca e doar un nr
                {
                        if (strstr(expr, ".") == NULL || strstr(expr, "true") != NULL || strstr(expr, "false") != NULL || strstr(expr, "\"") != NULL) // e nr float
                        {
                                char s[200];
                                sprintf(s, "Variabila <%s> nu contine o valoare de tip float", id);
                                yyerror(s);
                                exit(0);
                        }
                }
        }
        else if (strstr(type, "bool") != NULL && tabel == 1)
        {
                int ok = 0;
                if (strstr(expr, "false") == NULL)
                {
                        ok = 1;
                }
                if (ok == 1 && strstr(expr, "true") == NULL)
                {
                        char s[200];
                        sprintf(s, "Variabila <%s> nu contine o valoare de tip bool", id);
                        yyerror(s);
                        exit(0);
                }
        }
        else if (strstr(type, "char") != NULL && tabel == 1)
        {
                if (strstr(expr, "\"") == NULL || strstr(expr, "true") != NULL || strstr(expr, "false") != NULL)
                {
                        char s[200];
                        sprintf(s, "Variabila <%s> nu contine o valoare de tip char", id);
                        yyerror(s);
                        exit(0);
                }
        }
        else if (strstr(type, "string") != NULL && tabel == 1)
        {
                if (strstr(expr, "\"") == NULL || strstr(expr, "true") != NULL || strstr(expr, "false") != NULL)
                {
                        char s[200];
                        sprintf(s, "Variabila <%s> nu contine o valoare de tip string", id);
                        yyerror(s);
                        exit(0);
                }
        }
        else if (strstr(type, "undefined") != NULL)
        {
                for (i = 0; i <= count_fct; i++)
                {
                        for (j = 0; j <= t_fct[j].nr_param; j++)
                        {
                                if (strcmp(t_fct[j].param_fct[j].name, id) == 0)
                                {
                                        este_param = 1;
                                }
                        }
                }
                if (este_param == 0)
                {
                        char s[200];
                        sprintf(s, "Nu exista parametru sau variabila declarata: <%s>", id);
                        yyerror(s);
                        exit(0);
                }
                else
                {
                        char type_param[20];
                        for (i = 0; i <= count_fct; i++)
                        {
                                for (j = 0; j <= t_fct[j].nr_param; j++)
                                {
                                        if (strcmp(t_fct[j].param_fct[j].name, id) == 0)
                                        {
                                                strcpy(type_param, t_fct[j].param_fct[j].type); // am copiat tipul parametrului
                                        }
                                }
                        }
                        char type_expr[20];
                        if (strstr(expr, ".") != NULL && strstr(expr, "\"") == NULL)
                        {
                                strcpy(type_expr, "float");
                        }
                        else if (strstr(expr, "true") != NULL || strstr(expr, "false") != NULL && strstr(expr, "\"") == NULL)
                        {
                                strcpy(type_expr, "bool");
                        }
                        else if (strstr(expr, "\"") != NULL)
                        {
                                strcpy(type_expr, "string char");
                        }
                        else
                        {
                                strcpy(type_expr, "int");
                        }
                        if (strstr(type_expr, type_param) == NULL)
                        {
                                char s[200];
                                sprintf(s, "Variabila <%s> nu este de tip %s", id, type_expr);
                                yyerror(s);
                                exit(0);
                        }
                }
        }
}

// informatii despre variabile

void tip_id_val(bool cnst, char *typ, char *idd, char *vall)
{

        if (found(idd) == false)
        {
                if (cnst == false)
                {
                        char *const_ptr;
                        const_ptr = (char *)malloc(24);
                        table[count].type = typ;
                }
                else
                {

                        char *const_ptr;
                        const_ptr = (char *)malloc(24);

                        strcat(const_ptr, "const ");
                        strcat(const_ptr, typ);
                        table[count].type = const_ptr;
                }

                table[count].name = idd;
                table[count].value = vall;
                table[count].line_number = yylineno;
                count++;
        }
        else
        {
                char s[200];
                sprintf(s, "Variabila <%s> este deja declarata la linia %d", idd, var_used);
                yyerror(s);
                exit(0);
        }
}

// informatii despre functii

// tip_fct = verifica tipul functiei

void tip_fct(bool cnst, char *typ, char *idd, char *rett)
{
        // formatare tabel
        if (cnst == false)
        {
                char *const_ptr;
                const_ptr = (char *)malloc(24);

                t_fct[count_fct].type = typ;
        }
        // verifica daca fct e const (si adauga in tabel "const")
        if (cnst == true)
        {

                char *const_ptr;
                const_ptr = (char *)malloc(24);

                strcat(const_ptr, "const ");
                strcat(const_ptr, typ);
                t_fct[count_fct].type = const_ptr;
        }

        t_fct[count_fct].name = idd;
        t_fct[count_fct].ret = rett;

        if (t_fct[count_fct].nr_param == 0)
        {
                t_fct[count_fct].rownum = yylineno;
        }

        // daca nu exista fct cu aceeasi denumire si aceiasi parametri
        if (fct_found(idd) == false)
        {
                // verific tipul functiei si return
                if (strstr(t_fct[count_fct].type, "void") != NULL && strlen(t_fct[count_fct].ret) >= 1)
                {
                        char s[200];
                        sprintf(s, "Functia void nu trebuie sa aiba return");
                        yyerror(s);
                        exit(0);
                }

                else if (strstr(t_fct[count_fct].type, "void") == NULL && strlen(t_fct[count_fct].ret) < 1)
                {
                        char s[200];
                        sprintf(s, "Functia trebuie sa aiba return");
                        yyerror(s);
                        exit(0);
                }
                else if (strlen(rett) >= 1)
                {
                        // tipul variabilei din return
                        char s[50];
                        int i, j, este_param = 0;
                        strcpy(s, search_var(rett));

                        if (strstr(s, "none") != NULL) // daca nu e variabila din tabel
                        {
                                // verific daca este printre parametrii
                                for (i = 0; i <= count_fct; i++)
                                {
                                        for (j = 0; j <= t_fct[j].nr_param; j++)
                                        {
                                                if (strcmp(t_fct[j].param_fct[j].name, rett) == 0)
                                                {
                                                        este_param = 1;
                                                }
                                        }
                                }
                                if (este_param == 0)
                                { // daca nu e nici parametru
                                        // verific daca e de tip numar int, float, string, bool
                                        char type_expr[20];
                                        if (strstr(rett, ".") != NULL && strstr(rett, "\"") == NULL)
                                        {
                                                strcpy(type_expr, "float");
                                        }
                                        else if ((strstr(rett, "true") != NULL || strstr(rett, "false") != NULL) && strstr(rett, "\"") == NULL)
                                        {
                                                strcpy(type_expr, "bool");
                                        }
                                        else if (strstr(rett, "\"") != NULL)
                                        {
                                                strcpy(type_expr, "string char");
                                        }
                                        else
                                        {
                                                strcpy(type_expr, "int");
                                        }
                                        if (strstr(type_expr, typ) == NULL)
                                        {
                                                char s[200];
                                                sprintf(s, "Returnul <%s> nu este de tipul: <%s>", rett, typ);
                                                yyerror(s);
                                                exit(0);
                                        }
                                }
                        }
                        else
                        {
                                char type_param[20];
                                for (i = 0; i <= count_fct; i++)
                                {
                                        for (j = 0; j <= t_fct[j].nr_param; j++)
                                        {
                                                if (strcmp(t_fct[j].param_fct[j].name, rett) == 0)
                                                {
                                                        strcpy(type_param, t_fct[j].param_fct[j].type); // am copiat tipul parametrului
                                                }
                                        }
                                        if (strstr(typ, type_param) == NULL)
                                        {
                                                char s[200];
                                                sprintf(s, "Variabila <%s> nu este de tip %s", rett, typ);
                                                yyerror(s);
                                                exit(0);
                                        }
                                }
                        }
                }

                count_fct++;
        }
        else
        {
                char s[200];
                sprintf(s, "Functia <%s> este deja declarata la linia %d", idd, var_used);
                yyerror(s);
                exit(0);
        }
}

// FUNCTIE PENTRU TABEL

void print_table(int errors)
{
        FILE *fp;
        if (errors == 0)
        {
                fp = fopen("symbol_table.txt", "w+");
                fprintf(fp, "\n\n");
                fprintf(fp, "SYMBOL TABLE  VARIABLES                                                   \n");
                fprintf(fp, "--------------------------------------------------------------------------\n");
                fprintf(fp, "TYPE -> NAME -> VALUE -> LINE NO             \n");
                fprintf(fp, "--------------------------------------------------------------------------\n");
                int i, max = 0;

                for (i = 0; i < count; i++)
                {
                        fprintf(fp, "%s -> %s -> %s -> %d\n", table[i].type, table[i].name, table[i].value, table[i].line_number);
                        fprintf(fp, "--------------------------------------------------------------------------\n");
                }
                fclose(fp);
                fp = fopen("symbol_function_table.txt", "w+");
                fprintf(fp, "SYMBOL TABLE  FUNCTIONS                                     \n");
                fprintf(fp, "----------------------------------------------------------------------\n");
                fprintf(fp, "LINE NO -> TYPE-> NAME -> RETURN -> PARAM                          \n");
                fprintf(fp, "----------------------------------------------------------------------\n");
                int j;

                for (j = 0; j < count_fct; j++)
                {
                        fprintf(fp, "%d -> %s -> %s -> %s ", t_fct[j].rownum, t_fct[j].type, t_fct[j].name, t_fct[j].ret);
                        int k = 0;
                        for (k = 0; k < t_fct[j].nr_param; k++)
                        {
                                fprintf(fp, "(%s %s) ", t_fct[j].param_fct[k].type, t_fct[j].param_fct[k].name);
                        }
                        fprintf(fp, "\n");
                        fprintf(fp, "----------------------------------------------------------------------\n");
                }
                fclose(fp);
        }
}

#endif