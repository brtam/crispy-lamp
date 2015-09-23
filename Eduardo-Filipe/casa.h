//pucrs
//eduardo chaves _ eduardo_m_chaves@hotmail.com
//filipe jacobsen _ flpjacobsen@gmail.com
//Trabalho 1 - exercicio 1

/*Implemente uma casa. As características de uma casa nesta abstração referem-se apenas às suas dimensões, ou seja, toda casa possui largura e comprimento. Construa métodos que permitam dar valores iniciais aos seus atributos, bem como permitam alterá-los e consultá-los. Crie também um método que calcula e retorna a área da casa.*/

#include <iostream>

using namespace std;

class casa {

	friend std::ostream& operator<<(std::ostream& ,const casa&);

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
