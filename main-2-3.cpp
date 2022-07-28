#include <iostream>

extern void two_five_nine(int[], int);

int main() {
    int array[8] = {2,2,2,5,9,9,9,9};
    
    two_five_nine(array, 0);
    return 0;
}