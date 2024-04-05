// Exercício 1
// Faça um programa que crie um arquivo TEXTO em disco, com o nome “dados.txt”, e escreva neste arquivo em disco uma contagem que vá de 1 até 100, com um número em cada linha.

#include <stdio.h>

int main() {
    
    FILE *arq;
    arq = fopen("dados.txt", "w");

    if (arq == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 0;
    }

    for (int i = 1; i <= 100; i++) {
        fprintf(arq, "%d\n", i);
    }

    fclose(arq);

    printf("Arquivo criado com sucesso\n");

    return 0;
