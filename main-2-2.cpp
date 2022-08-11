#include <iostream>

using namespace std;

extern int bin_to_int(int[], int);

int main(){
    int decimal[7]={1,0,0,1,0,1,1};
    cout << "The decimal is: " << bin_to_int(decimal,7) << endl;
    return 0;
}