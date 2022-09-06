#include <iostream>
#include <string>
#include "Musician.h"

using namespace std;

int main(){
    Musician m1;
    Musician m2("Guitar", 4);
    cout << m1.get_instrument() << " " << m1.get_experience() << endl;
    cout << m2.get_instrument() << " " << m2.get_experience() << endl;
    return 0;
}