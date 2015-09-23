#ifndef FREQUENCIACARDIACA_H
#define FREQUENCIACARDIACA_H


class FrequenciaCardiaca
{
    friend std::ostream& operator<<(std::ostream&, const FrequenciaCardiaca&);

    private:
        string PrimeiroNome;
        string Sobrenome;
        int dia;
        int mes;
        int ano;

    public:
        FrequenciaCardiaca(string PN, string S, int d, int m, int a);
        void setPrimeiroNome(string PN);
        void setSobrenome(string S);
        void setDia(int d);
        void setMes(int m);
        void setAno(int a);
        void getPrimeiroNome();
        void getSobrenome();
        void getDia();
        void getMes();
        void getAno();

        int obterIdade(int anoAtual);  ///TODO : Na proxima versão considerar dia e mes.
        int obterFrequenciaMaxima(int idade);
        int obterFrequenciaIdeal(int FreqMax);
};

#endif // FREQUENCIACARDIACA_H
