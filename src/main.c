#include "gira_matrix.h"

void get_pedido(char *pedido,int tamanho){

	printf("Para girar a imagem no sentido horario, digite R1\n");
	printf("Para girar a imagem no sentido anti-horario, digite R2\n");
	printf("Para espelhar a imagem verticalmente, digite EV\n");
	printf("Para espelhar a imagem horizontalmente, digite EH\n");

	fgets(pedido,tamanho,stdin);
}
void seleciona_operacao(char pedido[15],char grade[size][size]){
    if (strcmp(pedido,"R1") == 10)
    {
        gira_sentido_horario(grade);
    }
    else if(strcmp(pedido,"R2")==10){
        gira_sentido_anti_horario(grade);
    }
    else if(strcmp(pedido,"EV")==10){
        espelha_vertical(grade);
    }else if(strcmp(pedido,"EH")==10){
        espelha_horizontal(grade);
    }
}
int main()
{
    char grade[size][size];

    printf("Digite o desenho que deseja modificar:\n");
	get_strings(size,grade);
	
	char pedido[15];
	get_pedido(pedido,15);
	seleciona_operacao(pedido,grade);
	
	return 0;
}

