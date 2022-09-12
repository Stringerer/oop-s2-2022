#ifndef _PLAYER_H
#define _PLAYER_H
#include <iostream>
#include <string>

using namespace std;

class Player
{
protected:
    char lMove;
    string Moves;
public:
    Player();
    virtual void move() = 0;
    string getMoves();
    char getMove(); //returns the most recent move made
    bool win(Player * opponent); //compares players’ moves to see who wins
}
#endif