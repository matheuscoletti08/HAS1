#include <stdio.h>
int main() {
    int placa;
    int ultimo_digito;
    char* dia_rodizio;

    printf("Digite os 4 dígitos da placa do carro: ");
    scanf("%d", &placa);

    ultimo_digito = placa % 10;

    if (ultimo_digito == 1 || ultimo_digito == 2) {
        dia_rodizio = "segunda-feira";
    } else if (ultimo_digito == 3 || ultimo_digito == 4) {
        dia_rodizio = "terça-feira";
    } else if (ultimo_digito == 5 || ultimo_digito == 6) {
        dia_rodizio = "quarta-feira";
    } else if (ultimo_digito == 7 || ultimo_digito == 8) {
        dia_rodizio = "quinta-feira";
    } else if (ultimo_digito == 9 || ultimo_digito == 0) {
        dia_rodizio = "sexta-feira";
    } else {
        dia_rodizio = "dia inválido";
    }

    printf("Último dígito: %d\n", ultimo_digito);
    printf("Dia do rodízio: %s\n", dia_rodizio);

    return 0;
}
