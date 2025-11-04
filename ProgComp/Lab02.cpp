#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;

int Inicializar();
void Ligar();
void Verificar();
void Ativar();

int main()
{
	system("chcp 1252 > null");

	int system = Inicializar();
	
	if (system > 16384) {
		cout << endl;
		cout << "Sistema funcionando." << endl;
	}
	else {
		cout << endl;
		cout << "Falha na inicialização." << endl;
	}
	
}

int Inicializar() {
	cout << "Inicializando Sistema: " << endl;
	Ligar();
	Verificar();
	Ativar();
	cout << "Inicialização concluída." << endl;

	return rand();
}

void Ligar() {
	cout << " - Ligando dispositivos" << endl;
}
void Verificar() {
	cout << " - Verificando integridade" << endl;
}
void Ativar() {
	cout << " - Ativando Processos" << endl;
}