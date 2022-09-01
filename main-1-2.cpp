#include <iostream>
#include "Person.h"
#include <string>

using namespace std;

int main(){
    Person c1(0, "paul");
    c1.setName("Gerald");
    c1.setSalary(100);
     Person c2(0, "paul");
    c2.setName("Big Dog");
    c2.setSalary(12);
    Person c3(0, "paul");
    c3.setName("Frank");
    c3.setSalary(19);
    Person c4(0, "paul");
    c4.setName("Balls");
    c4.setSalary(2);
    return 0;
}