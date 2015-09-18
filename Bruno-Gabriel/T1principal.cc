//bruno.demiquei@acad.pucrs.br
//gabrielneuwald@gmail.com
//PUC-RS Laboratório de Programacao
//Calculo de consumo e media

#include<iostream>
#include"T1.h"

using namespace std;

int main()
{
	Automovel a[2], a1(150, 25), a2(150, 15);

	a[0].Distancia =150;
	a[0].Litros =25;

	a[1].Distancia = 150;
	a[1].Litros =15;

	for (int i = 0; i<2 ; i++)
		{
			cout << a[i] << endl;
		}

	cout << "A autonomia do primeiro abastecimento eh " << a1.getConsumo() << "KM/L" << endl;
	cout << "A autonomia do segundo abastecimento eh " << a2.getConsumo() << "KM/L" << endl;

	cout << "A Media de autonomia foi de: " << (a1.getConsumo()+a2.getConsumo())/2 << "KM/L" << endl;
		

	return 0;
}

