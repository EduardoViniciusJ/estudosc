#include <iostream>
#include <cstdlib>
#include <string>


using namespace std;

int main(void)
{
	system("chcp 1252 > null");
	
	int area, volume, a, b, altura, prisma;

	cout << "Lado a: ";
	cin >> a;
	cout << "Labo b: ";
	cin >> b;
	area = a * b;
	cout << "Área da base = " << area << endl;
	cout << "Altura: ";
	cin >> altura;
	prisma = area * altura;
	cout << "Volume do prisma = " << prisma << endl;
}