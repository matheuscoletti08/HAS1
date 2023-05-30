#include <stdio.h>

int main() {
	float n1, n2, n3, n4, n5, valor;
	
	printf("Digite um numero: ");
	scanf("%f", &n1);
		printf("Digite um numero: ");
	scanf("%f", &n2);
		printf("Digite um numero: ");
	scanf("%f", &n3);
		printf("Digite um numero: ");
	scanf("%f", &n4);
		printf("Digite um numero: ");
	scanf("%f", &n5);
	
	valor = n1 + n2 + n3 + n4 + n5;
	printf("%.0f", valor);
}
