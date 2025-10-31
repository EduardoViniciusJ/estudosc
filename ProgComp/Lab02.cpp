#include <iostream>
#include <cstdlib>
#include <string>


using namespace std;

int main(void)
{
	system("chcp 1252 > null");

	int n;

	cout << "Tabuada de n" << endl;
	cout << "------------" << endl;
	cout << "Entre com um número n (0 a 9): ";
	cin >> n;
	for (int i = 0; i < 10; i++) {
		cout << n << " x " << i << " = " << n * i << endl;
	}
}