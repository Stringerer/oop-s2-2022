bool is_ascending(int array[], int n){
    bool is_ascending = true;
    int ascending_check = array[0];
    for (int i = 0; i < n; i++){
        if (array[i] >= ascending_check){
            ascending_check = array[i];
        }
        else{
            is_ascending = false;
        }
    }
    if (n < 1){
        is_ascending = false;
    }
    return is_ascending;
}