

#ifndef REPTILE_H
#define REPTILE_H

#include "Animal.h"
#include <string>
using namespace std;

class Reptile : public Animal {
public:
    Reptile();

    Reptile(string name, string color, string diet, string habitat, string sounds, bool isPet, int age, double weight,double height, string scalePattern);

    Reptile(const Reptile &);

    const string &getScalePattern() const;

    void setScalePattern(const string &scalePattern);

    void printInfo() override;

private:
    string scalePattern;
};


#endif 
