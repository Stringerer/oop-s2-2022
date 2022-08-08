#include <iostream>

using namespace std;

int main(){
    int var = 42;
    int *ptr = &var;
    *ptr = *ptr + 5;
    cout << *ptr << endl;
    *ptr = *ptr - 2;
    cout << *ptr << endl;
    return 0;
}