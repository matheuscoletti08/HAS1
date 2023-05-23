#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	int n1, n2, v;
	v=1;
	
	printf("digite um numero: ");
	scanf(" %d", &n1);
	
	n2 = n1;

	while(v<=9){
		n1=n1+n2;
		v++;
		printf("\n %d", n1);

		}
		return 0;
}
		

