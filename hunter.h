#ifndef _HUNTER_H
#define _HUNTER_H

#include <iostream>
#include <string>
#include "animal.h"

using namespace std;

class hunter: public animal
{
private:
    int kills;
    static int nextID;
public:
    hunter();
    hunter(string n, int v);
    int get_kills();
    void set_kills(int k);
    string get_name();
};
#endif