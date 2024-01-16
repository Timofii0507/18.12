#include "lab.h"

Book::Book()
    : year(0), pageCount(0) {}

Book::Book(const string& author, const string& title,
    const string& publisher, int year, int pageCount)
    : author(author), title(title), publisher(publisher), year(year), pageCount(pageCount) {}

void Book::display() const
{
    cout << "Автор: " << author << "\nНазва: " << title << "\nВидавництво: " << publisher
        << "\nРік: " << year << "\nКількість сторінок: " << pageCount << "\n\n";
}

string Book::getAuthor() const 
{
    return author;
}

string Book::getPublisher() const
{
    return publisher;
}

int Book::getYear() const 
{
    return year;
}
