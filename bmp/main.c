#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
int main(int argc,char *argv[ ])
{
    FILE *soubor;
    BITMAPFILEHEADER hlavicka;
    BITMAPINFOHEADER hlavicka_info;
    soubor=fopen(argv[1],"r");
    if(soubor==NULL)
    {
        printf("Wrong input");
        return(0);
    }
    fread(&hlavicka, sizeof(hlavicka), 1, soubor);
    fread(&hlavicka_info, sizeof(hlavicka_info), 1, soubor);
    printf("Bits per color: %d\n",hlavicka_info.biBitCount);
    printf("Image dimensions: %ld x %ld",hlavicka_info.biWidth,hlavicka_info.biHeight);

    return 0;
}
