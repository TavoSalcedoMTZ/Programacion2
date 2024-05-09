#include "Tortuga.h"
#include <iostream>

Tortuga::Tortuga()
        : Animal("N/A", 0, 0, 0), acuatica(false), caparazon(true){}

Tortuga::Tortuga(Tortuga& rhs): Animal(rhs){
    acuatica=rhs.acuatica;
    caparazon=rhs.caparazon;
}

Tortuga::Tortuga(std::string nombre, float peso, float altura, int edad, bool acuatica, bool caparazon)
        : Animal(nombre, peso, altura, edad), acuatica(acuatica), caparazon(caparazon){}

Tortuga::~Tortuga() {
    std::cout <<"Tortuga fue destruida" <<std::endl;
}

void Tortuga::makeSound() {
    std::cout << "Gruñido" << std::endl;
}