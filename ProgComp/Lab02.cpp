#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;

double Quadrado(double valor);
double Cubo(double valor);
double CuboDoQuadrado(double cubo);

int main()
{
	system("chcp 1252 > null");
	double valor, quadrado;
	cout << "Digite um valor: ";
	cin >> valor;
	cout << endl;
	quadrado = Quadrado(valor);
	cout << "Quadrado = " << quadrado << endl;
	cout << "Cubo = " << Cubo(valor)<< endl; 
	cout << "Cubo do Quadrado = " << CuboDoQuadrado(quadrado) << endl;
}

double Quadrado(double valor) {
	return valor * valor;
}

double Cubo(double valor) {
	return valor * valor * valor;
}

double CuboDoQuadrado(double valor) {
	return Cubo(valor);
}