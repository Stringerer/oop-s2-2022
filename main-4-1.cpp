#include <iostream>

using namespace std;

extern int* matrix_min_max(int **,int, int);

int main(){
    int row1[]={10,15,99};
    int row2[]={100,5,73};
    int row3[]={23,56,1};
    int *vals[]={row1,row2,row3};
    int *m =  matrix_min_max(vals,3,3);
    cout << m << endl;
    delete[] m;
    return 0;
}