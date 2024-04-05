#include <stdio.h>
#include <stdlib.h>

int main () {
	
	float *ptr3;
	
	int tam = 1;
	
	ptr3 = (float *)calloc(tam, sizeof(float));

	if(ptr3 == NULL)
	{
		printf ("Erro: Memoria Insuficiente\n");
		exit(1);
	}
	
	*ptr3 = 5.40;
	
	for (int i=0; i<tam ; i++){ //Imprimindo os valores armazenados no vetor
	printf("o vetor tem o valor %f\n", i, ptr3[i]);
	}
	
	printf("\nA posicao alocada eh: %p\n\n", ptr3);
}
