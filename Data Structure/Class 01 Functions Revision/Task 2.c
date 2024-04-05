// Exercício 2
// Faça uma função que recebe por parâmetro o raio de um círculo e calcule e retorne a perímetro do círculo.

#include <stdio.h>

void valor (float *perimetro, float R) {
	*perimetro = (2*3.14) * R;
}

int main () {
	float resultado, R;
	
	printf ("Digite o valor do raio do circulo: ");
	scanf ("%f", &R);
	
	valor (&resultado, R);
	printf("O perimetro do circulo de raio %.2f eh: %.2f", R, resultado);
}
