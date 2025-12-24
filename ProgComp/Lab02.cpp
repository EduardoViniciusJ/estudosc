#include <iostream>
using namespace std;


int bitsBaixo(unsigned int estado);




int main() {

	system("chcp 1252 > null");
						
	int valor;
	cout << "Digite um valor inteiro: ";
	cin >> valor;
	cout << "Os 16 bits mais baixos desse valor correspondem ao número " << bitsBaixo(valor) << endl;
}		

int bitsBaixo(unsigned int estado) {
	
	return estado & 0xffff;
}
				


