///////////////////////////////////////////////////////////
//  AnimalChico.h
//  Implementation of the Class AnimalChico
//  Created on:      16-oct.-2020 10:18:12
//  Original author: d4gam
///////////////////////////////////////////////////////////

#if !defined(EA_A3E857BE_F19E_4f2f_92AE_E89ADD9A7369__INCLUDED_)
#define EA_A3E857BE_F19E_4f2f_92AE_E89ADD9A7369__INCLUDED_

#include "Animal.h"

class AnimalChico : public Animal
{

public:
	AnimalChico(string tipo,
		char sexo,
		int cantidadPatas);
	virtual ~AnimalChico();
	void Alimentar();
};
#endif // !defined(EA_A3E857BE_F19E_4f2f_92AE_E89ADD9A7369__INCLUDED_)
