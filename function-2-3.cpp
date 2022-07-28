#include <iostream>
using namespace std;

void two_five_nine(int array[], int n){
    int two_count = 0;
    for (int i = 0; i < n; i++){
        if (array[i]==2){
            two_count++;
        }
    }
    int five_count = 0;
    for (int i = 0; i < n; i++){
        if (array[i]==5){
            five_count++;
        }
    }
    int nine_count = 0;
    for (int i = 0; i < n; i++){
        if (array[i]==9){
            nine_count++;
        }
    }
    if(n<1){
        two_count = 0;
        five_count = 0;
        nine_count = 0;
    }
    cout <<"2:"<<two_count<<";5:"<<five_count<<";9:"<<nine_count<<";" << endl;
}