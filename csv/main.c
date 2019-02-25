#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[ ])
{



    FILE *soubor;
    soubor= fopen(argv[1],"r");

    if(soubor==NULL)//neotevreny soubor
    {printf("wrong input");
        return(0);
    }
    char text[100];
    int radek=0;
    while(radek<atoi(argv[2]))//vypis radku do doby urcene vstupnim argumentem
   {
    if(fgets(text, 100, soubor)==NULL)//kontrola konce souboru
    {
    printf("\n\nFile ends\n\n");
    return(0);
    }

    int i=0;
    while(text[i]!='\0')//vypis CSV souboru
    {
        if(text[i]==*argv[3])//oddeleni sloupcu
        {
            printf("   ");
        }
        else
        {
          printf("%c",text[i]);
        }
        if(text[i]=='\n')
        {
            radek++;
        }
        i++;
    }

   }

    return 0;
}
