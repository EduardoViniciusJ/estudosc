#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main(void)
{
	system("chcp 1252 > null");

	int medida;

	cout << "Medida: ";
	cin >> medida;
	cout << "2x medida: " << medida * 2 << endl;
	cout << "Medida ao quadrado: " << medida * medida;
}