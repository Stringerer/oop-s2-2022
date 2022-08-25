#include <iostream>

using namespace std;

extern int next_match_count(int[], int);

int main(){
    int vals[]={1,2,2,2,3,1,1,5,2,2};
    cout << next_match_count(vals,10) << endl;
    return 0;
}