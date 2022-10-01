//
// Created by braian on 30/09/2022.
//

#include "Tecnico.h"

Tecnico::Tecnico(string nombre, string apellido, int edad, int aniosExperiencia, bool esNacional):Persona(nombre,apellido,edad) {

    this->aniosExperiencia = aniosExperiencia;
    this->esNacional = esNacional;

}

Tecnico::~Tecnico() {

}

void Tecnico::mostrarDatos() {

    cout << "\nTecnico: " << endl;
    Persona::mostrarDatos();
    cout<< "Anios de experiencia: " << aniosExperiencia << endl;
    if (esNacional?cout<<"Es nacional"<<endl : cout<<"Es extranjero"<<endl);

}

Tecnico::Tecnico() {

}

