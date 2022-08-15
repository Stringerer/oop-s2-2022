int size_of_array_arr(){
    int *arr = new int[3];
    int sum = 0;
    for (int i=0;i < 3; i++){
        sum = sum + sizeof(arr[i]);
    }
    return sum;
}