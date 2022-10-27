#include "Helicopter.h"

using namespace std;

int Helicopter::heliID = 0;

Helicopter::Helicopter(){
    weight;
    fuel = 100;
    numberOfFlights = 0;
    name;
    craftID = Helicopter::heliID;
    heliID++;
}
Helicopter::Helicopter(int w, string n){
    weight = w;
    fuel = 100;
    numberOfFlights = 0;
    name = n;
    craftID = Helicopter::heliID;
    heliID++;
}
string Helicopter::get_name(){
    return name;
}
void Helicopter::set_name(string n){
    name = n;
}
int Helicopter::get_craftID(){
    return craftID;
}
void Helicopter::set_craftID(int c){
    craftID = c;
}
void Helicopter::fly(int headwind, int minutes){
    if (fuel > 5670){
        if (headwind >= 40){
            if ((fuel - (fuel*0.04*minutes) - (fuel*(0.01*(fuel-5670))*minutes)) < 20){

            }
            else{
                fuel = (fuel - (fuel*0.04*minutes) - (fuel*(0.01*(fuel-5670))*minutes));
                numberOfFlights++;
            }
        }
        else{
            if ((fuel - (fuel*0.02*minutes) - (fuel*(0.01*(fuel-5670))*minutes)) < 20){

            }
            else{
                fuel = (fuel - (fuel*0.02*minutes) - (fuel*(0.01*(fuel-5670))*minutes));
                numberOfFlights++;
            }
        }
    }
    else{
        if (headwind >= 40){
            if ((fuel - (fuel*0.04*minutes)) < 20){

            }
            else{
                fuel = (fuel - (fuel*0.04*minutes));
                numberOfFlights++;
            }
        }
        else{
            if ((fuel - (fuel*0.02*minutes)) < 20){

            }
            else{
                fuel = (fuel - (fuel*0.02*minutes));
                numberOfFlights++;
            }
        }
    }
}