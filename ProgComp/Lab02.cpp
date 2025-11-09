#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;


void ConvertFahrenheit(double celsius);

int main()
{
	system("chcp 1252 > null");

	double celsius;

	cout << "Digite uma temperatura em graus Celsius: ";
	cin >> celsius;
	ConvertFahrenheit(celsius);
}

void ConvertFahrenheit(double celsius) {

	double calculo = 1.8 * celsius + 32.0;
	cout << celsius << " graus Celsius equivalem a " << calculo << " graus Fahrenheit.";
}

