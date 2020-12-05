#include "gira_matrix.h"

void gira_sentido_anti_horario(char grade[size][size])
{
	printf("Rotacao anti-horaria\n");
	for (int x=size-1;x>0;x--)
    {
     	for (int y=0;y<size;y++)
     	{
     		printf("%c",grade[y][x]);
	 	}
	 	printf("\n");
	}
}
