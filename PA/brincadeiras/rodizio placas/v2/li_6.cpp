#include <stdio.h>

int main() {
    char sinal;
    float valor1, valor2;
    float resultado;   

    printf("Digite o sinal (+, -, *, /): ");
    scanf("%c", &sinal);

    printf("Digite o valor 1: ");
    scanf("%f", &valor1);

    printf("Digite o valor 2: ");
    scanf("%f", &valor2);

    if (sinal == '+') {
        resultado = valor1 + valor2;
        printf("Resultado: %.2f\n", resultado);
    } else if (sinal == '-') {
        resultado = valor1 - valor2;
        printf("Resultado: %.2f\n", resultado);
    } else if (sinal == '*') {
        resultado = valor1 * valor2;
        printf("Resultado: %.2f\n", resultado);
    } else if (sinal == '/') {
        if (valor2 != 0) {
            resultado = valor1 / valor2;
            printf("Resultado: %.2f\n", resultado);
        } else {
            printf("Erro: divisão por zero!\n");
        }
    } else {
        printf("Sinal inválido!\n");
    }

    return 0;
} 
