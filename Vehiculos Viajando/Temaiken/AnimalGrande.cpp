///////////////////////////////////////////////////////////
//  AnimalGrande.cpp
//  Implementation of the Class AnimalGrande
//  Created on:      16-oct.-2020 10:18:13
//  Original author: d4gam
///////////////////////////////////////////////////////////

#include "AnimalGrande.h"
#include <iostream>
using namespace std;

AnimalGrande::AnimalGrande(){

}



AnimalGrande::~AnimalGrande(){

}

void AnimalGrande::Alimentar()
{
	if (peso >= peso * 0.3)
		return;
	peso += peso * 0.1;
	altura += altura * 0.1;
	cout << "Alimenté a animal grande";
}
