//PUCRS
//Eduardo Artioli

/* Diametro, cricunferencia e area de um circulo. Escreva um programa que leia o raio de um circulo ( como um valor float) e calcule e imprima o diametro, a cricunferencia e a area. Use o valor 3.14159 para pi..*/

#include <fstream>   	// para usar file streams (ifstream,ofstream)
#include <iostream>	// para usar cin,cout
#include <iomanip>	// para usar manipuladores (setw, right, ...)
#include <cstdlib>


using namespace std;

class circulo
{

//	friend std::ostream& operator<<(std::ostream& ,const juro&);
 
	private: 
		float raio;
	public:
		circulo (float r);
		circulo ();
		float diametro ();
		float perimetro ();
		float area ();
		void consulta();
	};

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

circulo::circulo(float r)
{
	raio=r;
	
}

float circulo :: diametro()
{	
	float a = raio * 2;
	return a;

	}

float circulo :: perimetro()
{	
	float a = diametro() * 3.14159;
	return a;

	}

float circulo :: area()

{	
	float a = raio * raio * 3.14159;
	return a;

	}

	void circulo :: consulta()
{
	cout << " raio =" << raio << endl;
	cout << " diametro =" << diametro() << endl;
	cout << " perimetro =" << perimetro() << endl;
	cout << " area =" << area() << endl;
	
}



















