
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
    Mediocampo* mediocampo;
    Delantero* delantero;
    Defensa* defensa;

public:

    EquipoFutbol(string nombreEquipo, string pais);
    EquipoFutbol(string nombreEquipo, string pais, Tecnico *pTecnico[0], Portero *pPortero[0],Mediocampo *pMediocampo[3], Delantero *pDelantero[1], Defensa *pDefensa[3]);

    ~EquipoFutbol();
    void imprimir();


};


#endif //TEMPLATECPP_EQUIPOFUTBOL_H
