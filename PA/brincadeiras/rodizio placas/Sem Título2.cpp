#include <iostream>
#include <string>

using namespace std;

int main() {
    string placa;
    int ultimoDigito;

    // Solicita ao usuário que insira o número da placa do carro
    cout << "Digite o número da placa do carro (sem traços ou espaços): ";
    cin >> placa;

    // Obtém o último dígito da placa
    ultimoDigito = stoi(placa.substr(placa.length() - 1));

    // Cria a estrutura condicional para determinar o dia em que o carro pode circular
    if (ultimoDigito == 1 || ultimoDigito == 2) {
        cout << "Este carro não pode circular às segundas-feiras" << endl;
    } else if (ultimoDigito == 3 || ultimoDigito == 4) {
        cout << "Este carro não pode circular às terças-feiras" << endl;
    } else if (ultimoDigito == 5 || ultimoDigito == 6) {
        cout << "Este carro não pode circular às quartas-feiras" << endl;
    } else if (ultimoDigito == 7 || ultimoDigito == 8) {
        cout << "Este carro não pode circular às quintas-feiras" << endl;
    } else if (ultimoDigito == 9 || ultimoDigito == 0) {
        cout << "Este carro não pode circular às sextas-feiras" << endl;
    } else {
        cout << "Placa inválida" << endl;
    }

    return 0;
}
