bool is_fanarray(int array[], int n){
    bool is_fan = true;
    int fan_check = (array[0]-1);
    for (int i = 0; i < n; i++){
        if (array[i] == array[n-1-i]){
        }
        else{
            is_fan = false;
        }
    
    }
    for ( int i = 0; i < (n/2); i++){
        if (array[i] > fan_check){

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