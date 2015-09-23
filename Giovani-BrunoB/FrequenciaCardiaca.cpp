#include "FrequenciaCardiaca.h"

FrequenciaCardiaca::FrequenciaCardiaca(string PN, string S, int d, int m, int a)
{
    PrimeiroNome = PN;
    Sobrenome = S;
    dia = d;
    mes = m;
    ano = a;
}

void FrequenciaCardiaca::setPrimeiroNome(string PN)
{
    PrimeiroNome = PN;
}

void FrequenciaCardiaca::setSobrenome(string S)
{
    Sobrenome = S;
}

void FrequenciaCardiaca::setDia(int d)
{
    dia = d;
}

void FrequenciaCardiaca::setMes(int m)
{
    mes = m;
}

void FrequenciaCardiaca::setAno(int a)
{
    ano = a;
}

void FrequenciaCardiaca::getPrimeiroNome()
{
    return PrimeiroNome;
}

void FrequenciaCardiaca::getSobrenome()
{
    return Sobrenome;
}

void FrequenciaCardiaca::getDia()
{
    return dia;
}

void FrequenciaCardiaca::getMes()
{
    return mes;
}

void FrequenciaCardiaca::getAno()
{
    return ano;
}

int FrequenciaCardiaca::obterIdade(int anoAtual)  ///TODO : Na proxima versão considerar dia e mes.
{
    int tempAno;
    tempAno = anoAtual - ano;
    return tempAno;
}

int FrequenciaCardiaca::obterFrequenciaMaxima(int idade)
{
    int FreqMax;
    FreqMax = 220 - idade;
    return FreqMax;
}

int FrequenciaCardiaca::obterFrequenciaIdeal(int FreqMax)
{
    int minFreqIdeal, maxFreqIdeal;
    minFreqIdeal = 0.5 * FreqMax;
    maxFreqIdeal = 0.85 * FreqMax;
    return minFreqIdeal, maxFreqIdeal;
}
