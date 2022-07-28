#include <iostream>

extern int min_element(int[], int);

int main() {
    int array[5] = {4,5,6,7,8};
    
    std::cout << "The minimum is: " << min_element(array, 0) << std::endl;
    return 0;
}