///////////////////////////////////////////////////////////
//  Habitat.cpp
//  Implementation of the Class Habitat
//  Created on:      16-oct.-2020 10:18:16
//  Original author: d4gam
///////////////////////////////////////////////////////////

#include "Habitat.h"
#include "AnimalChico.h"
#include "AnimalGrande.h"
#include "AnimalMediano.h"


Habitat::Habitat(string nombre, int id, TipoHabitat tipoHabitat){
    Nombre = nombre;
    this->id = id;
    this->tipoHabitat = tipoHabitat;
}



Habitat::~Habitat(){

}

void Habitat::AgregarAnimal(Animal* animal)
{
    //Verificar que sea != null
    AnimalGrande* ptr_grande = dynamic_cast<AnimalGrande*>(animal);
    AnimalMediano* ptr_med = dynamic_cast<AnimalMediano*>(animal);
    AnimalChico* ptr_chico = dynamic_cast<AnimalChico*>(animal);
    //Verificar si almaceno animales grandes, pequeños o chicos en mi habitat
    switch (tipoHabitat)
    {
    case Grande:
        if (ptr_grande != NULL) {
            if (Animales.getCA() < 3)
                Animales.AgregarItem(animal);
        }
        break;
    case Chico:
        if (ptr_chico != NULL) {
            if (Animales.getCA() < 7)
                Animales.AgregarItem(animal);
        }
        break;
    case Mediano:
        if (ptr_med != NULL) {
            if (Animales.getCA() < 5)
                Animales.AgregarItem(animal);
        }
        break;
    default:
        break;
    }

    switch (tipoHabitat)
    {
    case Grande:
        break;
    case Chico:
        break;
    case Mediano:
        break;
    default:
        break;
    }


}

Animal* Habitat::QuitarAnimal(string tipo)
{
    return Animales.Quitar(Animales.BuscarItem(tipo));
}

bool Habitat::operator==(string Nombre)
{
    return this->Nombre== Nombre;
}
