//
// Created by braian on 30/09/2022.
//

#include "Defensa.h"

Defensa::Defensa(string nombre, string apellido, int edad, bool esTitular) : Jugador(nombre,apellido,edad,esTitular) {

}

Defensa::~Defensa() {

}

void Defensa::mostrarDatos(){

    cout<<"Defensor"<<endl;
    Jugador::mostrarDatos();
    cout<<"-------------------------"<<endl;
}
