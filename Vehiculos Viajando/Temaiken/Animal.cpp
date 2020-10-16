///////////////////////////////////////////////////////////
//  Animal.cpp
//  Implementation of the Class Animal
//  Created on:      16-oct.-2020 10:18:10
//  Original author: d4gam
///////////////////////////////////////////////////////////

#include "Animal.h"
#include <algorithm>
#include <cctype>
#include <string>

int Animal::CantidadAnimales=0;
int Animal::CantidadMachos=0;
int Animal::CantidadHembra=0;

Animal::Animal(string tipo,
	char sexo,
	int cantidadPatas):cantidadPatas(cantidadPatas){

	std::transform(tipo.begin(), tipo.end(), tipo.begin(),
		[](unsigned char c) { return std::tolower(c); });
	this->tipo = tipo;
	this->peso = peso;
	this->altura = altura;

	if (sexo != 'F' && sexo != 'M')
		throw new exception("Sexo incorrecto");
	this->sexo = sexo;
	if (sexo == 'M')
		CantidadMachos++;
	else
		CantidadHembra++;
	CantidadAnimales++;
}



Animal::~Animal(){
	if (sexo == 'M')
		CantidadMachos--;
	else
		CantidadHembra--;
	CantidadAnimales--;
}

bool Animal::operator==(string tipo)
{
    return this->tipo == tipo;
}
