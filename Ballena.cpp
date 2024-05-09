//
// Created by sdedf on 01/05/2024.
//

#include "Ballena.h"

Ballena::Ballena()
        : Animal("N/A", 0, 0, 0), acuatica(false), especie("n/a"){}

Ballena::Ballena(Ballena& rhs): Animal(rhs){
    acuatica=rhs.acuatica;
    especie=rhs.especie;
}

Ballena::Ballena(std::string nombre, float peso, float altura, int edad, bool acuatica, std::string especie)
        : Animal(nombre, peso, altura, edad), acuatica(acuatica), especie(especie){}

Ballena::~Ballena() {
    std::cout <<"Ballena fue destruida" <<std::endl;
}

void Ballena::makeSound() {
    std::cout << "CANTOO" << std::endl;
}