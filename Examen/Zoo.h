

#ifndef ZOO_H
#define ZOO_H

#include "Animal.h"
#include <string>
#include <vector>

class Zoo {
public:
    Zoo();
    Zoo(string name);
    Zoo(const Zoo &);

    const string &getName() const;

    void setName(const string &name);

    void addAnimal(Animal animal);

    void listAnimals();

    int searchAnimalByName(string name);

    void removeAnimal(string name);

    double averageAgeForType(string type);
private:
    string name;
    static int MAX_CAPACITY;
    vector<Animal> animals;

    int searchAnimalByName_rec(string name, int start, int end);
};


#endif 
