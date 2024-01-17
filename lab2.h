#ifndef LAB2_H
#define LAB2_H

#include <iostream>
#include <string>

using namespace std;

class Worker 
{
private:
    string name;
    string position;
    int startYear;
    double salary;

public:
    Worker() = default;
    explicit Worker(const string& n, const string& pos, int year, double sal);
    void displayData() const;
    int getExperience(int currentYear) const;
    bool hasExperienceAbove(int years) const;
    bool hasSalaryAbove(double amount) const;
    bool hasPosition(const string& pos) const;
};

#endif 