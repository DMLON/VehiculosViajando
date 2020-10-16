///////////////////////////////////////////////////////////
//  AnimalChico.cpp
//  Implementation of the Class AnimalChico
//  Created on:      16-oct.-2020 10:18:12
//  Original author: d4gam
///////////////////////////////////////////////////////////

#include "AnimalChico.h"
#include <iostream>
using namespace std;


AnimalChico::AnimalChico(string tipo,
	char sexo,
	int cantidadPatas):Animal(tipo,sexo,cantidadPatas){
	
	//Transformo tipo en minuscula

	if (tipo != "mono titi" && tipo != "flamenco")
		throw new exception("Tipo solo puede ser mono titi o flamenco");

	if (tipo == "mono titi") {
		if (sexo == 'M') {
			peso = 0.256f;
			altura = 0.188f;
		}
		else {
			peso = 0.256f;
			altura = 0.185f;
		}
	}

}



AnimalChico::~AnimalChico(){

}

void AnimalChico::Alimentar()
{
	if (peso >= peso * 0.5)
		return;
	peso += peso * 0.1;
	altura += altura * 0.1;
	cout << "Alimenté a animal chico";
}
