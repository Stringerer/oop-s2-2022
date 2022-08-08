#include <iostream>

using namespace std;

extern void print_class(string[4], string[], int[][4], int);

int main(){
    string courses[4] = {"Gaming", "Swag", "Keef 101", "physics"};
    string students[6] = {"Cameron", "Travis", "Caleb", "Caleb", "Frank", "Joe"};
    int report_card[6][4] ={ 100, 100, 100, 100, 70, 83, 56, 12, 99, 99, 89 ,97, 99, 99, 89 ,97, 1, 1, 1, 1, 2, 3, 92, 1};
    print_class(courses, students, report_card, 6);
    return 0;
}