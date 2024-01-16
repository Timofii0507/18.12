#include "lab.h"
#include <Windows.h>


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const int maxSize = 100; 
    Book books[maxSize];
    int bookCount; 
    cout << "������ ������� ����: ";
    cin >> bookCount;
    cin.ignore();
    for (int i = 0; i < bookCount; ++i) 
    {
        string author, title, publisher;
        int year, pageCount;
        cout << "\n������ ��� ��� ����� " << i + 1 << ":\n";
        cout << "�����: ";
        getline(cin, author);
        cout << "�����: ";
        getline(cin, title);
        cout << "�����������: ";
        getline(cin, publisher);
        cout << "г�: ";
        cin >> year;
        cout << "ʳ������ �������: ";
        cin >> pageCount;
        books[i] = Book(author, title, publisher, year, pageCount);
        cin.ignore();
    }
    string searchAuthor;
    cout << "\n������ ������ ��� ������: ";
    getline(cin, searchAuthor);
    for (int i = 0; i < bookCount; ++i) 
    {
        if (books[i].getAuthor() == searchAuthor) 
        {
            books[i].display();
        }
    }
    string searchPublisher;
    cout << "\n������ ����������� ��� ������: ";
    getline(cin, searchPublisher);
    for (int i = 0; i < bookCount; ++i) 
    {
        if (books[i].getPublisher() == searchPublisher) 
        {
            books[i].display();
        }
    }
    int searchYear;
    cout << "\n������ �� ��� ������ ����: ";
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
