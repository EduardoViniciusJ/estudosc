#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;

int main()
{
    system("chcp 1252 > null");
    double rad, angle, seno;
    const double pi = 3.14159265358979323846;

    cout << "Digite um ângulo: ";
    cin >> angle;
    rad = angle * (pi / 180.0);
    seno = sin(rad);
    cout << "Seno = " << seno << endl;  
}
