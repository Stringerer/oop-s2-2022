#include <string>
#include "Person.h"

using namespace std;

class Airplane
{
protected:
    Person pilot;
    Person copilot;
    string csign;

public:
    Airplane(string callsign, Person thePilot, Person theCoPilot);
    void setPilot(Person thePilot);
    Person getPilot();
    void setCoPilot(Person theCoPilot);
    Person getCoPilot();
    void printDetails();
};