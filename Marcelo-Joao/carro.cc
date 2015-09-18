
//Programação para engenharia II 2015/2
//////////////////////////////////////// marcelo.navarro@acad.pucrs.br */
//////////////////////////////////////// joao.alencastro@acad.pucrs.br */


# include <iostream>
# include <fstream>
# include "carro.h"

using namespace std;

Carro::Carro()
{
    Tanque = 0;
    Odometro = 0;
    ConsumoL = 15;
}

Carro::Carro(float T,float O,float C)
{
    Tanque = T;
    Odometro = O;
    ConsumoL = C;
}

std::ostream& operator<<(std::ostream& s,const Carro& c)
{
    s<<"[ Odometro = "<<c.Odometro<<"km  ,Tanque de combustivel = "<<c.Tanque<<"l, Consumo médio = "<<c.ConsumoL<<"km/l ]"<<endl;

    return s;
}

void Carro::Mover(float distancia)
{
    Odometro=Odometro+distancia;
    Tanque = Tanque-(distancia/ConsumoL);
}

void Carro::Abastecer()
{
    float l;
   
        do{
        cout<<"Quantos litros deseja abastecer?"<<endl;
        cin>>l;
        }while(l<=0);

        if((l+Tanque)>=50)
        {
            Tanque = 50;
            cout<<"Capacidade do tanque maxima de 50l"<<endl<<"...enchendo o tanque"<<endl;
        }
        else
        Tanque=Tanque+l;
        cout<<"Abastecendo ...."<<endl;
    
}
void Carro::AbastecerS()
{
        float l;
        ifstream entrada;
        entrada.open("dados.txt", ios::out );
        entrada>>l;
        if((l+Tanque)>=50)
        {
            Tanque = 50;
            cout<<"Capacidade do tanque maxima de 50l"<<endl<<"...enchendo o tanque"<<endl;
        }
        else
        Tanque=Tanque+l;
        cout<<"Abastecendo ...."<<endl;
    
}

