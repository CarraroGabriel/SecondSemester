#include <stdio.h>

int main () {
	int a, b;
	int *ptr1, *ptr2;
	
	ptr1 = &a;
	ptr2 = &b;
	
	printf("Endereco ponteiro 1: %p \n", ptr1);
	printf("\nEndereco ponteiro 2: %p \n", ptr2);
	
	if (ptr1 > ptr2) {
		printf("\nO endereco do ponteiro 1 eh maior");
	} else {
		printf("\nO endereco do ponteiro 2 eh maior");
	}
}
