#include "Salario.h"
#include <iostream>

using namespace std;

Salario::Salario(float H, float S)
{

    Horas = H;
    Valor = S;

}


float Salario::calculo()
{


    float res=0 , x=0, res1=0, res2=0;


        if(Horas >40)
        {
            x=Horas-40;

            res1= Valor* 1.5 * x;
            res2= (Valor*40)+ res1;

            cout << "O Salario eh de: " << res2 << endl;
        }

        if (Horas <= 40)
        {
            res=Valor*Horas;
            cout << "O Salario eh de: " << res << endl;
        }


}
