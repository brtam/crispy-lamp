#include <iostream>
class Comanda {

    float total;
    float trococ;
    float trocos;
public:
    Comanda();
    float getTotal();
    void InformaParcela(float parcela);
    void InformaGrana(float grana);
    float getTrococ();
    float getTrocos();
};
