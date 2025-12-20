#include <iostream>
#include <ctime>
#include <cmath>
#include <climits>

using namespace std;


int main()
{
	system("chcp 1252 > null");

	cout << "Ligar qual bit? ";

	int bit; 
	cin >> bit;
	unsigned char mascara = 1 << bit;

	unsigned char estado = 167;
	estado = estado | mascara;
	cout << int(estado) << endl;

	cout << "Desligar qual bit? ";

	int bit2;
	cin >> bit2;
	unsigned char mascara2 = ~(1 << bit2);

	unsigned char estado1 = 252; 
	estado1 = estado1 & mascara2;
	cout << int(estado1) << endl;

	cout << "Testar qual bit? ";
	int bit3; 
	cin >> bit3;
	unsigned char mascara3 = 1 << bit3;

	unsigned char estado3 = 240;
	if (estado3 & mascara3) {
		cout << "ligado " << endl;
	}
	else {
		cout << "desligado " << endl;
	}


	










	

	
}