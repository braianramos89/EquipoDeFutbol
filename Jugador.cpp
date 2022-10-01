//
// Created by braian on 30/09/2022.
//

#include "Jugador.h"

Jugador::Jugador(string nombre, string apellido, int edad, bool esTitular) : Persona(nombre,apellido,edad){

    this->esTitular = esTitular;

}

Jugador::~Jugador() {

}

void Jugador::mostrarDatos() {

    Persona::mostrarDatos();
   if (esTitular?cout<<"Es Titular"<<endl : cout<<"No es titular"<<endl);

}