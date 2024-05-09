#ifndef ZOOLOGICO_TORTUGA_H
#define ZOOLOGICO_TORTUGA_H


#include "Animal.h"

class Tortuga: public Animal {
public:
    Tortuga();
    Tortuga(Tortuga &rhs);
    Tortuga(std::string nombre, float peso, float altura, int edad, bool acuatica, bool caparazon);
    ~Tortuga() override;
    bool acuatica;
    bool caparazon;
    void makeSound() override;

};



#endif //ZOOLOGICO_TORTUGA_H
