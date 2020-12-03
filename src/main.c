#include "gira_matrix.h"

void get_pedido(char *pedido,int tamanho){

	printf("Para girar a imagem no sentido horario, digite R1\n");
	printf("Para girar a imagem no sentido anti-horario, digite R2\n");
	printf("Para espelhar a imagem verticalmente, digite EV\n");
	printf("Para espelhar a imagem horizontalmente, digite EH\n");

	fgets(pedido,tamanho,stdin);
}
void get_strings(int size_matrix, char grade[][size_matrix]){
    for (int x=0;x<size_matrix;x++)
    {
    	fgets(grade[x],size_matrix+2,stdin);
	}
}

int main()
{
    char grade[size][size];

    printf("Digite o desenho que deseja modificar:\n");
	get_strings(size,grade);
	
	char pedido[15];
	get_pedido(pedido,15);

	if (strcmp(pedido,"R1"))
	{
		for (int x=22;x>=0;x--)
		{
			for (int y=0;y<strlen(grade[x]);y++)
			{
				printf("%c",grade[x][y]);
			}
			//printf("\n");
		}
	}

	// for (int x=0;x<23;x=x+1)
    // {
    // 	for (int y=0;y<strlen(grade[x]);y=y+1)
    // 	{
    // 		printf("%c",grade[x][y]);
	// 	}
	// 	printf("\n");
	// }
	// printf("Rotacao horaria\n");
	
	// printf("Rotacao anti-horaria\n");
	// for (int x=23;x>0;x--)
    // {
    // 	for (int y=0;y<strlen(grade[x]);y++)
    // 	{
    // 		printf("%c",grade[y][x]);
	// 	}
	// 	printf("\n");
	// }
	// printf("Espelhamento vertical\n");
	// for (int x=23;x>0;x=x-1)
    // {
    // 	for (int y=0;y<strlen(grade[x]);y=y+1)
    // 	{
    // 		printf("%c",grade[x][y]);
	// 	}
	// 	printf("\n");
	// }
	
	return 0;
}

