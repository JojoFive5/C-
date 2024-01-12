
#include "Animal.h"
#include <iostream>
using namespace std;

Animal::Animal(string _name, string _color, string _diet, string _habitat, string _sounds, bool _isPet, int _age, double _weight, double _height):
name(_name), color(_color), diet(_diet), habitat(_habitat), sounds(_sounds), isPet(_isPet), age(_age),weight(_weight),height(_height) {

}

Animal::Animal(const Animal &other){
    this->name = other.name;
}

const string &Animal::getName() const{
    return name;
}

void Animal::setName(const string &name){
    Animal::name = name;
}

const string &Animal::getColor() const {
    return color;
}

void Animal::setColor(const string &color){
    Animal::color = color;
}

const string &Animal::getDiet() const {
    return diet;
}

void Animal::setDiet(const string &diet){
    Animal::diet = diet;
}

const string &Animal::getHabitat() const {
    return habitat;
}

void Animal::setHabitat(const string &habitat){
    Animal::habitat = habitat;
}

const string &Animal::getSounds() const {
    return sounds;
}

void Animal::setSounds(const string &sounds){
    Animal::sounds = sounds;
}

bool Animal::isPet1() const {
    return isPet;
}

void Animal::setIsPet(bool isPet) {
    Animal::isPet = isPet;
}

int Animal::getAge() const {
    return age;
}

void Animal::setAge(int age) {
    Animal::age = age;
}

double Animal::getWeight() const {
    return weight;
}

void Animal::setWeight(double weight) {
    Animal::weight = weight;
}

double Animal::getHeight() const {
    return height;
}

void Animal::setHeight(double height) {
    Animal::height = height;
}

void Animal::make_sound() {
    cout << sounds << endl;
}

void Animal::printInfo() {
    cout << endl << "Animal of type unknown :" << endl;
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
}