#include "lab2.h"
#include <Windows.h>

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const int maxWorkers = 100; 
    Worker workers[maxWorkers];
    int numberOfWorkers;
    cout << "Введіть кількість працівників: ";
    cin >> numberOfWorkers;
    for (int i = 0; i < numberOfWorkers; ++i) 
    {
        string name, position;
        int startYear;
        double salary;
        cout << "\nВведіть дані для працівника #" << (i + 1) << ":\n";
        cout << "Ім'я: ";
        cin.ignore();
        getline(cin, name);
        cout << "Посада: ";
        getline(cin, position);
        cout << "Рік вступу на роботу: ";
        cin >> startYear;
        cout << "Зарплата: ";
        cin >> salary;
        workers[i] = Worker(name, position, startYear, salary);
    }
    int requiredExperience;
    cout << "\nВведіть кількість років стажу для фільтрації: ";
    cin >> requiredExperience;
    cout << "Список працівників, стаж роботи яких перевершує " << requiredExperience << " років:\n";
    for (int i = 0; i < numberOfWorkers; ++i) 
    {
        if (workers[i].hasExperienceAbove(requiredExperience)) 
        {
            workers[i].displayData();
        }
    }
    double requiredSalary;
    cout << "\nВведіть мінімальну зарплату для фільтрації: ";
    cin >> requiredSalary;
    cout << "Список працівників, зарплата яких перевищує " << requiredSalary << ":\n";
    for (int i = 0; i < numberOfWorkers; ++i) 
    {
        if (workers[i].hasSalaryAbove(requiredSalary))
        {
            workers[i].displayData();
        }
    }
    string requiredPosition;
    cout << "\nВведіть посаду для фільтрації: ";
    cin.ignore();
    getline(cin, requiredPosition);
    cout << "Список працівників, які займають посаду " << requiredPosition << ":\n";
    for (int i = 0; i < numberOfWorkers; ++i) 
    {
        if (workers[i].hasPosition(requiredPosition))
        {
            workers[i].displayData();
        }
    }
    return 0;
}