//
// Created by sdedf on 01/05/2024.
//

#include "Tigre.h"
Tigre::Tigre()
        : Animal("N/A", 0, 0, 0), genero("n/a"), especie("n/a"){}

Tigre::Tigre(Tigre& rhs): Animal(rhs){
    genero=rhs.genero;
    especie=rhs.especie;
}

Tigre::Tigre(std::string nombre, float peso, float altura, int edad, std::string genero, std::string especie)
        : Animal(nombre, peso, altura, edad), genero(genero), especie(especie){}

Tigre::~Tigre() {
    std::cout <<"El Tigre fue destruido" <<std::endl;
}

void Tigre::makeSound() {
    std::cout << "ROARR" << std::endl;
}