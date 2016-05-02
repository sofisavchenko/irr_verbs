#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include"stok.c"
#include"process.c"

double scanning()
{
    int j; double calc = 0.0;
    char* ptr[261] = {0};
    FILE *pFile;
    char line[1024] = "";
    pFile = fopen("IRR_V.txt", "r");
    for (j = 0; j < 10; j++)
    {
        fgets(line, 1024, pFile);
        stok(line, ' ', ptr);
       // printf("\n");
        printf(" %d \n", j + 1);
        printf("\n Первая форма неправильного глагола: %s \n", ptr[0]);
        calc += process(ptr, calc);
    }
    fclose(pFile);
    return calc /*/ 10*/;
}
