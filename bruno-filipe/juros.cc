//pucrs
//Bruno _ brunoboris@gmail.com
//filipe jacobsen _ flpjacobsen@gmail.com
//Trabalho 1 - exercicio 4.120


#include <iostream>
#include <fstream>


using namespace std;

class emprestimo 
{

//	friend std::ostream& operator<<(std::ostream& ,const juro&);
 
	private: 
		float principal;
		float taxa;
		float dias;
	public:
		emprestimo (float princ, float tx, float d);
		emprestimo ();
		float juro ();
		void consulta();
	};

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
emprestimo::emprestimo(float princ, float tx, float d)
{	principal=princ;
	taxa=tx;
	dias=d;
	
}
emprestimo::emprestimo()
{	principal=1000;
	taxa=0.1;
	dias=90;
	}
float emprestimo :: juro()
{		float a = principal * taxa * dias/365;
		return a;
	}
	void emprestimo :: consulta()
{
	cout << "valor principal=" << principal << endl;
	cout << "taxa=" << taxa << endl;
	cout << "dias=" << dias << endl;
	cout << "juro=" << juro() << endl;
	
}

