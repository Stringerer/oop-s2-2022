#include <string>
#include "Capybara.h"
using namespace std;

class Wagon
{
protected:
    Capybara wagon[4];
    int count;

public:
    Wagon();
    bool addCapybara(Capybara newCapy);
    void emptyWagon();
    void printCapybaras();
};