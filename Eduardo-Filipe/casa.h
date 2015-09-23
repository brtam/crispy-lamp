//pucrs
//eduardo chaves _ eduardo_m_chaves@hotmail.com
//filipe jacobsen _ flpjacobsen@gmail.com
//Trabalho 1 - exercicio 1

/*Implemente uma casa. As caracter�sticas de uma casa nesta abstra��o referem-se apenas �s suas dimens�es, ou seja, toda casa possui largura e comprimento. Construa m�todos que permitam dar valores iniciais aos seus atributos, bem como permitam alter�-los e consult�-los. Crie tamb�m um m�todo que calcula e retorna a �rea da casa.*/

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
