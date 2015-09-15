//pucrs
//eduardo chaves _ eduardo_m_chaves@hotmail.com
//filipe jacobsen _ flpjacobsen@gmail.com
//Trabalho 1 - exercicio 1

/*Implemente uma casa. As características de uma casa nesta abstração referem-se apenas às suas dimensões, ou seja, toda casa possui largura e comprimento. Construa métodos que permitam dar valores iniciais aos seus atributos, bem como permitam alterá-los e consultá-los. Crie também um método que calcula e retorna a área da casa.*/

#include <iostream>
#include <fstream>


using namespace std;

class casa {

//	friend std::ostream& operator<<(std::ostream& ,const casa&);
 
	private: 
		float largura;
		float comprimento;
	public:
		casa (float larg, float comp);
		casa ();
		void redimencionar (float larg, float comp);
		void consulta();
		float area();
};

int main()
{
	// Cria input file stream (ifstream)
	ifstream arqcasa;
  
	cout << "Abrindo arquivo texto..." << endl;

	// Abre arquivo
	arqcasa.open( "teste.txt" , ios::in );

	// Se houver erro, sai do programa
	if (!arqcasa.is_open())
	{
	cout << "Erro fatal!" << endl;
		return(1);		// Aborta programa
	}
	
	float x, y;
	
	arqcasa >> x >> y; 

	cout << "Fechando o arquivo..." << endl;
	arqcasa.close();


	casa a, b, c(x,y);
	
	a.consulta();
	b.consulta();
	c.consulta();

	a.redimencionar(15,10);
	b.redimencionar(22,30);	

	a.consulta();
	b.consulta();
	c.consulta();

	
	return 0;
}


casa :: casa(float larg, float comp)
{
	largura = larg;
	comprimento = comp;
}

casa :: casa ()
{
	largura=1;
	comprimento=1;
}

void casa :: redimencionar(float larg, float comp)
{
	largura = larg;
	comprimento = comp;
}

float casa :: area ()
{
	float a=largura*comprimento;
	return a;
}

void casa :: consulta()
{
	cout << "[L=" << largura << ", C=" << comprimento << endl;
}

/*std::ostream& operator<<(std::ostream& s, const casa& c)
{
s << "[L=" << c.largura << ", C=" << c.comprimento << "]";
return s;
}*/
