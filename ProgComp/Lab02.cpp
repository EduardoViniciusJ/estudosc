#include <iostream>
#include <ctime>

using namespace std;

int main(void)
{
	system("chcp 1252 > null");
	srand(time(NULL));
	cout << "Gerando número pseudoaleatório:" << endl;
	int valor = rand();
	if (valor > 16834)
	{
		cout << valor << endl;
		cout << "GRANDE";
	}
	else {
		cout << valor << endl;
		cout << "PEQUENO";
	}
}
