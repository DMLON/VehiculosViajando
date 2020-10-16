///////////////////////////////////////////////////////////
//  Zoo.cpp
//  Implementation of the Class Zoo
//  Created on:      16-oct.-2020 10:18:17
//  Original author: d4gam
///////////////////////////////////////////////////////////

#include "Zoo.h"


Zoo::Zoo(){
	for (int i = 0; i < 10; ++i) {
		Habitats.AgregarItem(new Habitat(to_string(i), i));
	}
}



Zoo::~Zoo(){

}