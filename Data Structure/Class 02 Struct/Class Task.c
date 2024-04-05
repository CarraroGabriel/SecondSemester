#include <stdio.h>

struct futsal {
	char nome[100];
	int idade;
	char posicao[30];
	int numero_camisa;
};

int main () {
	
	struct futsal time;
	
	printf("Digite o nome do atleta: \n");
	scanf("%s", time.nome);
	
	printf("\nDigite a idade do atleta: \n");
	scanf("%d", &time.idade);
	
	printf("\nDigite a posicao do atleta: \n");
	scanf("%s", time.posicao);
	
	printf("\nDigite o numero da camisa do atleta: \n");
	scanf("%d", &time.numero_camisa);
	

	printf("\nO atleta %s de %d anos atua na posicao de %s com a camisa %d", time.nome, time.idade, time.posicao, time.numero_camisa);

	return 0;	
}
