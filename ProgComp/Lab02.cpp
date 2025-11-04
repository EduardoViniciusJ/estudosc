#include <iostream>
#include <cstdlib>
#include <string>


using namespace std;

int main(void)
{
	system("chcp 1252 > null");
	cout << "Gerando números psedoualeatórios:" << endl;
	srand(1);
	cout << rand() << endl;
	cout << rand() << endl;
	cout << rand() << endl;
	cout << rand() << endl;
	cout << rand() << endl;
}
