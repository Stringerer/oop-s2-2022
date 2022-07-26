double array_mean(int array[], int n){
    double mean = 0.0;
    if (n < 1){;
    }
    else{
        for (int i = 0; i < n; i++){
            mean = mean + (array[i]);
        }
        mean = (mean)/n;
    }

    return mean;
}