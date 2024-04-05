#include <stdio.h>
#include <stdlib.h>

int main () {
	
	char *ptr4, letra = 'G';
	
	ptr4 = (char *)malloc(sizeof(char));

	if(ptr4 == NULL)
	{
		printf ("Erro: Memoria Insuficiente\n");
		exit(1);
	}
	
	
	*ptr4 = letra;

	printf("\nA posicao alocada eh: %p\n\n", ptr4);

	printf("\nA posicao alocada recebeu o valor de: %c\n\n", *ptr4);
	
}
