#include <iostream>
#include <cstdlib>
#include <string>


using namespace std;

int main(void)
{
	system("chcp 1252 > null");

	double custoFabrica, pctDistribuidor, impostos, soma;
	
	cout << "Custo de fábrica: ";
	cin >> custoFabrica;
	
	pctDistribuidor = 0.28 * custoFabrica;
	impostos = 0.45 * custoFabrica;
	
	soma = custoFabrica + pctDistribuidor + impostos;

	cout << "O custo ao consumidor é de R$" << soma << endl;

}