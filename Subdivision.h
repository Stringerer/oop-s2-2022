#include <iostream>
#include <string>
#include "House.h"

using namespace std;

class Subdivision{
protected:
    string sName;
    int ssize;
    House *hList;
    int count;
public:
    Subdivision();                               // default constructor
    Subdivision(string subName, int size);  // constructor with given subdivision size and 
                                             // subdivision name

// returns the number of houses currently built on the the subdivision
    int get_num_houses(); 

    string get_subdiv_name();  // returns the subdivision's name
    House * get_houses();           // returns the array of houses currently on the subdivision

// returns true and adds new house to the subdivision if the subdivision is not full
// otherwise returns false
    bool add_house(House new_house);
};
~Subdivision(){delete hList[]};