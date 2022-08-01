#include <iostream>

int left_shift(int bits, int distance) {return bits << distance; }

int main() {
    std::cout << left_shift(1011010, 2) << std::endl;
}