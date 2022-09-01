#include <iostream>
#include <string>
#include "Wagon.h"

using namespace std;

Wagon::Wagon() {
    Capybara wagon[4] = {};
    int count = 0;
}

bool Wagon::addCapybara(Capybara newCapy) {
    if (count < 4){
        wagon[count] = newCapy;
        count++;
        return true;
    }
    else{
        cout << "Wagon's full" << endl;
        return false;
    }
}

void Wagon::emptyWagon(){
    for (int i = 0; i < 4; i++){
        wagon[i] = {};
    }
    count = 0;
}

void Wagon::printCapybaras(){
    for (int i = 0; i < count; i++){
        cout << wagon[i].getName() << endl;
    }
}