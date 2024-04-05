#include <stdio.h>

struct pessoa {
	char nome[100];
	int idade;
	float altura;
};

void pessoa_parametro (int *idade) {
  	*idade = 22;
}

int main () {
	
	int idade;
	
	struct pessoa uma_pessoa;
	
	pessoa_parametro (&idade);
	printf("A idade de Gabriel eh de %d ", idade);
	
	return 0;
}
