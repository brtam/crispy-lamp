#ifndef TELEVISAO_H
#define TELEVISAO_H

class Televisao
{

private:
    int volume;
    int canal;

public:
    Televisao(int v, int c);
    void AumentaVolume();
    void DiminuiVolume();
    void AumentaCanal();
    void DiminuiCanal();
    void EscolherCanal(int c);
    void getCanal();
    void getVolume();
};

#endif // TELEVISAO_H
