#include <iostream>
#include <math.h>

int bin_to_int(int bin[], int n){
    int decimal = 0;
    int a;
    for (int i = 0; i < n; i++){
        decimal = decimal + bin[i]*pow(2, (n-i-1));
    }
    return decimal;
}