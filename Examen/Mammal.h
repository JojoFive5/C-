#ifndef MAMMAL_H
#define MAMMAL_H

#include "Animal.h"
#include <string>
using namespace std;

class Mammal : public Animal {
public:
    Mammal();
    Mammal(string name, string color, string diet, string habitat, string sounds, bool isPet, int age, double weight,double height, string furColor);
    Mammal(const Mammal &);

    const string &getFurColor() const;

    void setFurColor(const string &furColor);

    void printInfo() override;

private:
    string furColor;
};


#endif