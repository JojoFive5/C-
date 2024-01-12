

#include "Reptile.h"
#include "Animal.h"
#include <string>
#include <iostream>
using namespace std;

Reptile::Reptile(string _name, string _color, string _diet, string _habitat, string _sounds, bool _isPet, int _age, double _weight, double _height, string _scalePattern) :
        Animal(_name, _color, _diet, _habitat, _sounds, _isPet, _age, _weight, _weight),
        scalePattern(_scalePattern) {};

const string &Reptile::getScalePattern() const {
    return scalePattern;
}

void Reptile::setScalePattern(const string &scalePattern) {
    Reptile::scalePattern = scalePattern;
}

void Reptile::printInfo() {
    cout << endl << "Animal of type Reptile :" << endl;
    cout << "Name: " << getName() << endl;
    cout << "Color: " << getColor() << endl;
    cout << "Diet: " << getDiet() << endl;
    cout << "Habitat: " << getHabitat() << endl;
    if (isPet1()){
        cout << "This animal is a pet" << endl;
    } else {
        cout << "This animal is not a pet" << endl;
    }
    cout << "Age: " << getAge() << endl;
    cout << "Weight: " << getWeight() << endl;
    cout << "Height: " << getHeight() << endl;
    cout << "Scale Pattern: " << getScalePattern() << endl;
}