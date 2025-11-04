#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;



int main(void)
{
	system("chcp 1252 > null");

	double Qx, Qy, Px, Py;

	cout << "Ponto P: " << endl;
	cin >> Px >> Py;
	cout << "Ponto Q: " << endl;
	cin >> Qx >> Qy;
	double calculo = sqrt(pow(Qx - Px, 2.0) + pow(Qy - Py, 2.0));
	cout << endl;
	cout << "A distância entre P e Q é: " << calculo;
}



