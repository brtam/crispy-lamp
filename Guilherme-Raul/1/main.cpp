//CABEÇALHO
//RAUL HAX, GRUILHERME REAL
//raul.hax@acad.pucrs.br; guilherme.real@acad.pucrs.br

//Implemente uma televisão. A televisão tem um controle de volume do som e um controle de seleção de canal.
//O controle de volume permite aumentar ou diminuir a potência do volume de som em uma unidade de cada vez.
//O controle de canal também permite aumentar e diminuir o número do canal em uma unidade, porém, também possibilita trocar para um canal indicado.
//Também devem existir métodos para consultar o valor do volume de som e o canal selecionado.
//No programa principal, crie uma televisão e troque de canal algumas vezes. Aumente um pouco o volume, e exiba o valor de ambos os atributos.

#include <iostream>
#include <fstream>
#include "Televisao.h"

using namespace std;

int main()
{
    int x, y, z;

    ifstream myfile;
    myfile.open ("test.txt", ios::in);
    myfile >> x >> y >> z;
    myfile.close();

    Televisao tv1(x, y);

    tv1.getCanal();

    tv1.EscolherCanal(z);

    tv1.getCanal();

    tv1.getVolume();

    return 0;
}

