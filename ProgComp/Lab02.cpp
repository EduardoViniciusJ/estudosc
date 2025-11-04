#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;

double VolumeCilindro(double raio, double altura);

int main()
{
	system("chcp 1252 > null");
	
	double raio, altura, volume;
	
	cout << "Calcula o Valor de um Cilindro" << endl;
	for (int i = 0; i < 30; i++) {
		cout << "-";
	}
	cout << endl;
	cout << "Entre com o raio da base : ";
	cin >> raio;
	cout << "Entre com a altura: ";
	cin >> altura;
	volume = VolumeCilindro(raio, altura);
	cout << "O volume do cilindro é " << volume << endl;

}

double VolumeCilindro(double raio, double altura) {
	double pi = 3.14159;

	return pi * pow(raio, 2.0) * altura;
}

