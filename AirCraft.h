#ifndef _AIRCRAFT_H
#define _AIRCRAFT_H
#include <iostream>
#include <string>

using namespace std;

class AirCraft
{
protected:
    int weight;
    float fuel;
    int numberOfFlights;
public:
    AirCraft();
    AirCraft(int w);
    void refuel();
    int get_weight();
    void set_weight(int w);
    float get_fuel();
    void set_fuel(float f);
    int get_numberOfFlights();
    void set_numberOfFlights(int fl);
    virtual void fly(int headwind, int minutes) = 0;
};
#endif