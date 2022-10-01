#ifndef TEMPLATECPP_DELANTERO_H
#define TEMPLATECPP_DELANTERO_H
#include "Jugador.h"
#include <iostream>

using namespace std;

class Delantero : public Jugador{

protected:
    int golesAnotados;

public:
    Delantero(string nombre, string apellido, int edad, bool esTitular, int golesAnotados);
    ~Delantero();
    Delantero();
     void mostrarDatos();

};


#endif //TEMPLATECPP_DELANTERO_H
