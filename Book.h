#ifndef BOOK_H
#define BOOK_H

#include <string>

using namespace std;

class Book
{
public: 
    Book();
    Book(string bname);
    string name;
    ~Book();
};
#endif //BOOK_H