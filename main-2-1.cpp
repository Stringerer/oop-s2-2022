#include <iostream>

using namespace std;

extern string month_lookup(int);

int main(){
    int month = 2;
    cout << "The month is " << month_lookup(month) << endl;
    return 0;
}