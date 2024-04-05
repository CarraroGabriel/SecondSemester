// Exercício 2
// Faça um programa que receba do usuário um arquivo texto e mostre na tela quantas linhas esse arquivo possui.

#include <stdio.h>
#include <string.h>
#define tam 30

int main() {
    char nomeArq[tam];
    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArq);

    FILE *arq;
    arq = fopen(nomeArq, "r");

    if (arq == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 0;
    }

    int contLinhas = 0;
    char carac;

    while ((carac = fgetc(arq)) != EOF) {
        if (carac == '\n') {
            contLinhas++;
        }
    }

    fclose(arq);

    printf("O arquivo apresenta %d linhas.\n", contLinhas);

    return 0;
}

