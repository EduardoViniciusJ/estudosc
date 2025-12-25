#include <iostream>
using namespace std;

bool testarBit(unsigned char valor, int posicaoBit);
void exibirBits(unsigned char valor);

int main() {

    system("chcp 1252 > null");

    int entrada;
    cout << "Digite um valor entre 0 e 255: ";
    cin >> entrada;

    unsigned char valor = (unsigned char)entrada;

    cout << "O número " << entrada << " em binário é ";
    exibirBits(valor);
    cout << endl;

    return 0;
}

bool testarBit(unsigned char valor, int posicaoBit) {

    if (posicaoBit < 0 || posicaoBit > 7) {
        return false;
    }

    return (valor & (1 << posicaoBit)) != 0;
}

void exibirBits(unsigned char valor) {

    for (int i = 7; i >= 0; i--) {
        cout << (testarBit(valor, i) ? '1' : '0');
    }
}
