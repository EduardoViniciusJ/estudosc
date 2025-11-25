#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;

#define MINUTOSPORHORA 60

int main()
{

	int h1, m1, h2, m2;
	char operador;

	cout << "Digite o horário de partida (HH:MM): ";
	cin >> h1 >> operador >> m1;
	cout << "Digite o horário de chegada (HH:MM): ";
	cin >> h2 >> operador >> m2;
	cout << endl;
	int minutosPartida = h1 * MINUTOSPORHORA + m1;
	int minutosChegada = h2 * MINUTOSPORHORA + m2;

	int tempo = minutosChegada - minutosPartida;

	int horas = tempo / MINUTOSPORHORA;
	int minutos = tempo % MINUTOSPORHORA;

	cout << "O tempo total de viagem foi de " << horas << " horas e " << minutos << " min." << endl;


}
