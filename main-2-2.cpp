#include <iostream>

using namespace std;

int main(){
    int var = 10;
    int *ptr = &var;
    cout << ptr << endl;
    cout << *ptr << endl;
    return 0;
}