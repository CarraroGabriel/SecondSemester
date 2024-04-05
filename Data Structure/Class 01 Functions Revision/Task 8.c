// Exerc�cio 8
// Escreva uma fun��o que recebe as 3 notas de um aluno por par�metro e uma letra. 
// Se a letra for A o procedimento calcula a m�dia aritm�tica das notas do aluno e se for P, a sua m�dia ponderada (pesos: 5, 3 e 2).

#include <stdio.h>
#include <string.h>
#include <locale.h>

float calc_media(float n1, float n2, float n3, char caract) {
	float calcA, calcP;
	if (caract == 'A') {
		calcA = (n1 + n2 + n3) / 3;
		printf("Resultado da m�dia A: %.2f", calcA);
	} else if (caract == 'P') {
		calcP = ((n1 * 5) + (n2 * 3) + (n3 * 2)) / 10;
		printf("Resultado da m�dia P: %.2f", calcP);
	}
	return 0;
}

int main () {
	setlocale(LC_ALL,"Portuguese");
	char a;
	float nota1, nota2, nota3;
		
		printf("Digite as notas do aluno: \n");
		scanf("Nota 1: %f", &nota1);
		scanf("Nota 2: %f", &nota2);
		scanf("Nota 3: %f", &nota3);
		
		printf("Selecione o tipo de m�dia: (A (Aritm�tica) ou P (Ponderada)): ");
		scanf("%s", &a);
		
		calc_media(nota1, nota2, nota3, a);

	return 0;
}
