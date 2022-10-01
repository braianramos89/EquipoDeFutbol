#ifndef TEMPLATECPP_MEDIOCAMPO_H
#define TEMPLATECPP_MEDIOCAMPO_H
#include "Jugador.h"
#include <iostream>

using namespace std;


class Mediocampo: public Jugador {


protected:
    int asistencias;

public:
    Mediocampo(string nombre, string apellido, int edad, bool esTitular, int asistencias);
    ~Mediocampo();
    void mostrarDatos();
};


#endif //TEMPLATECPP_MEDIOCAMPO_H
