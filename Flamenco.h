//
// Created by sdedf on 01/05/2024.
//

#ifndef ZOOLOGICO_FLAMENCO_H
#define ZOOLOGICO_FLAMENCO_H


#include "Animal.h"

class Flamenco: public Animal {
public:
    Flamenco();
    Flamenco(Flamenco &rhs);
    Flamenco(std::string nombre, float peso, float altura, int edad, std::string tipo, std::string colorplumaje);
    ~Flamenco() override;
    std::string tipo;
    std::string colorplumaje;
    void makeSound() override;

};



#endif //ZOOLOGICO_FLAMENCO_H
