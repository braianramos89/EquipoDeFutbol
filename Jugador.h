
#ifndef TEMPLATECPP_JUGADOR_H
#define TEMPLATECPP_JUGADOR_H
#include "Persona.h"
#include <iostream>

using namespace std;

class Jugador : public Persona {

    private:
        bool esTitular;


    public:

    Jugador(string nombre, string apellido,int edad, bool esTitular);
    ~Jugador();
    Jugador();
     void mostrarDatos();



};


#endif //TEMPLATECPP_JUGADOR_H
