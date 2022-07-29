#include <iostream>

extern double weighted_average(int[], int);

int main() {
    int array[6] = {1,2,1,4,1,3};
    
    std::cout << "The median is: " << weighted_average(array, 0) << std::endl;
    return 0;
}