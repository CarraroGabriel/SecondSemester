// Exercício 6
// Faça uma função que receba por parâmetro dois valores X e Z. Calcule e retorne o resultado de XZ para o programa principal. Atenção não utilize nenhuma função pronta de exponenciação.

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
