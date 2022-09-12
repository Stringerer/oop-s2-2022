#include <iostream>
#include <string>
#include "Player.h"

using namespace std;

Player::Player(){
    lMove = "";
    Moves = "";
}
string Player::getMoves(){
    return Moves;
}
char Player::getMove(){
    return lMove;
}
bool Player::(Player * opponent){
    switch(Player.getMove()){
        case r:
            if (opponent.getMove() = s){
                return true;
            }
            else {
                return false;
            }
        case s:
            if (opponent.getMove() = p){
                return true;
            }
            else{
                return false;
            }
        case p:
            if (opponent.getMove() = r){
                return true;
            }
            else {
                return false;
            }
    }
}