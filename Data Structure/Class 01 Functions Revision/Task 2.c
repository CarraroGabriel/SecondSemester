// Exerc�cio 2
// Fa�a uma fun��o que recebe por par�metro o raio de um c�rculo e calcule e retorne a per�metro do c�rculo.

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
