#include <iostream>

using namespace std;

void print_binary_str(std::string decimal_number){
    int b;
    int a = stoi(decimal_number);
    int count = 0;
    while (a!=0){
        b=a%2;
        a=a/2;
        //std::cout << b << std::endl;
        count++;
    }
    int transformed[count];
    count = 0;
    a = 75;
    while (a!=0){
        b=a%2;
        a=a/2;
        // std::cout << b << std::endl;
        transformed[count] = b;
        count++;
    }
    // for (int i = 0; i < count+1; i++){
    //     if (transformed[count-i] == 1 || transformed[count-i] == 0){
    //         std::cout << transformed[count-i];
    //     }
    // }

    for (int i = count-1; i >= 0; i--){
            std::cout << transformed[i];
    }
    std::cout << std::endl;
}