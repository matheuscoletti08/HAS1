#include <stdio.h>
#include <stdlib.h>
	int main(){
		float altura_muro, largura_muro, area_muro, preco_mao_de_obra, preco_blocos, preco_afins, preco_total;
		float qtd_blocos;
		float valor_mao_de_obra;
		printf("digite a altura do muro em metros:");
		scanf("%f",&altura_muro);
		printf("digite a largura do muro em metros:");
		scanf("%f",&largura_muro);
		printf("digite o valor cobrado pelo pedreiro em metro quadrado:");
		scanf("%f",&preco_mao_de_obra );
		printf("valor da mao de obra:R$ %.2f\n",preco_mao_de_obra);
		return 0;
		
	}
