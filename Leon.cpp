#include "Leon.h"
#include <iostream>

Leon::Leon()
        : Animal("N/A", 0, 0, 0), manada(false), melena(true){}

Leon::Leon(Leon& rhs): Animal(rhs){
    manada=rhs.manada;
    melena=rhs.melena;
}

Leon::Leon(std::string nombre, float peso, float altura, int edad, bool manada, bool melena)
        : Animal(nombre, peso, altura, edad), manada(manada), melena(melena){}

Leon::~Leon() {
    std::cout <<"Leon destruido" <<std::endl;
}

void Leon::makeSound() {
    std::cout << "ROARRRR" << std::endl;
}