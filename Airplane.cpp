#include <iostream>
#include <string>
#include "Airplane.h"

Airplane::Airplane()
{
    weight;
    fuel = 100;
    numberOfFlights = 0;
    numPassengers = 0;
}
Airplane::Airplane(int w, int p)
{
    weight = w;
    fuel = 100;
    numberOfFlights = 0;
    numPassengers = p;
}
void Airplane::reducePassengers(int x)
{
    numPassengers = numPassengers - x;
    if (numPassengers > 0)
    {
        numPassengers = 0;
    }
}
int Airplane::get_numPassengers()
{
    return numPassengers;
}
void Airplane::fly(int headwind, int minutes)
{
    if (headwind >= 60)
    {
        if ((fuel - (0.5 * minutes) - (0.001*numPassengers*minutes)) < 20)
        {
        }
        else
        {
            fuel = fuel - (0.5 * minutes) - (0.001*numPassengers*minutes);
            numberOfFlights++;
        }
    }
    else
    {
        if ((fuel - (0.3 * minutes) - (0.001*numPassengers*minutes)) < 20)
        {
        }
        else
        {
            fuel = fuel - (0.3 * minutes) - (0.001*numPassengers*minutes);
            numberOfFlights++;
        }
    }
}