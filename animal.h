#ifndef _ANIMAL_H
#define _ANIMAL_H
#include <string>

using namespace std;

class animal
{
protected:
    string name;
    int animalID;
    int volume;
public:
    animal();
    animal(string n, int v);
    void set_name(string n);
    virtual string get_name() = 0;
    int get_animalID();
    void set_volume(int v);
    int get_volume();
};
#endif