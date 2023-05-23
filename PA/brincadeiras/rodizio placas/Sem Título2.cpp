#include <iostream>
#include <string>

using namespace std;

int main() {
    string placa;
    int ultimoDigito;

    // Solicita ao usu�rio que insira o n�mero da placa do carro
    cout << "Digite o n�mero da placa do carro (sem tra�os ou espa�os): ";
    cin >> placa;

    // Obt�m o �ltimo d�gito da placa
    ultimoDigito = stoi(placa.substr(placa.length() - 1));

    // Cria a estrutura condicional para determinar o dia em que o carro pode circular
    if (ultimoDigito == 1 || ultimoDigito == 2) {
        cout << "Este carro n�o pode circular �s segundas-feiras" << endl;
    } else if (ultimoDigito == 3 || ultimoDigito == 4) {
        cout << "Este carro n�o pode circular �s ter�as-feiras" << endl;
    } else if (ultimoDigito == 5 || ultimoDigito == 6) {
        cout << "Este carro n�o pode circular �s quartas-feiras" << endl;
    } else if (ultimoDigito == 7 || ultimoDigito == 8) {
        cout << "Este carro n�o pode circular �s quintas-feiras" << endl;
    } else if (ultimoDigito == 9 || ultimoDigito == 0) {
        cout << "Este carro n�o pode circular �s sextas-feiras" << endl;
    } else {
        cout << "Placa inv�lida" << endl;
    }

    return 0;
}
