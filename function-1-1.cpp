#include <iostream>

using namespace std;

void print_ascending(int *vals, int len){
    int check = *vals;
    for (int i = 0; i < len; i++){
        if (*vals < check){
            break;
        }
        else{
            cout << *vals << ' ';
            check = *vals;
            *vals++;
        }
    }
    cout << endl;
}