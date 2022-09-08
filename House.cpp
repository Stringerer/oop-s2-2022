#include <iostream>
#include <string>
#include "House.h"

using namespace std;

House::House(){
    oName = "";
    lNumber = 0;
}
House::House(string ownerName, int lotNumber){
    oName = ownerName;
    lNumber = lotNumber;
}
string House::get_owner_name(){
    return oName;
}
int House::get_lot_number(){
    return lNumber;
}