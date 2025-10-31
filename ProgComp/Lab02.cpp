#include <iostream>
#include <cstdlib>
#include <string>


using namespace std;

int main(void)
{
	system("chcp 1252 > null");

	char operadorHoras, operadorMinutos;
	double peso, corridaHoras, ciclismoHoras, natacaoHoras,
		corridaMinutos, ciclismoMinutos, natacaoMinutos, calculoCalorias,
		corridaTotalMinutos, ciclismoTotalMinutos, natacaoTotalMinutos,
		corridaCaloriasGastas, ciclismoCaloriasGastas, natacaoCaloriasGastas, caloriasTotal;

	cout << "Digite o seu peso em quilos: ";
	cin >> peso;
	cout << "Digite o tempo de corrida: ";
	cin >> corridaHoras >> operadorHoras >> corridaMinutos >> operadorMinutos;
	cout << "Digite o tempo de ciclismo: ";
	cin >> ciclismoHoras >> operadorHoras >> ciclismoMinutos >> operadorMinutos;
	cout << "Digite o tempo de natação: ";
	cin >> natacaoHoras >> operadorHoras >> natacaoMinutos >> operadorMinutos;

	corridaTotalMinutos = (corridaHoras * 60.0) + corridaMinutos;
	ciclismoTotalMinutos = (ciclismoHoras * 60.0) + ciclismoMinutos;
	natacaoTotalMinutos = (natacaoHoras * 60.0) + natacaoMinutos;

	corridaCaloriasGastas = 7.0 * peso * (corridaTotalMinutos / 60.0);
	ciclismoCaloriasGastas = 7.0 * peso * (ciclismoTotalMinutos / 60.0);
	natacaoCaloriasGastas = 8.0 * peso * (natacaoTotalMinutos / 60.0);


	caloriasTotal = corridaCaloriasGastas + ciclismoCaloriasGastas + natacaoCaloriasGastas;


	cout << "Voce gastou um total de " << caloriasTotal << " calorias.";



}