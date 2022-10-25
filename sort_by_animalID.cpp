#include <iostream>
#include "sort_by_animalID.h"

using namespace std;

void sort_by_animalID::sort(animal **animals,int n){
    for (int i = 0; i < n - 1; i++){
        for (int j = 0; j < n - i - 1; j++){
            if ((*animals[j]).get_animalID() > (*animals[j+1]).get_animalID()){
                swap(animals[j], animals[j + 1]);
            }
        }
    }
}
