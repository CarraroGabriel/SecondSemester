// Exerc�cio 6
// Fa�a uma fun��o que receba por par�metro dois valores X e Z. Calcule e retorne o resultado de XZ para o programa principal. Aten��o n�o utilize nenhuma fun��o pronta de exponencia��o.

#include <stdio.h>
#include <math.h>

double pow(double x, double z) {
	double resultado = 1; 
	
	for(int i = 0; i < z; i++)
		resultado *= x;
	
	return resultado;	
}

int main() {
  double resultado = pow(2, 3); 
  printf("%.2lf", resultado);
}
