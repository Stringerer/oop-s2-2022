int next_match_count(int vals[], int length){
    int count = 0;
    int temp = vals[0];
    for (int i = 0; i < length; i++){
        temp = vals[i+1];
        if (vals[i]==temp){
            count++;
        }
    }
    return count;
}