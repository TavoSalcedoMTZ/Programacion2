
#ifndef ZOOLOGICO_BALLENA_H
#define ZOOLOGICO_BALLENA_H

#include "Animal.h"

class Ballena: public Animal {
public:
    Ballena();
    Ballena(Ballena &rhs);
    Ballena(std::string nombre, float peso, float altura, int edad, bool acuatica, std::string especie);
    ~Ballena() override;
    bool acuatica;
    std::string especie;
    void makeSound() override;

};


#endif //ZOOLOGICO_BALLENA_H
