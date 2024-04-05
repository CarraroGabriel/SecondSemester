// Exercício 13
// Crie uma função recursiva para calcular a soma 1 + 1/2 + 1/3 + … + 1/n, sendo n > 0.

#include <stdio.h>

double somaRec(int n) {
    if (n == 1) {
        return 1.0;
    } else {
        return (1.0 / n) + somaRec(n - 1);
    }
}

int main() {
    int num;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &num);

    double resultado = somaRec(num);
    printf("A soma da série é: %.2lf\n", resultado);
    
    return 0;
}


