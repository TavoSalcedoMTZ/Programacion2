#include "Lobo.h"
#include <iostream>

Lobo::Lobo()
        : Animal("N/A", 0, 0, 0), manada(false), colorpelaje("N/A"){}

Lobo::Lobo(Lobo& rhs): Animal(rhs){
    manada=rhs.manada;
    colorpelaje=rhs.colorpelaje;
}

Lobo::Lobo(std::string nombre, float peso, float altura, int edad, bool manada,  std::string colorpelaje)
        : Animal(nombre, peso, altura, edad), manada(manada), colorpelaje(colorpelaje){}

Lobo::~Lobo() {
    std::cout <<"Lobo destruido" <<std::endl;
}

void Lobo::makeSound() {
    std::cout << "AULLIDO" << std::endl;
}