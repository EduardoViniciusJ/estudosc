#include <iostream>
using namespace std;

/// <summary>
///     cout << fixed;  cout.precision(7);
/// </summary>
/// <returns></returns>


float imcF(float, float);
double imcD(double, double);


int main() {

    system("chcp 1252 > null");

    cout << "IMC em Float: " << imcF(1.75f, 80.0f) << endl;
    cout << "IMC em Double: " << imcD(1.75, 80.0) << endl;

    cout << endl;

    cout << fixed; cout.precision(10);
    cout << "IMC em Float: " << imcF(1.75f, 80.0f) << endl;
    cout << "IMC em Double: " << imcD(1.75, 80.0) << endl;

}


float imcF(float altura, float peso) {
    return peso / (pow(altura, 2));
}
double imcD(double altura, double peso) {
    return peso / (pow(altura, 2));
}
