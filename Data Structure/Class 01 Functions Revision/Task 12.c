// Exercício 12
// Escreva uma função recursiva em C para calcular a potência de um número inteiro positivo

#include <stdio.h>
#include <math.h>

int calc_pow(int base, int potencia) {
    if (potencia == 0) {
        return 1;
    } else {
        return base * pow(base, potencia - 1);
    }
}

int main() {
    int b, pot;

    printf("Digite a base: ");
    scanf("%d", &b);
    printf("Digite a potencia (positivo): ");
    scanf("%d", &pot);

    if (expoente < 0) {
        printf("A potencia deve ser positiva.\n");
    } else {
        int resultado = pow(b, pot);
        printf("%d elevado a %d = %d\n", b, pot, resultado);
    }

    return 0;
}

