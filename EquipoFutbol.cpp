//
// Created by braian on 30/09/2022.
//

#include "EquipoFutbol.h"

EquipoFutbol::EquipoFutbol(string nombreEquipo, string pais) {
    this->nombreEquipo = nombreEquipo;
    this->pais = pais;

}


EquipoFutbol::EquipoFutbol(string nombreEquipo, string pais, Tecnico *pTecnico, Portero *pPortero,
                           Mediocampo *pMediocampo[],
                           Delantero *pDelantero[], Defensa *pDefensa[]) : EquipoFutbol(nombreEquipo, pais) {

    this->tecnico = pTecnico;
    this->portero = pPortero;

    for (int i = 0; i < 4; ++i) {
        this->mediocampo[i] = pMediocampo[i];
    }
    for (int i = 0; i < 4; ++i) {
        this->defensa[i] = pDefensa[i];
    }
    for (int i = 0; i < 2; ++i) {
        this->delantero[i] = pDelantero[i];
    }
}

void EquipoFutbol::imprimir() {
    cout << "\nNombre del equipo: " << this->nombreEquipo << endl;
    cout << "\nPais: " << this->pais << endl;

    for (int i = 0; i < 1; i++) {
        cout << "\nTecnico: " << endl;
        this->tecnico[i].mostrarDatos();
    }
    for (int i = 0; i < 1; ++i) {
        cout << "\nPortero: " << endl;
        this->portero[i].mostrarDatos();
    }

    cout << "Mediocampo: " << endl;
    for (int i = 0; i < 4; ++i) {
        mediocampo[i]->mostrarDatos();
    }
    cout << "Delantero: " << endl;
    for (int i = 0; i < 2; ++i) {
        delantero[i]->mostrarDatos();
    }
    cout << "Defensa: " << endl;
    for (int i = 0; i <= 3; ++i) {
        defensa[i]->mostrarDatos();
    }
}

EquipoFutbol::EquipoFutbol() {

}

EquipoFutbol::~EquipoFutbol() {

}





