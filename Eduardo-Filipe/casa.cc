//pucrs
//eduardo chaves _ eduardo_m_chaves@hotmail.com
//filipe jacobsen _ flpjacobsen@gmail.com
//Trabalho 1 - exercicio 1

/*Implemente uma casa. As caracter�sticas de uma casa nesta abstra��o referem-se apenas �s suas dimens�es, ou seja, toda casa possui largura e comprimento.
Construa m�todos que permitam dar valores iniciais aos seus atributos, bem como permitam alter�-los e consult�-los.
Crie tamb�m um m�todo que calcula e retorna a �rea da casa.*/

#include <iostream>
#include "casa.h"

using namespace std;

casa :: casa(float larg, float comp)
{
	largura = larg;
	comprimento = comp;
}

casa :: casa ()
{
	largura=1;
	comprimento=1;
}

void casa :: redimencionar(float larg, float comp)
{
	largura = larg;
	comprimento = comp;
}

float casa :: area ()
{
	float a=largura*comprimento;
	return a;
}

void casa :: consulta()
{
	//cout << "[L=" << largura << ", C=" << comprimento << "]" << endl;
}

std::ostream& operator<<(std::ostream& s, const casa& c)
{
s << "[L=" << c.largura << ", C=" << c.comprimento << "]";
return s;
}
