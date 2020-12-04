#include "gira_matrix.h"

void gira_sentindio_horario(char grade[size][size])
{
	printf("Rotacao anti-horaria\n")
	for (int x=0;x<23;x=x+1)
    {
    	for (int y=0;y<strlen(grade[x]);y=y+1)
    	{
    		printf("%c",grade[x][y]);
		}
		printf("\n");
	}
}
