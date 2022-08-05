 #include <iostream>

 int array_min(int array[], int n){
    int min = array[0];
    for (int i =0; i < n; i++){
        if (array[i]<min){
            min = array[i];
        }
    }
    if ( n < 1){
        min = -1;
    }
    return min;
}

int array_max(int array[], int n){
    int max = array[0];
    for (int i =0; i < n; i++){
        if (array[i]>max){
            max = array[i];
        }
    }
    if ( n < 1){
        max = -1;
    }
    return max;
}

int sum_min_max(int integers[], int length){
    int min = array_min(integers, length);
    int max = array_max(integers, length);
    int sum = min + max;
    return sum;
}