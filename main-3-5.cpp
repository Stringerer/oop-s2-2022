#include <iostream>

extern double sum_even(double[], int);

int main() {
    double array[5] = {3.0,5.5,2.1,1.5,4.3};
    
    std::cout << "The median is: " << sum_even(array, 5) << std::endl;
    return 0;
}