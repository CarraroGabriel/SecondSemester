// Exercício 4
// Faça uma função que receba um valor inteiro e positivo e calcula o seu fatorial. Ao final da função o resultado deve ser impresso na tela

#include <stdio.h>

int potencia (int x, int z) {
	int resultado = 1;
	int i;
	
	for (i = 0; i < z; i++) {
		resultado = resultado * x;
	}
	
	return resultado;
}

int main () {
	int x, z, resultado;
	
	scanf("%d", &x);
	scanf("%d", &z);
	
	resultado = potencia(x, z);
	
	printf("Potencia dos valores: ", resultado);
}
