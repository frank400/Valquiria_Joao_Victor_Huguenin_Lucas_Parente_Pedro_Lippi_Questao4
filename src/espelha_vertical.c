#include "gira_matrix.h"

void espelha_vertical(char grade[size][size]){
    for (int x=22;x>=0;x--)
    {
        for (int y=0;y<23;y++)
        {
            printf("%c",grade[x][y]);
        }
        printf("\n");
    }
}