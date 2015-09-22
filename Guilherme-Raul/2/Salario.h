#ifndef SALARIO_H
#define SALARIO_H

using namespace std;

class Salario
{
private:
    float Horas;
    float Valor;
public:
    Salario(float H, float S);
    float calculo();
};

#endif // SALARIO_H
