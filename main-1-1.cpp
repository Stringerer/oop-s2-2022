#include <iostream>

using namespace std;

extern void print_ascending(int *, int);

int main(){
    int arr[5] = {1,2,1,4,5};
    print_ascending(arr,5);
    return 0;
}