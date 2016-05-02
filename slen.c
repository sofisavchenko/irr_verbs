#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int slen(char str[])
{
    int len, i = 0;
    while(str[i] != '\0') i++;
    len = i;
    return len;
}
