#include <iostream>
#include "conta.h"

Conta::Conta()
{
    saldo = 0;
}

int Conta::getSaldo()
{
    return saldo;
}

void Conta::sacar(int valor)
{
    saldo = saldo - valor;
}

void Conta::depositar(int valor)
{
    saldo = saldo + valor;
}
