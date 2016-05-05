#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include "scanning.h"
#include "complete_ten_words.h"

int main()
{
   	setlocale(LC_ALL, "Russian");
    double r = 0.0, proc = 0.0;
    r = scanning();
    printf("\n %.1f %% \n", r);
    proc = complete_ten_words(r);
    printf("\n %.1f %% \n", proc);
    return 0;
}
