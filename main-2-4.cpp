#include <iostream>
using namespace std;

extern int sum_min_max(int[], int);

int main() {
    int array[6]={4,3,1,7,6,9};
    cout << "Sum is: " << sum_min_max(array,6) << endl;
    return 0;
}