#include <stdio.h>
#include <string.h>

float fct()
{

    float x = 2.0;
    float y = 3.5;
    if (5 > x)
    {
        return x+y;
    }
    else return 0;
}

void fct(){

}
int main()
{
    char x[20] = "cf";
    if(strcmp("cf", x) == 0){
        printf("what\n");
    }
    else{
    float x = fct();
    printf("%f", x);}
}

// int c = 0;