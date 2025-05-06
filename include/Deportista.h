/*
La superclase deportista se encarga de definir atributos y metodos basicos de todos los deportistas
*/
#ifndef DEPORTISTA_H
#define DEPORTISTA_H
#include "Carnet.h"
#include <iostream>

using namespace std;

class Deportista{
    private:

    protected:
    string equipo;
    int faltas;

    public:
    Deportista();
    Carnet carnet;
    void setFaltas(int faltas);
    int getFaltas();
    void setEquipo(string equipo);
    string getEquipo();
};

#endif