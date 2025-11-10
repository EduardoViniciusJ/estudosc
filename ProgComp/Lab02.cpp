#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;

double ConvertAngle(double x, double y);

int main()
{
	system("chcp 1252 > null");

	double x, y, angle;

	cout << "Digite as coordenadas do vetor:" << endl;
	cout << "x: ";
	cin >> x;
	cout << "y: ";
	cin >> y;
	cout << endl;
	angle = ConvertAngle(x, y);
	cout << "O ângulo do vetor é " << angle << " graus.";
}

double ConvertAngle(double x, double y) {
	double resultado = atan2(y, x);
	return (resultado * 180) / 3.141592;
}


