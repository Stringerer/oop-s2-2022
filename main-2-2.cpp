#include <iostream>

extern int max_element(int[], int);

int main() {
    int array[5] = {4,5,9,7,8};
    
    std::cout << "The max is: " << max_element(array, 0) << std::endl;
    return 0;
}