#include <iostream>

extern bool is_fanarray(int[], int);

int main() {
    int array[5] = {2,1,3,1,2};
    
    std::cout << "array is fan: " << is_fanarray(array, 0) << std::endl;;
    return 0;
}