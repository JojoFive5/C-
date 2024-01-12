
#include "Mammal.h"
#include "Animal.h"
#include <iostream>
using namespace std;

Mammal::Mammal(string _name, string _color, string _diet, string _habitat, string _sounds, bool _isPet, int _age, double _weight, double _height, string _furColor) :
        Animal(_name, _color, _diet, _habitat, _sounds, _isPet, _age, _weight, _weight),
        furColor(_furColor) {}

const string &Mammal::getFurColor() const {
    return furColor;
}

void Mammal::setFurColor(const string &furColor) {
    Mammal::furColor = furColor;
}

void Mammal::printInfo() {
    cout << endl << "Animal of type Mammal :" << endl;
    cout << "Name: " << getName() << endl;
    cout << "Color: " << getColor() << endl;
    cout << "Fur Color" << getFurColor() <<endl;
    cout << "Diet: " << getDiet() << endl;
    cout << "Habitat: " << getHabitat() << endl;
    cout << "Age: " << getAge() << endl;
    if (isPet1()){
        cout << "This animal is a pet" << endl;
    } else {
        cout << "This animal is not a pet" << endl;
    }
    cout << "Weight: " << getWeight() << endl;
    cout << "Height: " << getHeight() << endl;
}
