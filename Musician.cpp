#include <iostream>
#include <string>
#include "Musician.h"

using namespace std;

Musician::Musician(){
    instrument = "null";
    exp = 0;
}
Musician::Musician(string minstrument, int experience){
    instrument = minstrument;
    exp = experience;
}
string Musician::get_instrument(){
    return instrument;
}
int Musician::get_experience(){
    return exp;
}