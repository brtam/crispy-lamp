//Nomes: Eduardo Festugatto, Marcelo Presa Buttenbender
//Exercício 3.18 Livro C-Program - Calculadora de Limite de crédito

#include <iostream>
#include <fstream>

//using namespace std;

class cliente
{
	private:
		int conta;
		float encargo, saldo_ini, c_total, c_limite, novo_saldo;
        	void mostra_dados();

    public:
        void le_arquivo();
        void mostra();

};
