#include <iostream>

using namespace std;

void print_class(string courses[4], string students[], int report_card[][4], int nstudents){
    cout << "Report Card ";
    for (int i = 0; i < 4; i++){
        if (i==3){
            cout << courses[i] << endl;
        }
        else {
            cout << courses[i] << " ";
        }
    }
    for (int i = 0; i < nstudents; i++){
        for (int j = 0; j < 5; j++){
            if ( j==0){
                cout << students[i] << " ";

            }
            else if ( j==4){
                cout << report_card[i][j-1] << endl;
            }
            else{
                cout << report_card[i][j-1] << " ";
            }
        }
    }
}