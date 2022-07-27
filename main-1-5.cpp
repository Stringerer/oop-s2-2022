#include <iostream>

extern int count_evens(int);

int main() {
    int number = -8;
    std::cout << "The even count is: " << count_evens (number) << std::endl;
    return 0;
}