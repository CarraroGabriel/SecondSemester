// Usando o arquivo de texto produzido no exercício anterior, faça um programa que leia esse arquivo e imprima na tela apenas as linhas pares do arquivo.

#include <stdio.h>
#define MAX 101

int main () {
	char string[MAX];
	FILE *arq;
	
	arq = fopen ("arquivoSlide.txt", "r");
	
	if(arq == NULL){
		printf("Erro ao abrir o arquivo\n");
		return 0;
	}
	
	while (fgets(string, sizeof(string), arq) != NULL) {
		
		
		
		printf("%s", string);
	}
}
