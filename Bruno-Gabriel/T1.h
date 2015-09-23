#include<iostream>

class Automovel{

friend std::ostream& operator<<(std::ostream&, const Automovel&);

public:
	int Distancia;
	int Litros;

	float getConsumo();
	void setDistancia(int d);
	void setLitros(int l);
	Automovel(int d, int l);
	Automovel();
};

