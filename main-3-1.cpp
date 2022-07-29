#include <iostream>

extern bool is_fanarray(int[], int);

int main() {
    int array[4] = {2,4,4,2};
    
    std::cout << "array is fan: " << is_fanarray(array, 4) << std::endl;;
    return 0;
}