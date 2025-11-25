#include <iostream>
#include <ctime>
#include <cmath>
#include <climits>

using namespace std;



bool isShort(int);
bool isInt(long long);


int main()
{
	system("chcp 1252 > null");


	long long x;
	cout << "Digite um valor inteiro: ";
	cin >> x;
	if (isShort(x) == true) {
		cout << x << " cabe em 16 bits" << endl;
	}
	else {
		cout << x << " não cabe em 16 bits" << endl;
	}
	if (isInt(x) == true) {
		cout << x << " cabe em 32 bits " << endl;
	}
	else {
		cout << x << " não cabe em 32 bits " << endl;
	}
}

bool isShort(int x) 
{
	if (x >= SHRT_MIN && x <= SHRT_MAX) {
		return true;
	}
	else {
		return false;
	}
}

bool isInt(long long x) {
	if (x >= INT_MIN && x <= INT_MAX) {
		return true;
	}
	else {
		return false;
	}
}