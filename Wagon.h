#include <string>
#include "Capybara.h"
using namespace std;

class Wagon 
{
    public:
    Capybara wagon[4];
    int count;
    Wagon();
    bool addCapybara(Capybara newCapy);
    void emptyWagon();
    void printCapybaras();
};