#include <stdio.h>
#include <stdlib.h>
int main () { 
    float preco, qmd, ano, resp, final;
    printf("digite o preco do cigarro: ");
    scanf ("%f" , &preco);
   	printf("qnts macos de cigarro por dia: " );
   	scanf("%f" , &qmd);
   	printf("digite a idade: ");
   	scanf("%f" , &ano);
   	resp = preco * qmd;
   	final = resp * ano * 365;
   	printf("o gasto em cigarros foi de %f" , final);
}	
 

