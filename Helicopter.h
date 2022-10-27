#ifndef _HELICOPTER_H
#define _HELICOPTER_H
#include <iostream>
#include <string>
#include "AirCraft.h"

using namespace std;

class Helicopter: public AirCraft
{
private:
    string name;
    int craftID;
    static int heliID;
    int extra;
public:
    Helicopter();
    Helicopter(int w, string n);
    string get_name();
    void set_name(string n);
    int get_craftID();
    void set_craftID(int c);
    void fly(int headwind, int minutes);
};
#endif