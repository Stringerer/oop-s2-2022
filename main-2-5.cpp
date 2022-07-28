#include <iostream>

extern bool is_descending(int[], int);

int main() {
    int array[8] = {9,9,9,9,5,2,2,2};
    
    std::cout << "array is descending: " << is_descending(array, 8) << std::endl;;
    return 0;
}