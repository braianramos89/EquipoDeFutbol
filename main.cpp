#include <iostream>
#include "Jugador.h"
#include "Tecnico.h"
#include "Persona.h"
#include "Portero.h"
#include "Mediocampo.h"
#include "Defensa.h"
#include "Delantero.h"
#include "EquipoFutbol.h"




int main() {

    Defensa *defensas[4];
    Mediocampo *mediocampos[4];
    Delantero *delanteros[2];

    Tecnico *tecnico1 = new Tecnico("Carlos", "Queiroz", 66, 30, false);
    Portero *portero1 = new Portero("Davis", "Ospina", 30, true, 10);
    defensas[0] = new Defensa{"Yerry ", "Mina", 24, true};
    defensas[1] = new Defensa{"Davison", "Sánchez", 23, true};
    defensas[2] = new Defensa{"William", "Tesillo", 29, true};
    defensas[3] = new Defensa{"Stefan", "Medina", 29, true};
    mediocampos[0] = new Mediocampo{"Mateus", "Uribe", 28, true, 12};
    mediocampos[1] = new Mediocampo{"Wilmar", "Barrios", 25, true, 12};
    mediocampos[2] = new Mediocampo{"Juan Guillermo", "Cuadrado", 31, true, 10};
    mediocampos[3] = new Mediocampo{"James", "Rodriguez", 28, true, 32};
    delanteros[0] = new Delantero{"Radamel", "Falcao", 33, true, 15};
    delanteros[1] = new Delantero{"Luis", "Diaz", 21, true, 12};
    EquipoFutbol equipo1("Colombiano", "Colombia", tecnico1, portero1, mediocampos, delanteros, defensas);

    cout << "-------------------------" << endl;

    equipo1.imprimir();

    cout<<"-------------------------"<<endl;


    return 0;
}