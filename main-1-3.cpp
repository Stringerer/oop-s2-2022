#include <iostream>

extern int num_count(int[], int, int);

int main() {
    int array[5] = {4,4,6,4,8};
    std::cout << "The count is: " << num_count(array, 0, 4) << std::endl;
    return 0;
}