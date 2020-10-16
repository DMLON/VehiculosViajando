///////////////////////////////////////////////////////////
//  Zoo.h
//  Implementation of the Class Zoo
//  Created on:      16-oct.-2020 10:18:17
//  Original author: d4gam
///////////////////////////////////////////////////////////

#if !defined(EA_E0C96CBF_54F2_465a_A293_B2AA36F6CB87__INCLUDED_)
#define EA_E0C96CBF_54F2_465a_A293_B2AA36F6CB87__INCLUDED_

#include "Habitat.h"
#include "Lista.h"

class Zoo
{
	cListaT<Habitat> Habitats;
public:
	Zoo();
	~Zoo();
	

};
#endif // !defined(EA_E0C96CBF_54F2_465a_A293_B2AA36F6CB87__INCLUDED_)
