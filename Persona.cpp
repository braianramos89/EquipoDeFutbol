//
// Created by braian on 30/09/2022.
//

#include "Persona.h"

Persona::Persona(string nombre, string apellido, int edad) {
    this->nombre = nombre;
    this->apellido = apellido;
    this->edad = edad;

}

Persona::~Persona() {

}

void Persona::mostrarDatos() {

    cout<< "Nombre: " << nombre << endl;
    cout<< "Apellido: " << apellido << endl;
    cout<< "Edad: " << edad << endl;


}
