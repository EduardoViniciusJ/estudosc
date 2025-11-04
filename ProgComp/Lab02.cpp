#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;


int Absoluto(int value);

int main()
{
	system("chcp 1252 > null");

	int value, absoluto;
	
	cout << "Digite um número inteiro: ";
	cin >> value;
	absoluto = Absoluto(value);
	cout << "O valor absoluto é " << absoluto;
}

int Absoluto(int value) {
	return sqrt(pow(value, 2));
}

