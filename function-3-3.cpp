 double weighted_average(int array[], int n){
    double average = 0.0;
    double count;
    for (int i = 0; i < n; i++){
        count = 0;
        for (int j = 0; j < n; j++){
            if (array[i] == array[j]){
                count++;
            }
        }
        double weight = (array[i]*count)/n;
        average = average + weight;
    }
    return average;
 }