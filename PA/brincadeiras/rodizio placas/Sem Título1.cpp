#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>

int main (){
	int n, numplaca
		
		printf("Insira o n�mero da placa do carro: ");
			cin >> numplaca;
		scan("%d",&n);
		
		int ultimoDigito = numeroPlaca % 10;
		if (ultimoDigito == 1 || ultimoDigito == 2) {
    printf("O dia de rod�zio � segunda-feira.")endl;
} else if (ultimoDigito == 3 || ultimoDigito == 4) {
    printf("O dia de rod�zio � ter�a-feira.") endl;
} else if (ultimoDigito == 5 || ultimoDigito == 6) {
    printf("O dia de rod�zio � quarta-feira.") endl;
} else if (ultimoDigito == 7 || ultimoDigito == 8) {
    printf("O dia de rod�zio � quinta-feira.") endl;
} else if (ultimoDigito == 9 || ultimoDigito == 0) {
    printf("O dia de rod�zio � sexta-feira.") endl;
} else {
    cout << "N�mero de placa inv�lido." << endl;
}
}


