#include <iostream>

using namespace std;

int main(){
    int array[4][2] = {1,2,3,4,5,6,7,8};
    int *ptr = &array[0][0];
    for (int i = 0; i < 8; i++){
        cout << *ptr << " ";
        ptr++;
    }
    cout << endl;
    return 0;
}