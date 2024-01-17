#include "lab2.h"

Worker::Worker(const string& n, const string& pos, int year, double sal)
    : name(n), position(pos), startYear(year), salary(sal) {}

void Worker::displayData() const 
{
    cout << "Ім'я: " << name << "\nПосада: " << position
        << "\nРік вступу на роботу: " << startYear << "\nЗарплата: " << salary << "\n\n";
}

int Worker::getExperience(int currentYear) const 
{
    return currentYear - startYear;
}

bool Worker::hasExperienceAbove(int years) const 
{
    return getExperience(2024) > years;
}

bool Worker::hasSalaryAbove(double amount) const 
{
    return salary > amount;
}

bool Worker::hasPosition(const string& pos) const {
    return position == pos;
}