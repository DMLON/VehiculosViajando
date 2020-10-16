///////////////////////////////////////////////////////////
//  Habitat.h
//  Implementation of the Class Habitat
//  Created on:      16-oct.-2020 10:18:16
//  Original author: d4gam
///////////////////////////////////////////////////////////

#if !defined(EA_E1ED8FB8_3018_4ceb_AFCF_AE69ACF3EE1F__INCLUDED_)
#define EA_E1ED8FB8_3018_4ceb_AFCF_AE69ACF3EE1F__INCLUDED_

#include "Animal.h"
#include "Lista.h"
#include <string>

enum TipoHabitat {Grande,Chico,Mediano};

class Habitat
{
	int id;
	string Nombre;
	TipoHabitat tipoHabitat;
	cListaT<Animal> Animales;
public:
	Habitat(string nombre, int id, TipoHabitat tipoHabitat);
	virtual ~Habitat();
	void AgregarAnimal(Animal* animal);
	Animal* QuitarAnimal(string tipo);
	bool operator==(string Nombre);
};
#endif // !defined(EA_E1ED8FB8_3018_4ceb_AFCF_AE69ACF3EE1F__INCLUDED_)
