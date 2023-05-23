#include <stdio.h>

int main() {
    float n, soma = 0;

    printf("Digite um numero (0 para sair): ");
    scanf("%f", &n);

    while (n != 0) {
        soma += n;
        printf("Digite um numero (0 para sair): ");
        scanf("%f", &n);
    }

    printf("Resultado: %f\n", soma);
    return 0;
}
