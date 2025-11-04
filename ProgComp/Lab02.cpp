#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;

double Media(int x, int y);

int main()
{
    system("chcp 1252 > null");
    int x, y;
    cout << "Digite um valor inteiro: ";
    cin >> x;
    cout << "Digite o outro valor inteiro: ";
    cin >> y;
    cout << "A média dos números é " << Media(x, y) << endl;
}

double Media(int x, int y) {
    return (x + y) / 2.0;
}

