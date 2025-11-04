#include <iostream>
#include <cstdlib>
#include <string>


using namespace std;

int main(void)
{
	system("chcp 1252 > null");
	int hours, minutes;
	char ponteiros;

	cout << "Que horas são? ";
	cin >> hours >> ponteiros >> minutes;
	cout << "O seu relógio está atrasado" << endl;
	cout << "Agora são " << hours + 1 << ponteiros << minutes << endl;
}