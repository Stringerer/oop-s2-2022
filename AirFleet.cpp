#include <iostream>
#include "AirFleet.h"

using namespace std;

AirFleet::AirFLeet(){
    fleet = new AirCraft* [5];
    count = 0;
}
void AirFleet::addAirCraft(AirCraft* aircraft){
    fleet[count] = aircraft;
    count++;
}
AirFleet::Aircraft** get_fleet(){
    return fleet;
}
int AirFleet::get_count(){
    return count;
}
AirFleet** createFleet(int authority){
    if (authority >= 10){
        AirFleet();
    }
    else{
        return NULL;
    }
}
