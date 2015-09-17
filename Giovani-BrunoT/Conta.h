#ifndef CONTA_H
#define CONTA_H

#include <iostream>

class Conta
{
private:
    int saldo;

public:
    Conta();
    int getSaldo();
    void sacar(int valor);
    void depositar(int valor);
};

#endif // CONTA_H
