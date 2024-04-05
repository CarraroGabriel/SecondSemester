// Exercício 9
// Faça uma função que receba um vetor de inteiros e o número de elementos desse vetor e calcule e retorne a soma de todos os elementos.

#include <stdio.h>

int calcSoma(int vet[], int tam) {
	int soma = 0;

    for (int i = 0; i < tam; i++) {
        soma += vet[i];
    }

    return soma;
}

int main() {
	
    int tam;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);

    int vet[tam];

    printf("Digite os valores do vetor:\n");
    for (int i = 0; i < tam; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vet[i]);
    }

    int resultado = calcSoma(vet, tam);
    printf("A soma dos valores do vetor é: %d\n", resultado);

    return 0;
}

