#include <iostream>
#include <ctime>
#include <cmath>
#include <climits>

using namespace std;

char codigo(int x);



int main()
{
	system("chcp 1252 > null");

    cout << codigo(80);
    cout << codigo(114);
    cout << codigo(111);
    cout << codigo(103);
    cout << codigo(67);
    cout << codigo(111);
    cout << codigo(109);
    cout << codigo(112);
    cout << endl;

}

char codigo(int x) {
	return (char)x;
}