// Exerc�cio 10
// Escreva uma fun��o que receba 3 valores reais X, Y e Z e que verifique se esses valores podem ser os comprimentos dos lados de um tri�ngulo e, neste caso,
// imprime qual o tipo de tri�ngulo formado. 
// Para que X, Y e Z formem um tri�ngulo �necess�rio que a seguinte propriedade seja satisfeita: 
// o comprimento de cada lado de um tri�ngulo � menor do que a soma do comprimento dos outros dois lados. 
// A fun��o deve identificar o tipo de tri�ngulo formado observando as seguintes defini��es:
// a) Tri�ngulo Equil�tero: os comprimentos dos 3 lados s�o iguais.
// b) Tri�ngulo Is�sceles: os comprimentos de 2 lados s�o iguais.
// c) Tri�ngulo Escaleno: os comprimentos dos 3 lados s�o diferentes. 

#include <stdio.h>
#include <locale.h>

void verificaTriang(float x, float y, float z) {
    if (x < y + z && y < x + z && z < x + y) {
        if (x == y && y == z) {
            printf("Tri�ngulo Equil�tero\n");
        } else if (x == y || y == z || z == x) {
            printf("Tri�ngulo Is�sceles\n");
        } else {
            printf("Tri�ngulo Escaleno\n");
        }
    } else {
        printf("Os valores n�o formam um tri�ngulo\n");
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");
	float x, y, z;

    printf("Digite os valores dos lados do tri�ngulo:\n");
    printf("Lado X: ");
    scanf("%f", &x);
    printf("Lado Y: ");
    scanf("%f", &y);
    printf("Lado Z: ");
    scanf("%f", &z);

    verificaTriang(x, y, z);

    return 0;
}

