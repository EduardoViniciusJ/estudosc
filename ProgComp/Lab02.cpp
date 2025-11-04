#include <iostream>
#include <ctime>

using namespace std;

void UmTres();
void Dois();

int main(void)
{
	system("chcp 1252 > null");

	cout << "Começando agora" << endl;
	UmTres();
	cout << "Pronto!";

}

void UmTres() {
	cout << "Um ";
	Dois();
	cout << "Três" << endl;;
}

void Dois() {
	cout << "Dois ";
}

