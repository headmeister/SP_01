#include <stdio.h>
#include <stdlib.h>

int factorial(int cislo)
{
    if(cislo>1)
    cislo=cislo*factorial(cislo-1);
    return(cislo);
}


int main(int argc,char *argv[ ])
{    char *b;
    long cislo=strtol(argv[1],&b,10);
    if(b=='\0')
    {


    int a=factorial(cislo);
    printf("Result of %d! is %d",cislo,a);
    return(0);
    }
    else
    {
        printf("Wrong input");
        return(0);
    }
}
