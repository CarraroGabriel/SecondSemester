// Exercício 10
// Escreva uma função que receba 3 valores reais X, Y e Z e que verifique se esses valores podem ser os comprimentos dos lados de um triângulo e, neste caso,
// imprime qual o tipo de triângulo formado. 
// Para que X, Y e Z formem um triângulo énecessário que a seguinte propriedade seja satisfeita: 
// o comprimento de cada lado de um triângulo é menor do que a soma do comprimento dos outros dois lados. 
// A função deve identificar o tipo de triângulo formado observando as seguintes definições:
// a) Triângulo Equilátero: os comprimentos dos 3 lados são iguais.
// b) Triângulo Isósceles: os comprimentos de 2 lados são iguais.
// c) Triângulo Escaleno: os comprimentos dos 3 lados são diferentes. 

#include <stdio.h>
#include <locale.h>

void verificaTriang(float x, float y, float z) {
    if (x < y + z && y < x + z && z < x + y) {
        if (x == y && y == z) {
            printf("Triângulo Equilátero\n");
        } else if (x == y || y == z || z == x) {
            printf("Triângulo Isósceles\n");
        } else {
            printf("Triângulo Escaleno\n");
        }
    } else {
        printf("Os valores não formam um triângulo\n");
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");
	float x, y, z;

    printf("Digite os valores dos lados do triângulo:\n");
    printf("Lado X: ");
    scanf("%f", &x);
    printf("Lado Y: ");
    scanf("%f", &y);
    printf("Lado Z: ");
    scanf("%f", &z);

    verificaTriang(x, y, z);

    return 0;
}

