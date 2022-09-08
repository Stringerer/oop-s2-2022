#ifndef _HOUSE_H
#define _HOUSE_H
#include <iostream>
#include <string>
using namespace std;

class House{
protected:
    string oName;
    int lNumber;
public:    
    House();  // a default constructor lot number is zero and owner name is an empty string ""
    House(string ownerName, int lotNumber);// a constructor that takes the lot number and house owner name
    string get_owner_name(); // returns the name of the house owner
    int get_lot_number();  // returns the house's lot number
};
#endif