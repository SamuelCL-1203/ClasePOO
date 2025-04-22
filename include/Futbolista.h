#ifndef FUTBOLISTA_H
#define FUTBOLISTA_H
#include "Deportista.h"
#include <iostream>

using namespace std;

class Futbolista:Deportista{
    private:
    int goles, asistencias;
    string posicion;

    protected:

    public:
    Futbolista();

    void setGoles(int goles);
    int getGoles();

    void setAsistencias(int aistencias);
    int getAsistenvias();

    void setPocision(string posicion);
    string getPosicion();
};

#endif