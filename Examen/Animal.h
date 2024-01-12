

#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using namespace std;

class Animal {
public:
    Animal(string name, string color, string diet, string habitat, string sounds, bool isPet, int age, double weight, double height);
    Animal();
    Animal(const Animal &);

    const string &getName() const;

    void setName(const string &name);

    const string &getColor() const;

    void setColor(const string &color);

    const string &getDiet() const;

    void setDiet(const string &diet);

    const string &getHabitat() const;

    void setHabitat(const string &habitat);

    const string &getSounds() const;

    void setSounds(const string &sounds);

    bool isPet1() const;

    void setIsPet(bool isPet);

    int getAge() const;

    void setAge(int age);

    double getWeight() const;

    void setWeight(double weight);

    double getHeight() const;

    void setHeight(double height);

    void make_sound();

    virtual void printInfo();

private:
    string name;
    string color;
    string diet;
    string habitat;
    string sounds;
    bool isPet;
    int age;
    double weight;
    double height;
};


#endif 
