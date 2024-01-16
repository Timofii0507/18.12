#ifndef LAB_H
#define LAB_H

#include <string>
#include <iostream>
using namespace std;

class Book 
{
private:
    string author;
    string title;
    string publisher;
    int year;
    int pageCount;

public:
    Book();
    explicit Book(const string& author, const string& title,
        const string& publisher, int year, int pageCount);

    void display() const;

    string getAuthor() const;
    string getPublisher() const;
    int getYear() const;
};

#endif
