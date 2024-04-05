#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int *ptr2, tam, i;
		
	printf("Digite um valor para o tamanho da alocacao: \n");
	scanf("%d", &tam);
	
	ptr2 = (int *)calloc(tam, sizeof(int));
	
	if(ptr2 == NULL)
	{
		printf ("Erro: Memoria Insuficiente\n");
		exit(1);
	}
	
	for (i=0; i<tam ; i++){ 
		printf("Digite os valores para o vetor na posicao %i: \n", i);
		scanf("%i", &ptr2 [i]);
	}	
	
	
	for (i=0; i<tam ; i++){
		printf("A posicao %d tem o valor %d\n", i, ptr2[i]);
	}
}
