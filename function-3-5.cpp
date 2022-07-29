double sum_even(double array[], int n){
    double sum = 0.0;
    for (int i = 0; i < n; i++){
        if (i%2==1){
            sum = sum + array[i];
        }
    }
    return sum;
}