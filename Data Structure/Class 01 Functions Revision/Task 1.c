// Exercício 1
// Faça uma função que recebe por parâmetro o raio de um círculo e calcule e retorne a área do círculo.


#include <stdio.h>

void valor (int *area,  int R) {
  	*area = (R*R) * 3.14;
}

int main () {
	int R, resultado;
	
	printf("Digite o valor do raio do circulo: ");
	scanf("%d", &R);
	
	valor (&resultado, R);
	printf("A area do circulo de raio %d sera de: %d ", R, resultado);
}
