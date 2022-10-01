#ifndef TEMPLATECPP_PORTERO_H
#define TEMPLATECPP_PORTERO_H
#include "Jugador.h"
#include <iostream>

using namespace std;

class Portero : public Jugador {

protected:
    int golesRecibidos;

public:

    Portero(string nombre, string apellido, int edad, bool esTitular, int golesRecibidos);
    ~Portero();
     void mostrarDatos();

};





#endif //TEMPLATECPP_PORTERO_H
