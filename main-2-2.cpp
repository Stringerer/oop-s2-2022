#include <iostream>

using namespace std;

extern int binary_to_int(int[], int);

int main(){
    int binary[7]={1,0,0,1,0,1,1};
    cout << "Dec is: " << binary_to_int(binary,7) << endl;
    return 0;
}