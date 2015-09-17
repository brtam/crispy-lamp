/*
Implemente um carro. O tanque de combustível do carro armazena no máximo 50 litros de gasolina. O carro consome 15 km/litro. Deve ser possível:

    Abastecer o carro com uma certa quantidade de gasolina;
    Mover o carro em uma determinada distância (medida em km);
    Retornar a quantidade de combustível e a distância total percorrida.

No programa principal, crie 2 carros. Abasteça 20 litros no primeiro e 30 litros no segundo. Desloque o primeiro em 200 km e o segundo em 400 km. Exiba na tela a distância percorrida e o total de combustível restante para cada um.



//Programação para engenharia II 2015/2
//////////////////////////////////////// marcelo.navarro@acad.pucrs.br */
//////////////////////////////////////// joao.alencastro@acad.pucrs.br */


# include <iostream>
# include <fstream>
# include "carro.h"

using namespace std;

int main (void)
{
    Carro c1(20,0,15);
    c1.Mover(200);
    Carro c2(30,0,15);
    c2.Mover(400);
    cout<<"la vem os carros"<<endl;
    cout<<"carro1 "<<c1<<endl;
    cout<<"carro2 "<<c2<<endl;
    c1.AbastecerS();
    cout<<"carro1 "<<c1<<endl;

    return 0;

}
