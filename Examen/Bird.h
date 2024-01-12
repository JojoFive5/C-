
#ifndef BIRD_H
#define BIRD_H

#include "Animal.h"
#include <string>
using namespace std;

class Bird : public Animal {
public:
    Bird();

    Bird(string name, string color, string diet, string habitat, string sounds, bool isPet, int age, double weight,double height, double wingspan);

    Bird(const Bird &);

    const double &getWingspan() const;

    void setWingspan(const double &wingspan);

    void printInfo() override;

private:
    double wingspan;
};


#endif //CPLUSPLUS_EXAM_BIRD_H
