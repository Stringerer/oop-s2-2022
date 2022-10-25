#include <iostream>
#include <string>
#include "animal.h"

using namespace std;

animal::animal(){
    name;
    animalID;
    volume;
}

animal::animal(string n, int v){
    name = n;
    animalID;
    volume = v;
}
void animal::set_name(string n){
    name = n;
}
int animal::get_animalID(){
    return animalID;
}
void animal::set_volume(int v){
    volume = v;
}
int animal::get_volume(){
    return volume;
}