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


