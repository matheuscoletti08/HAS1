#include<stdio.h>
int main(){
	float km, qp, l;
//leitura
	printf("Digite o Quilometro: ");
	scanf("%f", &km);
	printf("Digite o Litro:" );
	scanf("%f",&l);
	qp = km/l;
	printf("O valor percorrido e: %f", qp);
}
