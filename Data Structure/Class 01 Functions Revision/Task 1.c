// Exerc�cio 1
// Fa�a uma fun��o que recebe por par�metro o raio de um c�rculo e calcule e retorne a �rea do c�rculo.


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
