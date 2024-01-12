

#include "Bird.h"
#include "Animal.h"
#include <string>
#include <iostream>
using namespace std;

Bird::Bird(string _name, string _color, string _diet, string _habitat, string _sounds, bool _isPet, int _age, double _weight, double _height, double _wingspan) :
        Animal(_name, _color, _diet, _habitat, _sounds, _isPet, _age, _weight, _weight),
        wingspan(_wingspan) {};

const double &Bird::getWingspan() const {
    return wingspan;
}

void Bird::setWingspan(const double &wingspan) {
    Bird::wingspan = wingspan;
}

void Bird::printInfo() {
    cout << endl << "Animal of type Bird :" << endl;
    cout << "Name: " << getName() << endl;
    cout << "Color: " << getColor() << endl;
    cout << "Diet: " << getDiet() << endl;
    cout << "Habitat: " << getHabitat() << endl;
    cout << "Sounds: " << getSounds() << endl;
    if (isPet1()){
        cout << "This animal is a pet" << endl;
    } else {
        cout << "This animal is not a pet" << endl;
    }
    cout << "Age: " << getAge() << endl;
    cout << "Weight: " << getWeight() << endl;
    cout << "Height: " << getHeight() << endl;
    cout << "Wingspan: " << getWingspan() << endl;
}