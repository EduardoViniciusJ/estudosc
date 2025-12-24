#include <iostream>
using namespace std;


char Codificar(char caractere);
char Decodificar(char caractere);

int main() {

	system("chcp 1252 > null");

	char entrada;
	cout << "Digite o caractere por favor: ";
	cin >> entrada;
	char codificado = Codificar(entrada);
	cout << "Caractere codificado " << codificado << endl;
	cout << "Caractere descodificado " << Decodificar(codificado) << endl;

}
char Codificar(char caractere) {
	return caractere + 3;
}
char Decodificar(char caractere) {
	return caractere - 3;
}
