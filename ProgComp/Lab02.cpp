#include <iostream>
using namespace std;

unsigned char ligarBit(unsigned char valor, int posicaoBit);
unsigned char desligarBit(unsigned char valor, int posicaoBit);
bool validarPosicao(int posicaoBit);
bool testarBit(unsigned char valor, int posicaoBit);

int main() {
    system("chcp 1252 > null");

    int posicaoBit;
    unsigned char estado = 167;
    unsigned char estado2 = 167;

    cout << "Ligar qual bit ? ";
    cin >> posicaoBit;

    estado = ligarBit(estado, posicaoBit);
    cout << "Estado final: " << int(estado) << endl;

    cout << "Desligar qual bit ? ";
    cin >> posicaoBit;

    estado2 = desligarBit(estado2, posicaoBit);
    cout << "Estado final: " << int(estado2) << endl;

    // EXEMPLO DE TESTE
    cout << "Testar qual bit ? ";
    cin >> posicaoBit;

    if (testarBit(estado, posicaoBit))
        cout << "Bit LIGADO" << endl;
    else
        cout << "Bit DESLIGADO" << endl;

    return 0;
}

unsigned char ligarBit(unsigned char valor, int posicaoBit) {
    if (!validarPosicao(posicaoBit))
        return valor;

    return valor | (1 << posicaoBit);
}

unsigned char desligarBit(unsigned char valor, int posicaoBit) {
    if (!validarPosicao(posicaoBit))
        return valor;

    return valor & ~(1 << posicaoBit);
}

bool validarPosicao(int posicaoBit) {
    if (posicaoBit < 0 || posicaoBit > 7) {
        cout << "Posicao de bit invalida! (0 a 7)" << endl;
        return false;
    }
    return true;
}

bool testarBit(unsigned char valor, int posicaoBit) {
    if (!validarPosicao(posicaoBit))
        return false;

    return (valor & (1 << posicaoBit)) != 0;
}
