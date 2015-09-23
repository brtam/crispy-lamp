#include <fstream> 
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "trabalho.h"

int main()
{
	ifstream arqraio;  
	cout << "Abrindo arquivo texto..." << endl;
	arqraio.open( "teste.txt" , ios::in );
	if (!arqraio.is_open())
	{
	cout << "Erro fatal!" << endl;
		return(1);
	}
	
	float x;
	
	arqraio >> x;

	cout << "Fechando o arquivo..." << endl;
	arqraio.close();

	circulo a(x);	
	a.diametro();	
	a.consulta();

	
	return 0;
}
