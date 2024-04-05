#include <stdio.h>

int main () {
	
	int vet[4] = {2, 4, 6, 8};
	int *ptr;
	
	ptr = &vet[0];
	printf("O primeiro valor do vetor eh: %d \n", *ptr);
	
	ptr += 1;
	printf("O segundo valor do vetor eh: %d \n", *ptr);
	
	ptr += 1;
	printf("O terceiro valor do vetor eh: %d \n", *ptr);
	
	ptr +=1; 
	printf("O quarto valor do vetor eh: %d \n", *ptr);
}
