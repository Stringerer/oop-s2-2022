#include <iostream>
#include <string>
#include "vegie.h"

using namespace std;

int vegie::nextID = 100;

vegie::vegie(){
    name;
    animalID = vegie::nextID++;
    volume;
    favourite_food = "grass";
}
vegie::vegie(string n, int v){
    name = n;
    animalID = vegie::nextID++;
    volume = v;
    favourite_food = "grass";
}
void vegie::set_favourite_food(string f){
    favourite_food = f;
}
string vegie::get_favourite_food(){
    return favourite_food;
}
string vegie::get_name(){
    return "Safe: " + name;
}