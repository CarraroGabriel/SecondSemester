// Exercício 11
// Escreva uma função recursiva em C para calcular a soma dos primeiros N números naturais. A função recebe como parâmetro o valor de N.

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
		printf("Digite um número que seja natural: ");
		scanf("%i", &num);
		
		printf("A soma dos primeiros %i números naturais é: %i\n", num, soma_naturais(num));

	return 0;
}
