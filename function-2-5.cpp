bool is_descending(int array[], int n){
    bool is_descending = true;
    int descending_check = array[0];
    for (int i = 0; i < n; i++){
        if (array[i] <= descending_check){
            descending_check = array[i];
        }
        else{
            is_descending = false;
        }
    }
    if (n < 1){
        is_descending = false;
    }
    return is_descending;
}