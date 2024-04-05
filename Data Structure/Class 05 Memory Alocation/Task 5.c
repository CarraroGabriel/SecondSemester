#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int *ptr5, tam = 15, i;
	
	ptr5 = (int *)calloc(tam, sizeof(int));
	
	if(ptr5 == NULL)
	{
		printf ("Erro: Memoria Insuficiente\n");
		exit(1);
	}
	

	for (i=0; i<tam ; i++){ 
		printf("Digite os valores para o vetor na posicao %i: \n", i);
		scanf("%i", &ptr5[i]);
	}	
	
	
	for (i=0; i<tam ; i++){
		printf("A posicao %d tem o valor %d\n", i, ptr5[i]);
	}
	
	free(ptr5);
	ptr5 = NULL;
}
