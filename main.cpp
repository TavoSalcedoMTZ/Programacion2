#include <iostream>
#include "Lobo.h"
#include "Tigre.h"
#include "Flamenco.h"
#include "Leon.h"
#include "Oso.h"
#include "Tortuga.h"
#include "Ballena.h"
int main() {

    Animal *anim;

    anim=new Tigre();
    anim -> makeSound();
    delete anim;

    anim=new Lobo();
    anim -> makeSound();
    delete anim;

    anim=new Flamenco();
    anim -> makeSound();
    delete anim;

    anim=new Leon();
    anim -> makeSound();
    delete anim;

    anim=new Oso();
    anim -> makeSound();
    delete anim;

    anim=new Tortuga();
    anim -> makeSound();
    delete anim;

    anim=new Ballena();
    anim -> makeSound();
    delete anim;
    /*
    Lobo a("Lobino",45.0f,1.2f,2,true,"Gris");
    a.makeSound();

    Tigre b("Tigrino",50.0f,1.5f,3,"macho","Bengala");
    b.makeSound();
    Flamenco c("FlaminHOY",15.3F,1.3F,1,"Flamenco Del Caribe","Rosa");
    c.makeSound();
    Leon d("Leon-o",60.3f,2.0f,2,true,true);
    d.makeSound();
    Oso e("Yogi",100.90f,2.5f,5,"Pardo","Cafe");
    e.makeSound();
    Tortuga f("Galapagus",8.0f,1.0f,1,true,true);
    f.makeSound();
    Ballena g("Shell",36000.00f,20.0f,1,true,"blanca");
    g.makeSound();
     */
    return 0;
}