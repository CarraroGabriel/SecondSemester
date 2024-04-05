#include <stdio.h>

int main () {
	int x = 2;
	float y = 2.2;
	char letra = 'G';
	
	int *ptr1;
	float *ptr2;
	char *ptr3;
	
	ptr1 = &x;
	ptr2 = &y;
	ptr3 = &letra;
	
	printf("Valor ponteiro 1 = %d \n", *ptr1);
	printf("\nValor ponteiro 2 = %.2f \n", *ptr2);
	printf("\nValor ponteiro 3 = %c \n", *ptr3);
	
	printf("\nValores dos Ponteiros Alterados:\n");
	
	*ptr1 += 2;
	*ptr2 *= 3.2;
	*ptr3 = 'A';
	
	printf("\nValor ponteiro 1 alterado = %d \n", *ptr1);
	printf("\nValor ponteiro 2 alterado = %.2f \n", *ptr2);
	printf("\nValor ponteiro 3 alterado = %c \n", *ptr3);
}
