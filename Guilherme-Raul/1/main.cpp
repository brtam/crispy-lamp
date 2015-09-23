//CABE�ALHO
//RAUL HAX, GRUILHERME REAL
//raul.hax@acad.pucrs.br; guilherme.real@acad.pucrs.br

//Implemente uma televis�o. A televis�o tem um controle de volume do som e um controle de sele��o de canal.
//O controle de volume permite aumentar ou diminuir a pot�ncia do volume de som em uma unidade de cada vez.
//O controle de canal tamb�m permite aumentar e diminuir o n�mero do canal em uma unidade, por�m, tamb�m possibilita trocar para um canal indicado.
//Tamb�m devem existir m�todos para consultar o valor do volume de som e o canal selecionado.
//No programa principal, crie uma televis�o e troque de canal algumas vezes. Aumente um pouco o volume, e exiba o valor de ambos os atributos.

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

