#ifndef BOOKS_H
#define BOOKS_H
#include <iostream>
#include <string>

class Books
{
public:
    Books();
    int bookId;
    void setBookId(int bookId_);
    int getBookId();
};

#endif // BOOKS_H