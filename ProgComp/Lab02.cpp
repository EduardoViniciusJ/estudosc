#include <iostream>
#include <ctime>

using namespace std;

void Linha();
void Pequena();
void Media();
void Grande();



int main(void)
{
	system("chcp 1252 > null");

	Pequena();
	Media();
	Grande();
	cout << "Programação de Computadores" << endl;
	Grande();
	Media();
	Pequena();
}

void Linha() {
	cout << "----------";
}

void Pequena() {
	Linha();
	cout << endl;
}

void Media() {
	Linha();
	Linha();
	cout << endl;
}

void Grande() {
	Linha();
	Linha();
	Linha();
	cout << endl;
}