#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int schr(char* str, char ch)
{
    int i = 0, idx = -1;
    for(i = 0; (str[i] != '\0') && (str[i] != ch); i++);
        if(str[i] == ch)
            idx = i;
    return idx;
}
