//
// Created by braian on 30/09/2022.
//

#include "EquipoFutbol.h"

EquipoFutbol::EquipoFutbol(string nombreEquipo, string pais) {
    this->nombreEquipo = nombreEquipo;
    this->pais = pais;
    this->tecnico = nullptr;
    this->portero = nullptr;
    this->mediocampo = nullptr;
    this->delantero = nullptr;
    this->defensa = nullptr;

}


EquipoFutbol::~EquipoFutbol() {

}

EquipoFutbol::EquipoFutbol(string nombreEquipo, string pais, Tecnico **pTecnico, Portero **pPortero,
                            Mediocampo **pMediocampo, Delantero **pDelantero, Defensa **pDefensa) {

    this->nombreEquipo = nombreEquipo;
    this->pais = pais;

}

void EquipoFutbol::imprimir() {
    cout<<"Nombre del equipo: "<<this->nombreEquipo<<endl;
    cout<<"Pais: "<<this->pais<<endl;
    cout<<"Tecnico: "<<endl;
    tecnico->mostrarDatos();
    cout<<"Portero: "<<endl;
    portero->mostrarDatos();

    cout<<"Mediocampo: "<<endl;
    for (int i = 0; i <= 3; ++i) {
        mediocampo[i];
    }
    cout<<"Delantero: "<<endl;
    for (int i = 0; i <= 2; ++i) {
        delantero[i].mostrarDatos();
    }
    cout<<"Defensa: "<<endl;
    for (int i = 0; i <= 3; ++i) {
        defensa[i].mostrarDatos();
    }


}



