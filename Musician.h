#ifndef _MUSICIAN_H
#define _MUSICIAN_H

#include <string>

using namespace std;

class Musician
{
protected:
    string instrument;
    int exp;
public:
    Musician();                 
    Musician(string instrument, int experience);      
    string get_instrument();   
    int get_experience();
};
#endif 