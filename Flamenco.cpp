//
// Created by sdedf on 01/05/2024.
//

#include "Flamenco.h"
Flamenco::Flamenco()
        : Animal("N/A", 0, 0, 0), tipo("n/a"), colorplumaje("n/a"){}

Flamenco::Flamenco(Flamenco& rhs): Animal(rhs){
    tipo=rhs.tipo;
    colorplumaje=rhs.colorplumaje;
}

Flamenco::Flamenco(std::string nombre, float peso, float altura, int edad, std::string tipo, std::string colorplumaje)
        : Animal(nombre, peso, altura, edad), tipo(tipo), colorplumaje(colorplumaje){}

Flamenco::~Flamenco() {
    std::cout <<"El Flamenco fue destruido" <<std::endl;
}

void Flamenco::makeSound() {
    std::cout << "Chillido" << std::endl;
}