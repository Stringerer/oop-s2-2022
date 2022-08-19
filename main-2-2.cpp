#include <iostream>

using namespace std;

extern int max_sub_sum(int *,int);

int main(){
    int array[8]={1,2,-7,3,14,-3,-4,1};
    cout << max_sub_sum(array,8) << endl;
    return 0;
}