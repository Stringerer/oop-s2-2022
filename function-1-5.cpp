int count_evens(int number){
    int count = 0;
    count = number/2;
    if ( number < 1){
        count = 0;
    }
    return count;
}