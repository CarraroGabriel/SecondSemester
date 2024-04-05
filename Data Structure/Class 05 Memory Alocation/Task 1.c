#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int *ptr1;
	
	ptr1 = (int *)malloc(sizeof(int));

	if(ptr1 == NULL)
	{
		printf ("Erro: Memoria Insuficiente\n");
		exit(1);
	}
	
	
	*ptr1 = 5;

	printf("\nA posicao alocada eh: %p\n\n", ptr1);

	printf("\nA posicao alocada recebeu o valor de: %d\n\n", *ptr1);
}
