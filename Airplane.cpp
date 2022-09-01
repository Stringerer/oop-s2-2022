#include <iostream>
#include <string>
#include "Airplane.h"

using namespace std;

Airplane::Airplane(string callsign, Person thePilot, Person theCoPilot){
    pilot=thePilot;
    copilot=theCoPilot;
    csign = callsign;
}
void Airplane::setPilot(Person thePilot){
    pilot=thePilot;
}
Person Airplane::getPilot(){
    return pilot;
}
void Airplane::setCoPilot(Person theCoPilot){
    copilot=theCoPilot;
}
Person Airplane::getCoPilot(){
    return copilot;
}
void Airplane::printDetails(){
    cout << csign << endl << pilot.getName() << endl << copilot.getName() << endl;
}