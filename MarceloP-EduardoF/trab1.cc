#include <iostream>

using namespace std;

class cliente
{
	private:
		int conta;
		float encargo, saldo_ini, c_total, c_limite, novo_saldo;
        	void mostra_dados();

    public:
        void le_dados();
        void mostra();

};

void cliente :: le_dados()
{
     cout << "Informe o número da conta:" << endl;
     cin >> conta;
     cout << "Informe o saldo inicial:" << endl;
     cin >> saldo_ini;
     cout << "Informe o total de encargos:" << endl;
     cin >> encargo;
     cout << "Informe o total de créditos:" << endl;
     cin >> c_total;
     cout << "Informe o limite de créditos:" << endl;
     cin >> c_limite;
};

void cliente :: mostra_dados ()
{
    cout << "\nConta: " << conta;

    cout << "\nLimite de crédito: " << c_limite;

    cout << "\nSaldo: " << novo_saldo;

    cout << "\nLimite de crédito ultrapassado\n\n";

	
};

void cliente :: mostra()
{
    novo_saldo = saldo_ini + encargo - c_total;

    if ( novo_saldo > c_limite) {
        mostra_dados();
    }
};


int main()
{
	cliente c;

	c.le_dados();


    c.mostra();


return 0;
}
