#include <stdio.h>
#include "funcoes_matrix.h"

void get_strings(char grade[size][size]){
    for (int x=0;x<size;x++)
    {
        fgets(grade[x],size+2,stdin);
    }
}