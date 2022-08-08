#include <iostream>

using namespace std;

void printer(){
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            if (j==9){
                cout << "meow" << endl;
            }
            else{
                cout << "meow" << " ";
            }
        }
    }
    cout << endl;
}