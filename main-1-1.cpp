#include <iostream>

extern void printer (int[][10]);

int main(){
    int array[10][10]={1};
    printer(array);
    return 0;
}