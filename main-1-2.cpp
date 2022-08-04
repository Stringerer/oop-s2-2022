#include <iostream>

extern int is_identity(int[][10]);

int main(){
    int array[10][10] = {0};
    std::cout << "The sum is: " << is_identity(array) << std::endl;
    return 0;
}