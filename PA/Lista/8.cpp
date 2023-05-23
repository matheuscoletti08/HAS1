#include<stdio.h>
	int main() {
		int n, multiplo,multi;
		printf("digite um numero: ");
		scanf("%d",&n);
		multiplo = n+5;
		multi = multiplo-multiplo%5;
		printf("o multiplo de 5 e:%d",multi);
	}
