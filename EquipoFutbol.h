
#ifndef TEMPLATECPP_EQUIPOFUTBOL_H
#define TEMPLATECPP_EQUIPOFUTBOL_H
#include "Portero.h"
#include "Tecnico.h"
#include "Mediocampo.h"
#include "Delantero.h"
#include "Defensa.h"
#include <iostream>


using namespace std;


class EquipoFutbol {

private:


    string nombreEquipo;
    string pais;
    Tecnico *tecnico;
    Portero *portero;
    Mediocampo *mediocampo[4];
    Delantero *delantero[2];
    Defensa *defensa[4];

public:

    EquipoFutbol(string nombreEquipo, string pais);


public:
    EquipoFutbol(string nombreEquipo, string pais, Tecnico *pTecnico, Portero *pPortero, Mediocampo *pMediocampo[],
                 Delantero *pDelantero[], Defensa *pDefensa[]);

    ~EquipoFutbol();

    EquipoFutbol();

    void imprimir();


};


#endif //TEMPLATECPP_EQUIPOFUTBOL_H
