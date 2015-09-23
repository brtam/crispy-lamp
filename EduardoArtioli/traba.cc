#include <fstream>   
#include <iostream>	
#include <iomanip>	
#include <cstdlib>
#include "trabalho.h"


circulo::circulo(float r)
{
	raio=r;
	
}

float circulo :: diametro()
{	
	float a = raio * 2;
	return a;

	}

float circulo :: perimetro()
{	
	float a = diametro() * 3.14159;
	return a;

	}

float circulo :: area()

{	
	float a = raio * raio * 3.14159;
	return a;

	}

	void circulo :: consulta()
{
	cout << " raio =" << raio << endl;
	cout << " diametro =" << diametro() << endl;
	cout << " perimetro =" << perimetro() << endl;
	cout << " area =" << area() << endl;
	
}


