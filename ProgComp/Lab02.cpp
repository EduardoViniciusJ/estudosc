#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;

#define PRECOPASTEL 0.25
#define PRECOPAO 0.30

int main()
{

	system("chcp 1252 > null");

	double qtdPaes, qtdPasteis, total;
	
	cout << "Pães&Cia " << endl;
	cout << endl;
	cout << "Quantos pães? ";
	cin >> qtdPaes;
	cout << "Quantos pastéis? ";
	cin >> qtdPasteis;
	cout << endl;
	total = (qtdPaes * PRECOPAO) + (qtdPasteis * PRECOPASTEL);
	cout << "O total das compras é R$" << total;
		
}
