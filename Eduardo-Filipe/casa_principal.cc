//pucrs
//eduardo chaves _ eduardo_m_chaves@hotmail.com
//filipe jacobsen _ flpjacobsen@gmail.com
//Trabalho 1 - exercicio 1

/*Implemente uma casa. As características de uma casa nesta abstração referem-se apenas às suas dimensões, ou seja, toda casa possui largura e comprimento.
Construa métodos que permitam dar valores iniciais aos seus atributos, bem como permitam alterá-los e consultá-los.
Crie também um método que calcula e retorna a área da casa.*/

#include <iostream>
#include <fstream>
#include "casa.h"

using namespace std;

int main()
{
    float x, y, area_a, area_b, area_c;

	// Cria input file stream (ifstream)
	ifstream arqcasa;
  	cout << "Abrindo arquivo texto..." << endl;
	// Abre arquivo
	arqcasa.open( "teste.txt" , ios::in );
	// Se houver erro, sai do programa
	if (!arqcasa.is_open())
	{
	cout << "Erro fatal!" << endl;
		return(1);		// Aborta programa
	}

	arqcasa >> x >> y;

	cout << "Fechando o arquivo..." << endl;
	arqcasa.close();

	//rotina teste da classe
	casa a, b, c;

	a.consulta();
	cout << a << endl;
	b.consulta();
	cout << b << endl;
	c.consulta();
	cout << c << endl;

	a.redimencionar(15,10);
	b.redimencionar(22,30);
    c.redimencionar(x,y);

	a.consulta();
	cout << a << endl;
	b.consulta();
	cout << b << endl;
	c.consulta();
	cout << c << endl;

	area_a = a.area();
	cout << "A= " << area_a << endl;
	area_b = b.area();
    cout << "A= " << area_b << endl;
	area_c = c.area();
    cout << "A= " << area_c << endl;

	return 0;
}
