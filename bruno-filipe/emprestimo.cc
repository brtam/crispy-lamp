//pucrs
//Bruno _ brunoboris@gmail.com
//filipe jacobsen _ flpjacobsen@gmail.com
//Trabalho 1 - exercicio 4.120


#include <iostream>
#include "emprestimo.h"


using namespace std;


emprestimo::emprestimo(float princ, float tx, float d)
{	principal=princ;
	taxa=tx;
	dias=d;
	
}
emprestimo::emprestimo()
{	principal=1000;
	taxa=0.1;
	dias=90;
	}
float emprestimo :: juro()
{		float a = principal * taxa * dias/365;
		return a;
	}


void emprestimo :: consulta()
{
	cout << "valor principal=" << principal << endl;
	cout << "taxa=" << taxa << endl;
	cout << "dias=" << dias << endl;
	cout << "juro=" << juro() << endl;

std::ostream& operator<<(std::ostream& s, const emprestimo& c)
{
s << "[taxa, dias, juro=" << c.consulta << "]";
return s;
}

