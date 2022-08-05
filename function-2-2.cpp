#include <iostream>
#include <cmath>

int binary_to_int(int bin[], int n){
    int dec = 0;
    int a;
    for (int i = 0; i < n; i++){
        dec = dec + bin[i]*pow(2, (n-i-1));
    }
    return dec;
}