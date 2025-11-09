#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;


void Relogio(int horas, int minutos);


int main()
{
	system("chcp 1252 > null");

	int horas, minutos;

	cout << "Entre com o número de horas: ";
	cin >> horas;
	cout << "Entre com o número de minutos: ";
	cin >> minutos;
	Relogio(horas, minutos);
	
}

void Relogio(int horas, int minutos) {
	cout << "Agora são " << horas << ":" << minutos;
}

