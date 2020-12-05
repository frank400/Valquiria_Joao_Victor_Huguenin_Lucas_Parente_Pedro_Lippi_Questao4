#include "gira_matrix.h"

void gira_sentido_horario(char grade[size][size])
{
	printf("Rotacao anti-horaria\n");
	for (int x=0;x<size;x=x+1)
    {
        for (int y=size-1;y>0;y--)
    	{
    		printf("%c",grade[y][x]);
		}
		printf("\n");
	}
}
