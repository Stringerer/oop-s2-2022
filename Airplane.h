#ifndef _AIRPLANE_H
#define _AIRPLANE_H

#include <iostream>
#include <string>
#include "AirCraft.h"

using namespace std;

class Airplane: public AirCraft
{
private:
    int numPassengers;
public:
    Airplane();
    Airplane(int w, int p);
    void reducePassengers(int x);
    int get_numPassengers();
    void fly(int headwind, int minutes);
};
#endif