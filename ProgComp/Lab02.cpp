#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main(void)
{
	system("chcp 1252 > null");


	float altura, largura, comprimento;
	cin >> altura >> largura >> comprimento;
	cout << "O volume é " << altura * largura * comprimento << " cm cúbicos.";
}