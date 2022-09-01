#include <iostream>
#include <string>
#include "Person.h"
#include "Airplane.h"

using namespace std;

int main(){
    Person p1(101, "Frank");
    Person p2(99, "Declan");
    Person p3(21, "Kalarni");
    Airplane a1("Balls", p1, p2);
    a1.setPilot(p3);
    a1.setCoPilot(p1);
    return 0;
}