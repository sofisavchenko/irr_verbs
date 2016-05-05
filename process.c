#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include "slen.h"

double process(char* ptr[], double calc)
{
    int i, lenusr[261] = {0}, lenverb[261] = {0}, n;
    double flg = 0.0; char userverb[1024] = "";
    for (i = 0; i < 2; i++)
    {
        printf("Äîïèøèòå %d-þ ôîðìó ãëàãîëà \n", i + 2);
        scanf("%s", userverb);
        lenusr[i] = slen(userverb);
        lenverb[i] = slen(ptr[i + 1]);
        if (lenusr[i] == lenverb[i])
        {
            for(n = 0; n < lenusr[i]; n++)
            {
                if(*ptr[i+1] == userverb[n]) flg += 1.0;
            }
            flg = flg / lenusr[i];
        }
        //printf("\n %.3f \n", flg);
    }
    calc += flg;
    return calc /*/ 2*/;
}
