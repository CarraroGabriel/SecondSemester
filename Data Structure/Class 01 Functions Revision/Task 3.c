// Exercício 3
// Faça uma função que recebe a idade de uma pessoa em anos, meses e dias e retorna essa idade expressa em dias.

#include <stdio.h>

int idadeDias (int anos, int meses, int dias) {
	
	int resultado;
	
	resultado = anos * 365 + meses * 30 + dias;
	
	return resultado;
}

int main () {
	int anos, meses, dias, resultado;
	
	printf("Digite sua idade: ");
	scanf("%d", &anos);
	
	printf("Digite a quantidade de meses: ");
	scanf("%d", &meses);
	
	printf("Digite a quantidade de dias: ");
	scanf("%d", &anos);
	
	printf("Idade em dias: %d", idadeDias(anos, meses, dias));
}
