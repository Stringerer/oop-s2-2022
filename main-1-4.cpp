#include <iostream>

extern int sum_two_arrays(int[], int[], int);

int main() {
    int array[5] = {4,5,6,7,8};
    int array2[5] = {8,7,6,5,4};
    std::cout << "The sum is: " << sum_two_arrays(array, array2, 5) << std::endl;
    return 0;
}