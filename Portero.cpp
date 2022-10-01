//
// Created by braian on 30/09/2022.
//

#include "Portero.h"

Portero::Portero(string nombre, string apellido, int edad, bool esTitular, int golesRecibidos) : Jugador(nombre,apellido,edad,esTitular) {

    this->golesRecibidos = golesRecibidos;

}

Portero::~Portero() {

}

void Portero::mostrarDatos() {

    Jugador::mostrarDatos();
    cout<<"Goles recibidos: "<<golesRecibidos<<endl;

}
