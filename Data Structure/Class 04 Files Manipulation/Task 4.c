// Exercício 4
// Faça um programa que receba do usuário um arquivo texto e um caracter. Mostre na tela quantas vezes aquele caractere ocorre dentro do arquivo

#include <stdio.h>
#include <string.h>
#define tam 30


int main() {
    char nomeArq[tam];
    char procura;
    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArq);

    printf("Digite o caractere que deseja procurar: ");
    scanf(" %c", &procura);

    FILE *arq;
    arq = fopen(nomeArq, "r");

    if (arq == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 0;
    }

    int ocorrencia = 0;
    char carac;

    while ((carac = fgetc(arq)) != EOF) {
        if (carac == procura) {
            ocorrencia++;
        }
    }

    fclose(arq);

    printf("O caractere '%c'ocorre %d vezes no arquivo.\n", procura, ocorrencia);

    return 0;
}

