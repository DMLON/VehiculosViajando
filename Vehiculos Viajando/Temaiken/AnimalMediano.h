///////////////////////////////////////////////////////////
//  AnimalMediano.h
//  Implementation of the Class AnimalMediano
//  Created on:      16-oct.-2020 10:18:15
//  Original author: d4gam
///////////////////////////////////////////////////////////

#if !defined(EA_8CB2B3FE_0C7D_4c05_9953_F641A8F58880__INCLUDED_)
#define EA_8CB2B3FE_0C7D_4c05_9953_F641A8F58880__INCLUDED_

#include "Animal.h"

class AnimalMediano : public Animal
{

public:
	AnimalMediano(string tipo,
		char sexo,
		int cantidadPatas);
	virtual ~AnimalMediano();
	void Alimentar();

};
#endif // !defined(EA_8CB2B3FE_0C7D_4c05_9953_F641A8F58880__INCLUDED_)
