#include <iostream>
#include <string>
#include "Wagon.h"

using namespace std;

Wagon::Wagon(){
    wagon;
    count = 0;
}

bool Wagon::addCapybara(Capybara newCapy) {
    if (count < 4){
        wagon[count] = newCapy;
        count++;
        return true;
    }
    return false;
}

void Wagon::emptyWagon(){
    for (int i = 0; i < 4; i++){
        wagon[i] = {};
    }
    count = 0;
}

void Wagon::printCapybaras(){
    for (int i = 0; i < count; i++){
        cout << wagon[i].getName() << " " << wagon[i].getAge() << endl;
    }
}