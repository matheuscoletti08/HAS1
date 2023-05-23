#include <stdio.h>
	int main() { 
		float km,litros,km_por_litro;
		
	printf("digite a quilometragem percorrida:");
	scanf("%f",&km);
	printf("digite a quantidade de litros gastos:");
	scanf("%f",&litros);
	km_por_litro = km / litros;
	printf("o carro percorreu %.2f km/l.\n",km_por_litro);

	}

