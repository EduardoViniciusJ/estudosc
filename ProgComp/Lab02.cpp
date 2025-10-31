#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main(void)
{
	system("chcp 1252 > null");

	int horas, minutos;
	char operador;

	cout << "Que horas são? ";
	cin >> horas >> operador >> minutos;
	cout << horas << " horas" << endl;
	cout << minutos << " minutos" << endl;
}