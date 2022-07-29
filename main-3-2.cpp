#include <iostream>

extern int median_array(int[], int);

int main() {
    int array[5] = {3,5,2,1,4};
    
    std::cout << "The median is: " << median_array(array, 4) << std::endl;
    return 0;
}