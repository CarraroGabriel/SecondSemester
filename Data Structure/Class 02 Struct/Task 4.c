#include <stdio.h>
#define MAX 5

struct pessoa {
	char nome[100];
	int idade;
	float altura;
};


float media_idade (struct pessoa pessoas[]) {
	float soma = 0;
	int i;
	
	for (i = 0; i < MAX; i++){
		soma += pessoas[i].idade;
	}
	
	return soma/MAX;
}

int main () {

struct pessoa pessoas[MAX];

int i;

for ( i = 0; i < MAX; i++) {
	scanf("%s", pessoas[i].nome);
	scanf("%d", &pessoas[i].idade);
	scanf("%f", &pessoas[i].altura);
}

float media = media_idade(pessoas);
printf("\nA media das idades eh: %.2f \n", media);

return 0;
}
