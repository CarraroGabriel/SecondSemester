#include <stdio.h>

int main () {
	
	int vet[6], i;
	int *ptr;
	
	for (i = 0;i < 5;i++){
		printf("Digite um valor: \n");
		scanf("%d",&vet[i]);
}

	ptr = &vet[0];
	printf("\nDobro do primeiro valor: %d \n", *ptr * 2);
	
	ptr += 1;
	printf("\nDobro do segundo valor: %d \n", *ptr * 2);
	
	ptr +=1;
	printf("\nDobro do terceiro valor: %d \n", *ptr * 2);
	
	ptr += 1;
	printf("\nDobro do quarto valor: %d \n", *ptr * 2);
	
	ptr += 1;
	printf("\nDobro do quinto valor: %d \n", *ptr * 2);
}
