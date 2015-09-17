/* Prog. para Engenharia II
 giovani.tomedi@acad.pucrs.br
 br_tam@hotmail.com

 Trabalho 1
 Exercício 1

 Implemente uma conta corrente com as operações sacar, depositar e consultar saldo.
 Crie duas contas, deposite R$ 1000 na primeira e transfira manualmente R$ 400 para a segunda.

 No final, mostre o saldo de cada uma.

*/
#include <iostream>
#include <fstream>
#include <cstdlib>
#include "conta.h"

using namespace std;

int main()
{
    Conta conta1, conta2;
    int dep1, transf2;

    ifstream arq;

    arq.open("conta.txt", ios::in);
    if(!arq.is_open())
    {
        cout << "Impossivel abrir o arquivo!" << endl;
        return 0;
    }

    do
    {
        arq >> dep1 >> transf2;

        if(!arq.fail()){
            cout << "Valores do arquivo conta.txt: " << dep1 << "\t" << transf2 << endl;
        }
    }while(arq.good());

        if(arq.bad())
        {
            cout << endl << "Erro fatal!" << endl;
            exit(1);
        }
        arq.close();

        conta1.depositar(dep1);
        conta1.sacar(transf2);
        conta2.depositar(transf2);

        cout << "Saldo da conta 1: R$ " << conta1.getSaldo() << endl;
        cout << "Saldo da conta 2: R$ " << conta2.getSaldo() << endl;
    }

