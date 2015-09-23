
#include<iostream>
using namespace std;

class Aluno {

private:
    float media;
    float prova1;
    float prova2;
    float trab1;
    float trab2;

public:
    Aluno (float p1, float p2, float t1, float t2);
    void mostrar();
    Aluno calcularMedia(float p1, float p2, float t1, float t2);
    Aluno();
};

int main()
{
    Aluno a1(5.0,6.0,8.0,7.0);
    a1.calcularMedia();
    a1.mostrar();






    return 0;
}
Aluno::Aluno(float p1, float p2, float t1, float t2)
{
    prova1 = p1;
    prova2 = p2;
    trab1 = t1;
    trab2 = t2;
    media=0;
}
Aluno::Aluno()
{
    prova1 = 1;
    prova2 = 1;
    trab1 = 1;
    trab2 = 1;
    media= 1;
}
Aluno Aluno::calcularMedia(float p1, float p2, float t1, float t2)
{
    float m;
    m=((2.0*prova1)+(2.0*prova2)+((trab1+trab2)/2.0))/5.0;
    media=m;
    return media;
}
void Aluno::mostrar()
{
    cout<<"Prova 1: "<<prova1<<endl;
    cout<<"Prova 2: "<<prova2<<endl;
    cout<<"Trabalho 1: "<<trab1<<endl;
    cout<<"Trabalho 2: "<<trab2<<endl;
    cout<<"Media: "<<media<<endl;
}
