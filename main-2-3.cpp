#include <iostream>
using namespace std;

extern int sum_if_palindrome(int[], int);

int main() {
    int array[6]={-1,-2,-3,-3,-2,-1};
    cout << "Sum is: " << sum_if_palindrome(array,6) << endl;
    return 0;
}