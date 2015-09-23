// TRABALHO 1 - PROGRAMAÇÃO PARA ENGENHARIA 2
// JULIO LEAL E OCTAVIO CARPES
// JULIO.LEAL@ACAD.PUCRS.BR e OCTAVIO.CARPES10@GMAIL.COM


/*Implemente um controle de elevador. O elevador armazena o número do andar onde está parado. Devem existir métodos para:

    Deslocar o elevador um andar para cima;
    Deslocar o elevador um andar para baixo;
    Retornar o andar onde o elevador está no momento.

No programa principal, crie 2 elevadores e faça alguns movimentos (subir e/ou descer) com ambos. Exiba o andar final de cada um. 
*/


#include<iostream>

using namespace std;

class elevador{

private:
	int andares;

public:
	elevador();	
 	
	void subir();
	
	void descer();
	
	int getandar();
};

elevador::elevador()
{
andares = 1;
}

int elevador::getandar()
{
return andares; 
}

void elevador::subir()
{
	andares = andares + 1;
}


void elevador::descer()
{
	andares = andares - 1;
}

int main()
{

	elevador e1(), e2();

	cout << andares << endl;

	e1.subir();
	e2.subir();	

	e1.descer();
	e2.descer();

return 0;
}

