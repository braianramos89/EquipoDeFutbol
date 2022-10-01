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
    Tecnico* tecnico1[0];
    Portero* portero1[0];
    Defensa* defensa1[3];
    Mediocampo* mediocampo1[3];
    Delantero* delantero1[1];


    tecnico1[0] = new Tecnico("Carlos","Queiroz", 66, 30, false);
    tecnico1[0]->mostrarDatos();
    portero1[0] = new Portero{"Davis","Ospina", 30, true, 10};
    defensa1[0] = new Defensa{"Yerry ","Mina", 24, true};
    defensa1[1] = new Defensa{"Davison","Sánchez", 23, true};
    defensa1[2] = new Defensa{"William","Tesillo", 29, true};
    defensa1[3] = new Defensa{"Stefan","Medina", 29, true};
    mediocampo1[0] = new Mediocampo{"Mateus","Uribe", 28, true, 12};
    mediocampo1[1] = new Mediocampo{"Wilmar","Barrios", 25, true,12};
    mediocampo1[2] = new Mediocampo{"Juan Guillermo","Cuadrado", 31, true,10};
    mediocampo1[3] = new Mediocampo{"James","Rodriguez", 28, true,32};
    delantero1[0] = new Delantero{"Radamel","Falcao", 33, true, 15};
    delantero1[1] = new Delantero{"Luis","Diaz", 21, true, 12};
    EquipoFutbol equipo1("Colombiano","Colombia", tecnico1, portero1, mediocampo1, delantero1, defensa1);
    cout<<"-------------------------"<<endl;

    tecnico1[0]->mostrarDatos();

    cout<<"-------------------------"<<endl;

    return 0;
}
