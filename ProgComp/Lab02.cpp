#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main(void)
{
	system("chcp 1252 > null");

	int idade, dias;
	cout << "Digite sua idade: ";
	cin >> idade;	
	dias = idade * 365;
	cout << idade << " anos equivalem a " << dias << " dias.";
}