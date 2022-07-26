#include <iostream>

extern double array_mean(int[], int);

int main() {
    int array[5] = {4,5,6,7,9};
    double mean = array_mean(array,5);
    printf("The average is: %.1f \n",mean);
    return 0;
}