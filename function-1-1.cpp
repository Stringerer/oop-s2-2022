#include <iostream>

using namespace std;

int *readNumbers(){
    int * arr;
    arr = new int[10];
    for (int i = 0; i < 10; i++){
        int temp;
        cin >> temp;
        *(arr+i) = temp;
    }
    return arr;
}

void printNumbers(int *numbers,int length){
    for (int i = 0; i < length; i++){
        cout << (i+1) << ' '<< *numbers << endl;
        *numbers++;
    }
}