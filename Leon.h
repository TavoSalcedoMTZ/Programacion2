//
// Created by sdedf on 01/05/2024.
//

#ifndef ZOOLOGICO_LEON_H
#define ZOOLOGICO_LEON_H
#include "Animal.h"

class Leon: public Animal {
public:
    Leon();
    Leon(Leon &rhs);
    Leon(std::string nombre, float peso, float altura, int edad, bool manada, bool melena);
    ~Leon();
    bool manada;
    bool melena;
    void makeSound() override;

};


#endif
