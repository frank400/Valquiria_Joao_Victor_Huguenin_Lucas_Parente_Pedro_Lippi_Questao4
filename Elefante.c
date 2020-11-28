#include <stdio.h>

int main()
{
    char Grade[23][23];
    int x;
    int y;
    for (x=0;x<23;x=x+1)
    {
    	for (y=0;y<23;y=y+1)
    	{
    		Grade[x][y]=' ';
		}
	}
	Grade[5][3]='_';
	Grade[5][4]='_';
	Grade[5][5]='_';
	Grade[5][12]='_';
	Grade[5][13]='_';
	Grade[5][14]='_';
	Grade[6][2]='/';
	Grade[6][6]='\\';
	Grade[6][7]='_';
	Grade[6][8]='_';
	Grade[6][9]='_';
	Grade[6][10]='_';
	Grade[6][11]='/';
	Grade[6][15]='\\';
	Grade[7][1]='/';
	Grade[7][6]='/';
	Grade[7][8]='_';
	Grade[7][9]='_';
	Grade[7][11]='\\';
	Grade[7][16]='\\';
	Grade[15][5]='A';
	Grade[15][15]='B'; /* Desenho interminado. A e B sao apenas pontos de referencia. */
	char Pedido[2];
	printf("Para girar a imagem no sentido horario, digite R1\n");
	printf("Para girar a imagem no sentido anti-horario, digite R2\n");
	printf("Para espelhar a imagem verticalmente, digite EV\n");
	printf("Para espelhar a imagem horizontalmente, digite EH\n");
	scanf("%s",&Pedido);
	printf("%s\n",Pedido);
	if (Pedido=="R1")
	{
		printf("teste\n");
	}
	printf("Padrao\n");
	for (x=0;x<23;x=x+1)
    {
    	for (y=0;y<23;y=y+1)
    	{
    		printf("%c",Grade[x][y]);
		}
		printf("\n");
	}
	printf("Rotacao horaria\n");
	for (x=0;x<23;x=x+1)
    {
    	for (y=23;y>0;y=y-1)
    	{
    		printf("%c",Grade[y][x]);
		}
		printf("\n");
	}
	printf("Rotacao anti-horaria\n");
	for (x=23;x>0;x=x-1)
    {
    	for (y=0;y<23;y=y+1)
    	{
    		printf("%c",Grade[y][x]);
		}
		printf("\n");
	}
	printf("Espelhamento vertical\n");
	for (x=23;x>0;x=x-1)
    {
    	for (y=0;y<23;y=y+1)
    	{
    		printf("%c",Grade[x][y]);
		}
		printf("\n");
	}
	printf("Espelhamento horizontal\n");
	for (x=0;x<23;x=x+1)
    {
    	for (y=23;y>0;y=y-1)
    	{
    		printf("%c",Grade[x][y]);
		}
		printf("\n");
	}
	return 0;
}

