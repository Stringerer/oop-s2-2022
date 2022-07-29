bool is_fanarray(int array[], int n){
    bool is_fan = true;
    int fan_check = array[0];
    for (int i = 0; i < n; i++){
        if (array[i] == array[n-1-i] && array[i] > fan_check){
            fan_check = array[i];
        }
        else{
            is_fan = false;
            break;
        }
    }
    if (n < 1){
        is_fan = false;
    }
    return is_fan;
}