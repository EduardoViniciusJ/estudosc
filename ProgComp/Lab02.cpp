#include <iostream>
#include <ctime>
#include <cmath>
#include <climits>

using namespace std;


int main()
{
	system("chcp 1252 > null");

	// Inverte os bits ou seja ele é 1 porém invertido fica 254 OPERADOR NEGATIVO ~ 
	unsigned char estado = 1;
	estado = ~estado;
	cout << (int)estado << endl;


	// Desloca uma certa quantidade de bits para ESQUERDA, nesse caso 3 bits foram para esquerda. OPERADOR <<
	unsigned char estado1 = 1;
	estado1 = estado1 << 3;
	cout << (int)estado1 << endl;

	// Desloca uma certa quantidade de bits para DIREITA, nesse caso 3 bits foram para esquerda. OPERADOR >>
	unsigned char estado2 = 8;
	estado2 = estado2 >> 3;
	cout << (int)estado2 << endl;



	// Faz um AND entre bits dos seus operandos, assim gerando um novo numero. OPERADOR &
	unsigned char estado3 = 170;
	estado3 = estado3 & 15;
	cout << (int)estado3 << endl;

	// Faz um OU entre bits dos seus operandos, assim gerando um novo numero. OPERADOR |
	unsigned char estado4 = 170;
	estado4 = estado4 | 15;
	cout << (int)estado4 << endl;

	// Faz um XOR entre bits dos seus operandos, assim gerando um novo numero. ^
	unsigned char estado5 = 170;
	estado5 = estado5 ^ 15;
	cout << (int)estado5 << endl;



	

	
}