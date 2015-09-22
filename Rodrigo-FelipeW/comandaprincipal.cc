#include <fstream> // para usar file streams (ifstream,ofstream)
#include <iostream> // para usar cin,cout
#include <iomanip> // para usar manipuladores (setw, right, ...)
#include <cstdlib> // para usar srand(), rand() e exit()
#include "comanda.h"

using namespace std;

int main()
{
// Cria input file stream (ifstream)
    ifstream arqcomanda;

    cout << "Abrindo arquivo texto..." << endl;

    // Abre arquivo

    arqcomanda.open( "Comanda.txt" , ios::in );

    // Se houver erro, sai do programa
    if (!arqcomanda.is_open())
        return 0;
    Comanda c1;
// Agora, lê n registros numéricos
    do
    {
        int valor;
        arqcomanda >> valor;

        if(!arqcomanda.fail()) {
            c1.InformaParcela(valor);
            cout <<"\t" << valor << endl;
        }



    } while(arqcomanda.good());
    if(arqcomanda.bad() || !arqcomanda.eof()) {
        cout << "Erro fatal!" << endl;
        exit(1);		// Aborta programa
    }
    cout << "Fechando o arquivo..." << endl;
    arqcomanda.close();









//   c1.InformaParcela(18.00);
    // c1.InformaParcela(2.00);
    // c1.InformaParcela(10.00);

    cout << "Total a ser pago, sem serviço: R$" << c1.getTotal() << endl;
    cout << "Total a ser pago, com serviço: R$" << c1.getTotal()*1.15 << endl;

    char escolha;
    cout << "Gostaria de pagar o serviço? (S/N)" << endl;


    while(escolha!='s' && escolha != 'n') // enquanto a escolha nao for s pra sim ou n pra nao, o programa fica pedindo resposta
    {
        escolha=getchar();
    }
    while(escolha == 's' ) // para a resposta sim, informa o troco para o total com serviço
    {
        c1.InformaGrana(100);
        cout << "Troco: R$" << c1.getTrococ() << endl;
        return 0;
    }
    if(escolha == 'n') // para a resposta nao, informa o troco para o total sem serviço
        c1.InformaGrana(100);
    cout << "Troco: R$" << c1.getTrocos() << endl;

    return 0;
}
