#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>

int main (){
	int n, numplaca
		
		printf("Insira o número da placa do carro: ");
			cin >> numplaca;
		scan("%d",&n);
		
		int ultimoDigito = numeroPlaca % 10;
		if (ultimoDigito == 1 || ultimoDigito == 2) {
    printf("O dia de rodízio é segunda-feira.")endl;
} else if (ultimoDigito == 3 || ultimoDigito == 4) {
    printf("O dia de rodízio é terça-feira.") endl;
} else if (ultimoDigito == 5 || ultimoDigito == 6) {
    printf("O dia de rodízio é quarta-feira.") endl;
} else if (ultimoDigito == 7 || ultimoDigito == 8) {
    printf("O dia de rodízio é quinta-feira.") endl;
} else if (ultimoDigito == 9 || ultimoDigito == 0) {
    printf("O dia de rodízio é sexta-feira.") endl;
} else {
    cout << "Número de placa inválido." << endl;
}
}


