#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main(void)
{
	system("chcp 1252 > null");

	cout << "Entre com a altura, largura e comprimento: " << endl;
	float altura, largura, comprimento;
	cin >> altura; cin >> largura; cin >> comprimento;
	cout << "O volume é " << altura * largura * comprimento << " cm cúbicos.";
}