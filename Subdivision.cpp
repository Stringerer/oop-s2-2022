#include <iostream>
#include <string>
#include "Subdivision.h"

using namespace std;

Subdivision::Subdivision(){
    sName = "";
    ssize = 0;
    hList;
    count = 0;
}
Subdivision::Subdivision(string subName, int subSize){
    sName = subName;
    ssize = subSize;
    hList;
    count = 0;
}
int Subdivision::get_num_houses(){
    return ssize;
}
string Subdivision::get_subdiv_name(){
    return sName;
}
House * Subdivision::get_houses(){
    return hList;
}
bool Subdivision::add_house(House new_house){
    if (count = (ssize-1)){
        return false;
    }
    hList[count]=new_house;
    count++;
    return true;
}