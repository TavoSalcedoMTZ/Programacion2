
#ifndef ZOOLOGICO_OSO_H
#define ZOOLOGICO_OSO_H


#include "Animal.h"

class Oso: public Animal {
public:
    Oso();
    Oso(Oso &rhs);
    Oso(std::string nombre, float peso, float altura, int edad, std::string tipo, std::string colorpelaje);
    ~Oso() override;
    std::string tipo;
    std::string colorpelaje;
    void makeSound() override;

};


#endif //ZOOLOGICO_OSO_H
