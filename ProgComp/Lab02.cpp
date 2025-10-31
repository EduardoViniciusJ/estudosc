#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main(void)
{
	system("chcp 1252 > null");

	int minutos;
	cout << "Digite uma quantidade de minutos ";
	cin >> minutos;
	int segundos = 60 * minutos;
	cout << "Existem " << segundos << " segundos em " << minutos << " minutos.";
}