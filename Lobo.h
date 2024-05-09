//
// Created by sdedf on 01/05/2024.
//

#ifndef ZOOLOGICO_LOBO_H
#define ZOOLOGICO_LOBO_H
#include "Animal.h"

class Lobo: public Animal {
public:
    Lobo();
    Lobo(Lobo &rhs);
    Lobo(std::string nombre, float peso, float altura, int edad, bool manada, std::string colorpelaje);
    ~Lobo() override;
    bool manada;
std::string colorpelaje;
    void makeSound() override;

};


#endif //ZOOLOGICO_LOBO_H
