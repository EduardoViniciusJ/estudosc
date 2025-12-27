#include <iostream>
using namespace std;



int main() {

    system("chcp 1252 > null");

    float f = 6.1;

    cout << f << endl;

    cout << fixed;
    cout.precision(7);
    cout << "f = " << f << endl;

}
