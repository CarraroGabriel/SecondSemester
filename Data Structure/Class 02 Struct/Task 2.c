#include <stdio.h>

struct pessoa {
	char nome[100];
	int idade;
	float altura;
};

int main () {
	
	struct pessoa uma_pessoa;
	
	printf("Digite seu nome, idade e altura: \n");
	scanf("%s %d %f", uma_pessoa.nome, &uma_pessoa.idade, &uma_pessoa.altura);
	
	printf("\nOs dados inseridos foram: %s de %d anos e %.2f kg \n", uma_pessoa.nome, uma_pessoa.idade, uma_pessoa.altura);
	
	return 0;
}
