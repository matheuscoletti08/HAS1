#include<stdio.h>

int main (){
	float n, dinheiropix, credito, debito; 
		printf("digite o valor ");
		scanf ("%f" ,&n);
			debito = n * 1.00;
			credito = n * 1.01;
			dinheiropix = n * 0.95;
		printf("Valor da compra: %.2f \n Valor do debito: %.2f \n Valor no credito: %.2f \n Valor no PIX/dinheiro: %.2f", n, debito, credito, dinheiropix);
}
