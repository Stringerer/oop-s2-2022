#include <iostream>

using namespace std;

extern void copy_doubles(double *,double *,int);

int main(){
    double array1[5]={1.1,2.2,1.3,2.4,1.5};
    double array2[5];
    copy_doubles(array1,array2,5);
    for(int i = 0; i < 5; i++){
        cout << array2[i] << " ";
    }
    cout << endl;
    return 0;
}