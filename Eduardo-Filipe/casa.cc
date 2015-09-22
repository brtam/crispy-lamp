//pucrs
//eduardo chaves _ eduardo_m_chaves@hotmail.com
//filipe jacobsen _ flpjacobsen@gmail.com
//Trabalho 1 - exercicio 1

/*Implemente uma casa. As características de uma casa nesta abstração referem-se apenas às suas dimensões, ou seja, toda casa possui largura e comprimento.
Construa métodos que permitam dar valores iniciais aos seus atributos, bem como permitam alterá-los e consultá-los.
Crie também um método que calcula e retorna a área da casa.*/

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
