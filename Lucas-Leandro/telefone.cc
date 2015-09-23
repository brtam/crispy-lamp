//Leandro(leandro-ie@hotmail.com) & Lucas(lucascherutti@gmail.com) Exercicio 2 - Telefone 11.13
#include<iostream>
#include<fstream>

using namespace std;

class Telefone {
private:
	int v[8];

public:
	Telefone(int w, int x, int y, int z, int a, int b, int c, int d);
	void mostrar();
};

Telefone::Telefone(int w, int x, int y, int z, int a, int b, int c, int d){

	v[0] = w;
	v[1] = x;
	v[2] = y;
	v[3] = z;
	v[4] = a;
	v[5] = b;
	v[6] = c;
	v[7] = d;
}

void Telefone::mostrar(){
	for (int i=0; i < 8; i++)
	{
		cout << v[i] << endl;
	}
}

int main() {
	
ifstream arqtelefone;
cout << "Abrindo arquivo texto..." << endl;
// Abre arquivo
arqtelefone.open( "arqtelefone.txt" , ios::in );
// Se houver erro, sai do programa
if (!arqtelefone.is_open())
{
cout << "Erro fatal!" << endl;
return(1); // Aborta programa
}
int w, x, y, z, a, b, c, d;
arqtelefone >> w >> x >> y >> z >> a >> b >> c >> d;
cout << "Fechando o arquivo..." << endl;
arqtelefone.close();

	Telefone t1(w, x, y, z, a, b, c, d);
	t1.mostrar();
return 0;
}
