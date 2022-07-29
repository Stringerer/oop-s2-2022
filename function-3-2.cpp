int median_array(int array[], int n){
    int temp = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j +1 < n -1; j++){
            if (array[j] > array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    int median = array[n/2];
    if (n < 1){
        median = 0;
    }
    if (n%2==0){
        median = 0;
    }
    return median;
}