#ifndef CARNET_H
#define CARNET_H
#include <iostream>

using namespace std;

class Carnet{
    private:
    string nombre, documento, codigo, programa, genero, añoNacimiento;

    protected:

    public:
    Carnet();

    void setNombre(string nombre);
    string getNombre();

    void setDocumento(string documento);
    string getDocumento();

    void setCodigo(string codigo);
    string getCodigo();

    void setaAñoNacimiento(string añoNacimiento);
    string getAñoNacimiento();

    void setPrograma(string programa);
    string getPrograma();

    void setGenero(string genero);
    string getGenero();




};

#endif
