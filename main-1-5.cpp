#include <iostream>

extern void print_summed(int[][3], int[][3]);

int main(){
    int array[3][3] = {0,1,2,2,1,0,1,1,1};
    int array2[3][3] = {2,1,0,0,1,2,1,1,1};
    
    print_summed(array, array2);
    
    return 0;
}