#ifndef ZOOLOGICO_ANIMAL_H
#define ZOOLOGICO_ANIMAL_H

#include <string>
#include <iostream>
class Animal {
public:
    Animal();
    Animal(Animal &rhs);
    Animal(std::string nombre, float peso, float altura, int edad);
    virtual ~Animal();

    virtual void makeSound();

    std::string nombre;
    float peso;
    float altura;
    int edad;
};

#endif //ZOOLOGICO_ANIMAL_H
