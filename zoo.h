#ifndef _ZOO_H
#define _ZOO_H

#include <iostream>
#include <string>
#include "animal.h"
#include "hunter.h"
#include "vegie.h"

using namespace std;

class zoo
{
private:
    string name;
    int number_of_animals;
    animal** animals;
public:
    zoo();
    zoo(string n, int cows, int lions);
    string get_name();
    int get_number_of_animals();
    animal** get_animals();
};
#endif