int is_identity(int array[10][10]){
    int is_id = 1;
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            if (j==i){
                if (array[i][j]!=1){
                    is_id = 0;
                }
            }
            else {
                if (array[i][j]!=0){
                    is_id = 0;
                }
            }
        }
    }
    return is_id;
}