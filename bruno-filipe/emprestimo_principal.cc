//pucrs
//Bruno _ brunoboris@gmail.com
//filipe jacobsen _ flpjacobsen@gmail.com
//Trabalho 1 - exercicio 4.120


#include <iostream>
#include <fstream>
#include "emprestimo.h"

using namespace std;


int main()
{
	// Cria input file stream (ifstream)
	ifstream arqjuro;
  
	cout << "Abrindo arquivo texto..." << endl;

	// Abre arquivo
	arqjuro.open( "teste.txt" , ios::in );

	// Se houver erro, sai do programa
	if (!arqjuro.is_open())
	{
	cout << "Erro fatal!" << endl;
		return(1);		// Aborta programa
	}
	
	float x, y, z;
	
	arqjuro >> x >> y >> z;

	cout << "Fechando o arquivo..." << endl;
	arqjuro.close();


	emprestimo a, b, c(x,y,z);
	
	c.juro();
	
	c.consulta();

	
	return 0;
}
