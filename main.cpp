#include "lab.h"
#include <Windows.h>


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const int maxSize = 100; 
    Book books[maxSize];
    int bookCount; 
    cout << "Введіть кількість книг: ";
    cin >> bookCount;
    cin.ignore();
    for (int i = 0; i < bookCount; ++i) 
    {
        string author, title, publisher;
        int year, pageCount;
        cout << "\nВведіть дані для книги " << i + 1 << ":\n";
        cout << "Автор: ";
        getline(cin, author);
        cout << "Назва: ";
        getline(cin, title);
        cout << "Видавництво: ";
        getline(cin, publisher);
        cout << "Рік: ";
        cin >> year;
        cout << "Кількість сторінок: ";
        cin >> pageCount;
        books[i] = Book(author, title, publisher, year, pageCount);
        cin.ignore();
    }
    string searchAuthor;
    cout << "\nВведіть автора для пошуку: ";
    getline(cin, searchAuthor);
    for (int i = 0; i < bookCount; ++i) 
    {
        if (books[i].getAuthor() == searchAuthor) 
        {
            books[i].display();
        }
    }
    string searchPublisher;
    cout << "\nВведіть видавництво для пошуку: ";
    getline(cin, searchPublisher);
    for (int i = 0; i < bookCount; ++i) 
    {
        if (books[i].getPublisher() == searchPublisher) 
        {
            books[i].display();
        }
    }
    int searchYear;
    cout << "\nВведіть рік для пошуку після: ";
    cin >> searchYear;
    for (int i = 0; i < bookCount; ++i) 
    {
        if (books[i].getYear() > searchYear) 
        {
            books[i].display();
        }
    }
    return 0;
}
