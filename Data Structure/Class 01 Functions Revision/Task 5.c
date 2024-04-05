// Exercício 5
// Faça uma função que lê 50 valores inteiros e retorna o maior deles.

#include <stdio.h>
#define tam 50

int maior_num(int array[], int tamanho) {
	int maior = array[0];
	for (int i = 0; i < tamanho; i++) {
		if (array[i] > maior) {
			maior = array[i];
		}
	}
	return maior;
}

int main() {

    int num[tam];
    for (int i = 0; i < tam; i++) {
    		printf("Digite o numero %i: ", i+1);
    		scanf("%i", &num[i]);
		}
	int maior = maior_num(num, tam);
	printf("O maior valor digitado foi: %i\n", maior);
    return 0;
}
