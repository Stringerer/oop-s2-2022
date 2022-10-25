#ifndef _VEGIE_H
#define _VEGIE_H

#include <iostream>
#include <string>
#include "animal.h"

using namespace std;

class vegie: public animal
{
private:
    string favourite_food;
    static int nextID;
public:
    vegie();
    vegie(string n, int v);
    void set_favourite_food(string f);
    string get_favourite_food();
    string get_name();
};
#endif