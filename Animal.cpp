#include <iostream>
#include <string>
#include "Animal.h"

using namespace std;

Animal::Animal(){
    name;
    animalID;
    volume;
}

Animal::Animal(string n, int v){
    name = n;
    animalID;
    volume = v;
}
void Animal::set_name(string n){
    name = n;
}
int Animal::get_animalID(){
    return animalID;
}
void Animal::set_volume(int v){
    volume = v;
}
int Animal::get_volume(){
    return volume;
}
