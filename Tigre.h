//
// Created by sdedf on 01/05/2024.
//

#ifndef ZOOLOGICO_TIGRE_H
#define ZOOLOGICO_TIGRE_H

#include "Animal.h"

class Tigre: public Animal {
public:
    Tigre();
    Tigre(Tigre &rhs);
    Tigre(std::string nombre, float peso, float altura, int edad, std::string genero, std::string especie);
    ~Tigre() override;
    std::string genero;
    std::string especie;
    void makeSound() override;

};

#endif //ZOOLOGICO_TIGRE_H
