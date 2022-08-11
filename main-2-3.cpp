#include <iostream>

using namespace std;

extern int palindrome_sum(int[], int);

int main(){
    int array[4]={1,2,2,1};
    cout << "The sum of the palindrome is: " << palindrome_sum(array, 4) << endl;
    return 0;
}
