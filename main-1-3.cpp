#include <iostream>

extern void count_digits(int[][4]);

int main() {
    int array[4][4] = {2,2,2,5,9,9,9,9,1,1,1,1,2,2,4,4};
    
    count_digits(array);
    return 0;
}