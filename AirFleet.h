#ifndef _AIRFLEET_H
#define _AIRFLEET_H
#include <iostream>
#include <string>
#include "AirCraft.h"
#include "Helicopter.h"
#include "Airplane.h"

using namespace std;

class AirFLeet{
private:
    AirFLeet();
    AirCraft** fleet;
    int count;
public:
    void addAirCraft(AirCraft* aircraft);
    AirCraft** get_fleet();
    int get_count;
    static AirFleet** createFleet(int authority);
};
#endif