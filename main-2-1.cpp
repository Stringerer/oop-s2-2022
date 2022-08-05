#include <iostream>
using namespace std;

extern void print_binary_str(std::string);

int main() {
    char a[4] = {'1','3','9'};
    print_binary_str(a);
    return 0;
}
