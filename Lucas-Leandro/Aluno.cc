//NOMES: Lucas(lucascherutti@gmail.com) e Leandro(leandro-ie@hotmail.com)
//Implemente o cálculo da média da disciplina. A classe deve representar as notas de um aluno. Faça também um método para calcular e retornar a média do aluno. As notas e o cálculo são definidos pela fórmula de G1 desta disciplina.
//TRABALHO I (F)
#include "Aluno.h"
#include<iostream>
using namespace std;

Aluno::Aluno(float p1, float p2, float t1, float t2)
{
    prova1 = p1;
    prova2 = p2;
    trab1 = t1;
    trab2 = t2;
    media=0;
}
void Aluno::calcularMedia()
{
    float m;
    m=((2.0*prova1)+(2.0*prova2)+((trab1+trab2)/2.0))/5.0;
    media=m;

}
void Aluno::mostrar()
{
    cout<<"Nota da Prova 1: "<<prova1<<endl;
    cout<<"Nota da Prova 2: "<<prova2<<endl;
    cout<<"Nota do Trabalho 1: "<<trab1<<endl;
    cout<<"Nota do Trabalho 2: "<<trab2<<endl;
    cout<<"Media Final do Aluno: "<<media<<endl;
}

ostream& operator<<(ostream& s, const Aluno& media)
{
    s <<  media;

    return s;
}
