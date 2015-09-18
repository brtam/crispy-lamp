//Trabalho 1
//Eduardo Festugatto, Marcelo Presa Buttenbender
//marcelo.presa@live.com

#include <iostream>

using namespace std;

class Cliente {

private:
	int numeroconta;
	float saldo;
	float encargos;
	float creditos;
	float limcredito;

public:	
	Cliente(int nc, float si, float en, float cr, float lc, float ns);	
	float novoSaldo();
	//getsaldo

};

Cliente::Cliente(int nc, float si, float en, float cr, float lc, float ns)
{
	numeroconta = nc;
	saldo = si;
	encargos = en;
	creditos = cr;
	limcredito = lc;
}

void Cliente::novoSaldo()
{
	saldo = saldo + encargos - creditos;


}


int main()
{
	cout << "hey" << endl;

	return 0;
}

