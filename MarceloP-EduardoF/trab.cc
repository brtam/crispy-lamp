//Nomes: Eduardo Festugatto, Marcelo Presa Buttenbender
//Exercício 3.18 Livro C-Program - Calculadora de Limite de crédito

#include <iostream>
#include <fstream>
#include "trab1.h"

using namespace std;


void cliente :: le_arquivo()
{
     ifstream arq;
	cout << "Abrindo arquivo texto..." << endl;

	arq.open( "teste.txt" , ios::in );

	if (!arq.is_open())
	{
	cout << "Erro fatal!" << endl;
	return; 
	}

     arq >> conta;
     arq >> saldo_ini;
     arq >> encargo;
     arq >> c_total;
     arq >> c_limite;
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


