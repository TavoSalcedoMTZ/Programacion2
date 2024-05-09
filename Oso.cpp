
#include "Oso.h"
Oso::Oso()
        : Animal("N/A", 0, 0, 0), tipo("n/a"), colorpelaje("n/a"){}

Oso::Oso(Oso& rhs): Animal(rhs){
    tipo=rhs.tipo;
    colorpelaje=rhs.colorpelaje;
}

Oso::Oso(std::string nombre, float peso, float altura, int edad, std::string tipo, std::string colorpelaje)
        : Animal(nombre, peso, altura, edad), tipo(tipo), colorpelaje(colorpelaje){}

Oso::~Oso() {
    std::cout <<"El Oso fue destruido" <<std::endl;
}

void Oso::makeSound() {
    std::cout << "ROARR" << std::endl;
}