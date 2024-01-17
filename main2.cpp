#include "lab2.h"
#include <Windows.h>

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const int maxWorkers = 100; 
    Worker workers[maxWorkers];
    int numberOfWorkers;
    cout << "������ ������� ����������: ";
    cin >> numberOfWorkers;
    for (int i = 0; i < numberOfWorkers; ++i) 
    {
        string name, position;
        int startYear;
        double salary;
        cout << "\n������ ��� ��� ���������� #" << (i + 1) << ":\n";
        cout << "��'�: ";
        cin.ignore();
        getline(cin, name);
        cout << "������: ";
        getline(cin, position);
        cout << "г� ������ �� ������: ";
        cin >> startYear;
        cout << "��������: ";
        cin >> salary;
        workers[i] = Worker(name, position, startYear, salary);
    }
    int requiredExperience;
    cout << "\n������ ������� ���� ����� ��� ����������: ";
    cin >> requiredExperience;
    cout << "������ ����������, ���� ������ ���� ��������� " << requiredExperience << " ����:\n";
    for (int i = 0; i < numberOfWorkers; ++i) 
    {
        if (workers[i].hasExperienceAbove(requiredExperience)) 
        {
            workers[i].displayData();
        }
    }
    double requiredSalary;
    cout << "\n������ �������� �������� ��� ����������: ";
    cin >> requiredSalary;
    cout << "������ ����������, �������� ���� �������� " << requiredSalary << ":\n";
    for (int i = 0; i < numberOfWorkers; ++i) 
    {
        if (workers[i].hasSalaryAbove(requiredSalary))
        {
            workers[i].displayData();
        }
    }
    string requiredPosition;
    cout << "\n������ ������ ��� ����������: ";
    cin.ignore();
    getline(cin, requiredPosition);
    cout << "������ ����������, �� �������� ������ " << requiredPosition << ":\n";
    for (int i = 0; i < numberOfWorkers; ++i) 
    {
        if (workers[i].hasPosition(requiredPosition))
        {
            workers[i].displayData();
        }
    }
    return 0;
}