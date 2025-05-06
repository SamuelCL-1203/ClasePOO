#include "Carnet.h"

Carnet::Carnet(){
    nombre = "";
    documento = "";
    codigo = "";
    añoNacimiento = "";
    programa = "";
    genero = "";
}

void Carnet::setNombre(string nombre){
    this -> nombre = nombre;
}
string Carnet::getNombre(){
    return nombre;
}

void Carnet::setDocumento(string documento){
    this -> documento = documento;
}
string Carnet::getDocumento(){
    return documento;
}

void Carnet::setCodigo(string codigo){
    this -> codigo = codigo;
}
string Carnet::getCodigo(){
    return codigo;
}

void Carnet::setaAñoNacimiento(string añoNacimiento){
    this -> añoNacimiento = añoNacimiento;
}
string Carnet::getAñoNacimiento(){
    return añoNacimiento;
}

void Carnet::setPrograma(string programa){
    this -> programa = programa;
}
string Carnet::getPrograma(){
    return programa;
}

void Carnet::setGenero(string genero){
    this -> genero = genero;
}
string Carnet::getGenero(){
    return genero;
}