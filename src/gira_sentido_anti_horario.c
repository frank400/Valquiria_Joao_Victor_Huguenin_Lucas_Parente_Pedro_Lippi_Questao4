#include "gira_matrix.h"

void gira_sentindio_anti_horario(char grade[size][size])
{
	printf("Rotacao anti-horaria\n");
	for (int x=23;x>0;x--)
    {
     	for (int y=0;y<strlen(grade[x]);y++)
     	{
     		printf("%c",grade[y][x]);
	 	}
	 	printf("\n");
	}
}
