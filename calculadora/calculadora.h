#ifndef CALCULADORA_H
#define CALCULADORA_H
#include <vector>


class Calculadora{
private:
	void suma(int,int,int);
	void resta(int,int,int);
	void multi(int,int,int);
	void inversa(int,int);
	int euclidespp(std::vector<int>,int);

public:
	//Constructor y destructor
	Calculadora();
	~Calculadora();
	//Funciones de la calculadora
	void select();
			
};
#endif
