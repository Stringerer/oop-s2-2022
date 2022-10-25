#ifndef _HUNTER_H
#define _HUNTER_H

#include <string>
#include "animal.h"

using namespace std;

class hunter: public animal
{
protected:
    int kills;
    static int nextID;
public:
    hunter(string n, int v);
    int get_kills();
    void set_kills(int k);
    string get_name();
};
#endif