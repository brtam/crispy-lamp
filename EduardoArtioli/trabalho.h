#include <fstream>   
#include <iostream>	
#include <iomanip>	
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
