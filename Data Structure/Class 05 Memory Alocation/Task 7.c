#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int **matriz;
	int i, j, linha, coluna;
	
	linha = 10;
	coluna = 5;
	
	matriz = (int **)malloc(linha*sizeof (int *));
	
	for (i=0; i<linha; i++) {
		matriz[i] = (int *)malloc(coluna*sizeof (int));
	}
	
	for (i=0; i<linha; i++) {
		for (j=0; j<coluna; j++) {
			matriz[i][j] = i + j;
			printf("O valor da posicao %d %d eh: %d\n", i, j, matriz[i][j]);
		}
	}
}
