#include "Animal.h"

Animal::Animal() {
    this-> nombre="a";
    this->peso=0;
    this-> altura=0;
    this->edad=0;
}

Animal::Animal(Animal &rhs) {
    nombre=rhs.nombre;
    peso=rhs.peso;
    altura=rhs.altura;
    edad=rhs.edad;
}
Animal::Animal(std::string nombre, float peso, float altura, int edad) {
    this->nombre=nombre;
    this->peso=peso;
    this->altura=altura;
    this->edad=edad;
}
Animal::~Animal(){
    std::cout<<"El animal fue destruido"<<std::endl;
}

void Animal::makeSound() {
    std::cout<<"Sonido de Animal"<<std::endl;
}