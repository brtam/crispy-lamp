#include "Televisao.h"
#include <iostream>

using namespace std;

Televisao::Televisao(int v, int c)
{
    volume = v;
    canal = c;
}

void Televisao::AumentaVolume()
{
    volume++;
}

void Televisao::DiminuiVolume()
{
    volume--;
}

void Televisao::getVolume()
{
    cout << "Volume atual: " << volume << endl;
}

void Televisao::AumentaCanal()
{
    canal++;
}

void Televisao::DiminuiCanal()
{
    canal--;
}

void Televisao::getCanal()
{
    cout << "Canal atual: " << canal << endl;
}

void Televisao::EscolherCanal(int c)
{
    canal = c;
}
