//Programação para engenharia II 2015/2
//////////////////////////////////////// marcelo.navarro@acad.pucrs.br */
//////////////////////////////////////// joao.alencastro@acad.pucrs.br */
# include <iostream>
# include <fstream>

class Carro
{
    friend std::ostream& operator<<(std::ostream&,const Carro&);
private:
    float Tanque;
    float Odometro;
    float ConsumoL;
public:
    Carro();
    Carro(float T,float O,float C);
    void Mover(float distancia);
    void AbastecerS();
    void Abastecer();
};
