/* Prog. para Engenharia II
 giovani.tomedi@acad.pucrs.br
 brunoboris@gmail.com

 Trabalho 1
 Exercício 3

 Deitel Exexercício 16.16
*/

#include <iostream>
#include <fstream>
#include "FrequenciaCardiaca.h"

using namespace std;

int main()
{
    string nome, sobrenome;
    int diaNasc, mesNasc, anoNasc;

    ifstream arq;
    arq.open("dados.txt", ios::in);

    if(!arq.is_open()){
        cout << "Impossivel abrir o arquivo!" << endl;
        return 0;}

    if(arq.bad()){
        cout << endl << "Erro fatal!" << endl;
        exit(1);}

    do{
        arq >> nome >> sobrenome >> diaNasc >> mesNasc >> anoNasc;

        if(!arq.fail()){
            cout << "... " << endl;
            }
    }while(arq.good());

    arq.close();

    FrequenciaCardiaca Bruno(nome,sobrenome,diaNasc,mesNasc,anoNasc);

    Bruno.obterIdade(2015);
    Bruno.obterFrequenciaMaxima()

return 0;
}
