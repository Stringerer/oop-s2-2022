#ifndef _CAPYBARA_H
#define _CAPYBARA_H

#include <string>

using namespace std;

class Capybara
{
protected:
    string name;
    int age;

public:
    Capybara();
    void setName(string capyName);
    string getName();
    void setAge(int capyAge);
    int getAge();
};
 #endif