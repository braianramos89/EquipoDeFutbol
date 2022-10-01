//
// Created by braian on 30/09/2022.
//

#include "Mediocampo.h"

Mediocampo::Mediocampo(string nombre, string apellido, int edad, bool esTitular, int asistencias): Jugador(nombre,apellido,edad,esTitular) {

    this->asistencias = asistencias;

}

Mediocampo::~Mediocampo() {

}

 void Mediocampo::mostrarDatos() {

    Jugador::mostrarDatos();
    cout<<"Asistencias: "<<asistencias<<endl;

}
