int* matrix_min_max(int **vals,int num_rows, int num_cols){
    int min = 101;
    int max = -1;
    
    for (int i = 0; i < num_rows; i++){
        for (int j = 0; j < num_cols; i++){
            if ( **vals > max){
                max = **vals;
            }
            if ( **vals < min){
                min = **vals;
            }
        }
    }
    int *arr;
    arr = new int[2];
    *arr = min;
    *(arr+1) = max;
    return arr;
}