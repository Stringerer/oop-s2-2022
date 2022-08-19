#include <iostream>

using namespace std;

int max_sub_sum(int *nums,int length){
    int sum = 0;
    int max_now = 0;
    int neg_count = 0;
    for (int i = 0; i < length; i++){
        max_now = max_now + *nums;
        max_now = max(max_now, 0);
        sum = max(max_now, sum);
        if (*nums < 0){
            neg_count++;
        }
        *nums++;
    }
    if (length < 1){
        sum = 0;
    }
    if (neg_count == length){
        sum = 0;
    }
    return sum;
}