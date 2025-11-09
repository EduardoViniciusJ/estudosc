#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;


double MediaHarmonica(double x, double y);

int main()
{
	system("chcp 1252 > null");

	double x, y, media;

	cout << "Entre com um número: ";
	cin >> x;
	cout << "Entre com o outro número: ";
	cin >> y;
	media= MediaHarmonica(x, y);
	cout << "A média harmônica dos números é " << media;
}

double MediaHarmonica(double x, double y) {

	double calculo = 2.0 * x * y / (x + y);
	return calculo;
}

