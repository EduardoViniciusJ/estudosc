#include <iostream>
using namespace std;

/// <summary>
///     cout << fixed;  cout.precision(7);
/// </summary>
/// <returns></returns>

int main() {

    system("chcp 1252 > null");

    double numero;
    cout << "Digite um ponto flutuante: ";
    cin >> numero;
    cout << "Notação padrão " << numero << endl;;
    cout << "Notação científica " << scientific << numero << endl;
    cout << "Notação decimal " << fixed << numero << endl;
}

