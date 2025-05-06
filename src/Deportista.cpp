#include "Deportista.h"

Deportista::Deportista(){
    faltas = 0;
    equipo = "";
}

void Deportista::setFaltas(int faltas){
    this -> faltas = faltas;
}
int Deportista::getFaltas(){
    return faltas;
}

void Deportista::setEquipo(string equipo){
    this -> equipo = equipo;
}
string Deportista::getEquipo(){
    return equipo;
}
