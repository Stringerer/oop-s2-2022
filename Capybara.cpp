#include <iostream>
#include "Capybara.h"
#include <string>

using namespace std;

Capybara::Capybara(){
    name = "?";
    age = 0;
}
void Capybara::setName(string capyName){
    name = capyName;
}

string Capybara::getName(){
    return name;
}

void Capybara::setAge(int capyAge){
    age = capyAge;
}

int Capybara::getAge(){
    return age;
}