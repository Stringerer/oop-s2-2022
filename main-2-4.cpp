#include <iostream>

extern bool is_ascending(int[], int);

int main() {
    int array[8] = {2,2,2,5,9,9,9,9};
    
    std::cout << "array is ascending: " << is_ascending(array, 0) << std::endl;;
    return 0;
}