#include<iostream>
#include"T1.h"

using namespace std;

Automovel::Automovel(int d, int l)
{
	Distancia = d;
	Litros = l;
}

Automovel::Automovel()
{
	Distancia = 1; 
	Litros = 1;
}

void Automovel::setDistancia(int d)
{
	Distancia = d;
}

void Automovel::setLitros(int l)
{
	Litros = l;
}

float Automovel::getConsumo()
{
	return Distancia/Litros;
}

std::ostream& operator<<(std::ostream& c, const Automovel& a)
{
	c << "Percorreu= " << a.Distancia << "KM" << ", Abasteceu= " << a.Litros << "Litros";
	return c;
}

