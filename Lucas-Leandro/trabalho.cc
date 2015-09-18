//NOMES: Lucas(lucascherutti@gmail.com) e Leandro(leandro-ie@hotmail.com)
//Implemente o cálculo da média da disciplina. A classe deve representar as notas de um aluno. Faça também um método para calcular e retornar a média do aluno. As notas e o cálculo são definidos pela fórmula de G1 desta disciplina.
//TRABALHO I (F)
#include "Aluno.h"
#include<iostream>
#include <fstream>
using namespace std;


int main()
{

    ifstream arqaluno;
    cout << "Abrindo arquivo texto..." << endl;
// Abre arquivo
    arqaluno.open( "arqaluno.txt" , ios::in );
// Se houver erro, sai do programa
    if (!arqaluno.is_open())
    {
        cout << "Erro fatal!" << endl;
        return(1); // Aborta programa
    }
    float w, x, y, z;
    arqaluno >>w>> x >> y >>z;
    cout << "Fechando o arquivo..." << endl;
    arqaluno.close();





    Aluno a1(w,x,y,z);
    a1.calcularMedia();
    a1.mostrar();



    return 0;
}
