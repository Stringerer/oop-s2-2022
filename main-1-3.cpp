#include <iostream>

using namespace std;

extern void copy_integers(int[],int[],int);

int main(){
    int array1[5]={1,2,1,2,1};
    int array2[5];
    copy_integers(array1,array2,5);
    for(int i = 0; i < 5; i++){
        cout << array2[i] << " ";
    }
    cout << endl;
    return 0;
}