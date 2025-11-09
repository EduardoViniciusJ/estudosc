#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;

double ModuloVetor(double x, double y);

int main()
{
	system("chcp 1252 > null");

	double x, y, vetor;

	cout << "Digite as coordenadas do vetor: " << endl;
	cout << "x: ";
	cin >> x;
	cout << "y: ";
	cin >> y;
	cout << endl;
	vetor = ModuloVetor(x, y);
	cout << "O tamanho do vetor é " << vetor;

}

double ModuloVetor(double x, double y) {
	
	return sqrt((pow(x, 2) + pow(y, 2)));
}




