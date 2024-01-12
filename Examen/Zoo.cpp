
#include "Zoo.h"
#include "Animal.h"
#include "Bird.h"
#include "Mammal.h"
#include "Reptile.h"
#include <iostream>
#include <algorithm>
using namespace std;

int Zoo::MAX_CAPACITY = 25;

Zoo::Zoo(string _name):
name(_name) {
}

const string &Zoo::getName() const {
    return name;
}

void Zoo::setName(const string &name) {
    Zoo::name = name;
}

void Zoo::addAnimal(Animal animal) {
    if (animals.size() < MAX_CAPACITY) {
        auto position = std::lower_bound(animals.begin(), animals.end(), animal, [](const Animal &a1, const Animal &a2) {
            return a1.getName() < a2.getName();
        });
        animals.insert(position, animal);
    } else {
        cout << "The zoo is full" << endl;
    }
}

void Zoo::listAnimals() {
    for (int i = 0; i < animals.size(); ++i) {
        animals[i].printInfo();
    }
}

//We try to implement a recursive binarysearch function to find the index because the complexity of this algorithm is O(log n)
int Zoo::searchAnimalByName_rec(string name, int start, int end) {
    if (start > end) {
        return -1;
    }
    int mid = start + (end - start) / 2;
    if (animals[mid].getName() == name) {
        return mid;
    } else if (animals[mid].getName() < name) {
        return searchAnimalByName_rec(name, mid + 1, end);
    } else {
        return searchAnimalByName_rec(name, start, mid - 1);
    }
}

int Zoo::searchAnimalByName(string name) {
    int index = Zoo::searchAnimalByName_rec(name, 0, animals.size() - 1);
    if (index == -1) {
        cout << "Animal not found" << endl;
    } else {
        cout << "Animal found at position " << index << endl;
    }
}

void Zoo::removeAnimal(string name) {
    int index = Zoo::searchAnimalByName_rec(name, 0, animals.size() - 1);
    if (index == -1) {
        cout << "Animal not found" << endl;
    } else {
        animals.erase(animals.begin() + index);
        delete &animals[index];
    }
}

