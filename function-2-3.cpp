#include <iostream>

bool is_palindrome(int array[], int n){
    bool is_fan = true;
    int fan_check = (array[0]-1);
    for (int i = 0; i < n; i++){
        if (array[i] == array[n-1-i]){
        }
        else{
            is_fan = false;
        }
    
    }
    if (n < 1){
        is_fan = false;
    }
    return is_fan;
}

int sum_array_elements(int array[], int n) {
    int sum = 0;
    if (n < 1){;
        sum = -1;
    }
    else{
        for (int i = 0; i < n; i++){
            sum = sum + array[i];
        }
    }
    
    return sum;
}

int sum_if_palindrome(int integers[], int length){
    int sum;
    bool pal_check = is_palindrome(integers,length);
    if (pal_check == true){
        sum = sum_array_elements(integers, length);
    }
    else{
        sum = -2;
    }
    return sum;
}
