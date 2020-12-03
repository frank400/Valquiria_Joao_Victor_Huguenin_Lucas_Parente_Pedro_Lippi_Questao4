#include "gira_matrix.h"

void espelha_horizontal(char grade[size][size])
{
    printf("Espelhamento horizontal\n");
	for (int x=0;x<23;x=x+1)
    {
    	for (int y=strlen(grade[x]);y>0;y=y-1)
    	{
    		printf("%c",grade[x][y]);
		}
		printf("\n");
	}
}
