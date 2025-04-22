/*
La superclase deportista se encarga de definir atributos y metodos basicos de todos los deportistas
*/

#include <iostream>

using namespace std;

class Deportista{
    private:

    protected:
    string nombre, cedula, programa, genero;
    int edad, faltas;

    public:
    Deportista();
    
    void setNombre(string nombre);
    string getNombre();

    void setCedula(string cedula);
    string getCedula();

    void setEdad(int edad);
    int getEdad();

    void setPrograma(string programa);
    string getPrograma();

    void setGenero(string genero);
    string getGenero();

    void setFaltas(int faltas);
    int getFaltas();
};