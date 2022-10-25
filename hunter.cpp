#include <string>
#include "hunter.h"

using namespace std;

hunter::hunter(string n, int v){
    name = n;
    volume = v;
    kills;
    nextID = 1000;
}
int hunter::get_kills(){
    return kills;
}
void hunter::set_kills(int k){
    kills = k;
}
string hunter::get_name(){
    return name;
}