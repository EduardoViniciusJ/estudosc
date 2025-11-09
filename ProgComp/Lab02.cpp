#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;

double Aumento(double salario);

int main()
{
	system("chcp 1252 > null");

	double salario;

	cout << "Salário atual: R$";
	cin >> salario;
	double aumento = Aumento(salario);
	cout << "Salário ajustado para R$" << aumento;
}

double Aumento(double salario) {
	return  salario + (salario * 0.15);
}



