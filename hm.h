#ifndef HM_H
#define HM_H

#include <iostream>
#include <string>

using namespace std;

class Reservoir
{
private:
    string name;
    double width;
    double length;
    double maxDepth;

public:
    explicit Reservoir(const string& n = "", double w = 0.0, double l = 0.0, double d = 0.0);
    Reservoir(const Reservoir& other);
    ~Reservoir();
    double calculateVolume() const;
    double calculateSurfaceArea() const;
    bool sameType(const Reservoir& other) const;
    bool operator==(const Reservoir& other) const;
    Reservoir& operator=(const Reservoir& other);
    const string& getName() const;
    void setName(const string& n);
    double getWidth() const;
    void setWidth(double w);
    double getLength() const;
    void setLength(double l);
    double getMaxDepth() const;
    void setMaxDepth(double d);
    void displayInfo() const;  
    bool isSea() const;       
    bool isPond() const;      
    double compareSurfaceArea(const Reservoir& other) const;  
    Reservoir copy() const; 
};

#endif 
