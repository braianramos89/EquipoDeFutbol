#ifndef TEMPLATECPP_DEFENSA_H
#define TEMPLATECPP_DEFENSA_H
#include "Jugador.h"
#include <iostream>

using namespace std;

class Defensa : public Jugador {

    public:
        Defensa(string nombre, string apellido, int edad, bool esTitular);
        ~Defensa();
        Defensa();
         void mostrarDatos();


};


#endif //TEMPLATECPP_DEFENSA_H
