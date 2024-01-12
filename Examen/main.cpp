

#include "Animal.h"
#include "Mammal.h"
#include "Bird.h"
#include "Reptile.h"
#include "Zoo.h"

int main(){
    Mammal m1("Leo", "Golden", "Tawny", "Carnivor", "GrassLand", false, 5, 10, 0.8, "Black and wight");
    Bird b1("???", "???", "???", "???d", "???", true, 50, 10, 1, 0.8);
    Reptile r1("???", "???", "???", "???d", "???", true, 50, 10, 1, 0.8, "azerty");
    Zoo z1("Zoo n°1");
    z1.addAnimal(b1);
    z1.addAnimal(m1);
    z1.listAnimals();
    z1.listAnimals();
    z1.searchAnimalByName("Eagle");
    z1.removeAnimal("Eagle");
    z1.listAnimals();
}