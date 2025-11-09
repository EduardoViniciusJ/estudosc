#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;

double CalculoIMC(double altura, double massa);

int main()
{
	system("chcp 1252 > null");
	
	double altura, massa, IMC;

	cout << "Índice de Massa Corporal (IMC)" << endl;
	cout << "-----------------------------" << endl;
	cout << "Altura: ";
	cin >> altura;
	cout << "Massa: ";
	cin >> massa;
	IMC = CalculoIMC(altura, massa);
	cout << "IMC: " << IMC;
}

double CalculoIMC(double altura, double massa) {
	return massa / (pow(altura, 2));
}





