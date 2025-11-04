#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;

int Media(int x, int y);

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

int Media(int x, int y) {
    return (x + y) / 2;
}

