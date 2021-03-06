
/*
Voce é o dono de uma loja de materiais e precisa manter um inventario que podera informar quais e quantas ferramentas você possui,e o custo de cada uma.
Escreva um programa que inicialize o arquivo "hardware.dat" para 100 registros vazios, e permita que você ensira os dados referentes a cada ferramenta,e liste todas as suas ferramentas ,exclua um registro para a ferramenta que não possui mais e atualize QUALQUER informação no arquivo.
O numero de indentificação da ferramenta devera ser o numero do registro
use a informação a seguir para iniciar seu arquivo.

#registro	nome			quantidade 	custo
#3		furadeira		7		57,98
#17		Martelo			26		11,99
#24		serrote			21		11,00
#39		cortador de grama	3		79,50
#56		serra eletrica		18		99,99
#68		chave de fenda		106		6,99
#77		marreta			11		21,50
#83		chave inglesa		34		7,50



//Programação para engenharia II 2015/2
//////////////////////////////////////// marcelo.navarro@acad.pucrs.br */
//////////////////////////////////////// br_tam@hotmail.com */


# include <iostream>
# include <fstream>
# include <string>

using namespace std;

class Ferramenta
{
    friend std::ostream& operator<<(std::ostream&,const Ferramenta&);

private:
    int Registro;
    string Nome;
    int Quantidade;
    float Custo;

public:
    Ferramenta ();//FIXME

    Ferramenta setFerramenta();

};

Ferramenta::Ferramenta()
{
    Nome = "Nome";
    Registro = 0;
    Quantidade = 0;
    Custo = 0;
}

std::ostream& operator<<(std::ostream& s,const Ferramenta& f)
{
    s<<"[ Registro "<<f.Registro<<", "<< f.Nome <<", Quantidade = "<< f.Quantidade <<", R$"<< f.Custo <<"]"<<endl;

    return s;
}


Ferramenta Ferramenta::setFerramenta()
{
    int r,q;
    string n;
    float c;
    Ferramenta V[6];

    ifstream entrada;
    entrada.open("dados.txt", ios::out );
    for(int i=0; i<=6; i++)
    {
        entrada>>r>>n>>q>>c;
        V[i].Registro = r;
        V[i].Nome = n;
        V[i].Quantidade = q;
        V[i].Custo = c;
    }
return V;
}


int main (void)
{

    Ferramenta f[6];
    cout<<f<<endl;
    f.setFerramenta();
    cout<<f<<endl;
    cout<<"Ninguem facilita tanto!!"<<endl;
    return 0;

}
