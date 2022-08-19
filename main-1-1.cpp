#include <iostream>

using namespace std; 

extern void string_2d_copy(std::string[][2], std::string[][2], int);

int main(){
    string array1[3][2]={"Blue", "Red", "Yellow", "Orange", "Purple", "Green"};
    string array2[3][2];
    string_2d_copy(array1, array2, 3);
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 2; j++){
            cout << array2[i][j] << ' ';
        }
    }
    cout << endl;
    return 0;
}