//
// Created by braian on 30/09/2022.
//

#include "Delantero.h"

Delantero::Delantero(string nombre, string apellido, int edad, bool esTitular, int golesAnotados) : Jugador(nombre,apellido,edad,esTitular) {

    this->golesAnotados = golesAnotados;

}

Delantero::~Delantero() {

}

void Delantero::mostrarDatos() {

    cout<<"\nDelantero: "<<endl;
    Jugador::mostrarDatos();
    cout<<"Goles anotados: "<<golesAnotados<<endl;

}

Delantero::Delantero() {

}


