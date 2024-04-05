// Exercício 3
// Faça um programa que receba do usuário um arquivo texto e mostre na tela quantas letras são vogais.

#include <stdio.h>
#include <string.h>
#define tam 30
#include <ctype.h>

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

    int contVogais = 0;
    char carac;

    while ((carac = fgetc(arq)) != EOF) {
        carac = tolower(carac); 
        if (carac == 'a' || carac == 'e' || carac == 'i' || carac == 'o' || carac == 'u') {
            contVogais++;
        }
    }

    fclose(arq);

    printf("O arquivo possui %d letras vogais.\n", contVogais);

    return 0;
}

