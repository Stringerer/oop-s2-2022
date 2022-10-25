#include <iostream>
#include <string>
#include "hunter.h"

using namespace std;

int hunter::nextID = 1000;

hunter::hunter(){
    name;
    animalID = hunter::nextID++;
    volume;
    kills = 0;
}
hunter::hunter(string n, int v){
    name = n;
    animalID = hunter::nextID++;
    volume = v;
    kills = 0;
}
int hunter::get_kills(){
    return kills;
}
void hunter::set_kills(int k){
    kills = k;
}
string hunter::get_name(){
    return "Hunter: " + name;
}