bool is_fanarray(int array[], int n){
    bool is_fan = true;
    for (int i = 0; i < n; i++){
        if (array[i] != array[n-1-i]){
            is_fan = false;
        }
    }
    if (n < 1){
        is_fan = false;
    }
    return is_fan;
}