
#ifndef TEMPLATECPP_TECNICO_H
#define TEMPLATECPP_TECNICO_H
#include <iostream>
#include "Persona.h"


using namespace std;

class Tecnico : public Persona {

private:
    bool esNacional;

protected:
    int aniosExperiencia;

public:
    Tecnico(string nombre,string apellido, int edad, int aniosExperiencia, bool esNacional);
    ~Tecnico();
     void mostrarDatos();

};


#endif //TEMPLATECPP_TECNICO_H
