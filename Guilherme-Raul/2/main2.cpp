#include <iostream>
#include "Salario.h"
#include <fstream>

using namespace std;


int main()
{


    int x, y;

    ifstream myfile;
    myfile.open ("test2.txt", ios::in);
    myfile >> x >> y;




    while (x != -1){


    Salario t(x,y);
    t.calculo();

    myfile >> x >> y;

    }

    myfile.close();

}











