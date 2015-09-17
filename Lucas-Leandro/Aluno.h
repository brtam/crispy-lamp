//NOMES: Lucas(lucascherutti@gmail.com) e Leandro(leandro-ie@hotmail.com)
//Implemente o cálculo da média da disciplina. A classe deve representar as notas de um aluno. Faça também um método para calcular e retornar a média do aluno. As notas e o cálculo são definidos pela fórmula de G1 desta disciplina.
//TRABALHO I (F)
#include<iostream>
using namespace std;

class Aluno {
    friend std::ostream& operator<<(std::ostream&, const Aluno&);
private:
    float media;
    float prova1;
    float prova2;
    float trab1;
    float trab2;

public:
    Aluno (float p1, float p2, float t1, float t2);
    void mostrar();
    void calcularMedia();

};
