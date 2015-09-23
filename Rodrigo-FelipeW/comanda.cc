#include <fstream> // para usar file streams (ifstream,ofstream)
#include <iostream> // para usar cin,cout
#include <iomanip> // para usar manipuladores (setw, right, ...)
#include <cstdlib> // para usar srand(), rand() e exit()
#include "comanda.h"

using namespace std;



Comanda::Comanda()
{
    total = 0;
}

float Comanda::getTotal()
{
    return total;
}

float Comanda::getTrococ()
{
    return trococ;
}
float Comanda::getTrocos()
{
    return trocos;
}

void Comanda::InformaParcela(float parcela)
{
    total = total+parcela;
}

void Comanda::InformaGrana(float grana)
{

    trocos=grana - total;  //troco sem pagar serviço
    trococ=grana - total * 1.15; // troco com o pagamento do serviço
}



