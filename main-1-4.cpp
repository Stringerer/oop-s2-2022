#include <iostream>

extern void print_scaled(int[][3], int);

int main(){
    int array[3][3] = {0,1,2,2,1,0,1,1,1};
    int num = 3;
    print_scaled(array, 3);
    
    return 0;
}