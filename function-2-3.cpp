bool is_array_palindrome(int integers[], int length){
    bool is_pal = true;
    for (int i = 0; i < length; i++){
        if (integers[i] == integers[length-1-i]){
        }
        else{
            is_pal = false;
        }
    
    }
    if (length < 1){
        is_pal = false;
    }
    return is_pal;
}


int sum_integers(int integers[], int length){
    int sum = 0;
    for (int i = 0; i < length; i++){
        sum = sum + integers[i];
    }
    if (length < 1){
        sum = -1;
    }
    return sum;
}

int palindrome_sum(int integers[], int length){
    int sum = 0;
    if ( is_array_palindrome(integers, length) == false){
        sum = -2;
    }
    else{
        sum = sum_integers(integers, length);
    }
    return sum;
}
