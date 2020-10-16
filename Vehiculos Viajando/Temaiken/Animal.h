///////////////////////////////////////////////////////////
//  Animal.h
//  Implementation of the Class Animal
//  Created on:      16-oct.-2020 10:18:10
//  Original author: d4gam
///////////////////////////////////////////////////////////

#if !defined(EA_5C41C705_7E08_4dbe_83DC_14768607AD38__INCLUDED_)
#define EA_5C41C705_7E08_4dbe_83DC_14768607AD38__INCLUDED_
#include <string>
using namespace std;

class Animal
{
protected:
	string tipo;
	float peso;
	float altura;
	char sexo;
	const int cantidadPatas;
	static int CantidadAnimales;
	static int CantidadMachos;
	static int CantidadHembra;

public:
	Animal(string tipo,
	char sexo,
	int cantidadPatas);

	virtual ~Animal();
	virtual void Alimentar() = 0;
	bool operator==(string tipo);
};
#endif // !defined(EA_5C41C705_7E08_4dbe_83DC_14768607AD38__INCLUDED_)
