#ifndef TEMPLATECPP_PERSONA_H
#define TEMPLATECPP_PERSONA_H
#include <iostream>


using namespace std;

class Persona {

private:
    string nombre;
    string apellido;
    int edad;
public:
    Persona(string nombre, string apellido, int edad);
    ~Persona();
    Persona();
    virtual  void mostrarDatos();
};


#endif //TEMPLATECPP_PERSONA_H
