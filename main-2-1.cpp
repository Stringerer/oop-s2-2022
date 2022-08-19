#include <iostream>

using namespace std;

extern void multiples_of_seven(int *,int);

int main(){
    int array[5]={1,2,7,3,14};
    multiples_of_seven(array,5);
    return 0;
}