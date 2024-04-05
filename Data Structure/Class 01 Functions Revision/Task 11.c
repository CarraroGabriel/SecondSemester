// Exerc�cio 11
// Escreva uma fun��o recursiva em C para calcular a soma dos primeiros N n�meros naturais. A fun��o recebe como par�metro o valor de N.

#include <stdio.h>
#include <locale.h>

int soma_naturais(int n) {
	if (n == 0) {
		return 0;
	} else {
		return n + soma_naturais(n - 1);
	}
}

int main () {
	setlocale(LC_ALL,"Portuguese");

		int num;
		printf("Digite um n�mero que seja natural: ");
		scanf("%i", &num);
		
		printf("A soma dos primeiros %i n�meros naturais �: %i\n", num, soma_naturais(num));

	return 0;
}
