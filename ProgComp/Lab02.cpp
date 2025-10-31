#include <iostream>
#include <cstdlib>
#include <string>


using namespace std;

int main(void)
{
	system("chcp 1252 > null");

	int qtdAnos, qtdCigarros;
	double precoCarteiras, totalGasto;

	cout << "A quantos anos você fuma? ";
	cin >> qtdAnos;
	cout << "Quantos cigarros você fuma por dia? ";
	cin >> qtdCigarros;
	cout << "Qual é o preço médio de uma carteira de cigarros? ";
	cin >> precoCarteiras;

	totalGasto = (qtdAnos * 365) * qtdCigarros / 20.0 * precoCarteiras;

	cout << "Você gastou até agora R$" << totalGasto << " com gastos";

}