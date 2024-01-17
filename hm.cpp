#include "hm.h"

Reservoir::Reservoir(const string& n, double w, double l, double d)
    : name(n), width(w), length(l), maxDepth(d) {}

Reservoir::Reservoir(const Reservoir& other)
    : name(other.name), width(other.width), length(other.length), maxDepth(other.maxDepth) {}

Reservoir::~Reservoir() {}

double Reservoir::calculateVolume() const 
{
    return width * length * maxDepth;
}

double Reservoir::calculateSurfaceArea() const 
{
    return width * length;
}

bool Reservoir::sameType(const Reservoir& other) const 
{
    return (isSea() && other.isSea()) || (isPond() && other.isPond());
}

bool Reservoir::operator==(const Reservoir& other) const 
{
    return name == other.name && width == other.width && length == other.length && maxDepth == other.maxDepth;
}

Reservoir& Reservoir::operator=(const Reservoir& other) 
{
    if (this != &other) 
    {
        name = other.name;
        width = other.width;
        length = other.length;
        maxDepth = other.maxDepth;
    }
    return *this;
}

const string& Reservoir::getName() const 
{
    return name;
}

void Reservoir::setName(const string& n) 
{
    name = n;
}

double Reservoir::getWidth() const
{
    return width;
}

void Reservoir::setWidth(double w)
{
    width = w;
}

double Reservoir::getLength() const 
{
    return length;
}

void Reservoir::setLength(double l) 
{
    length = l;
}

double Reservoir::getMaxDepth() const 
{
    return maxDepth;
}

void Reservoir::setMaxDepth(double d) 
{
    maxDepth = d;
}

void Reservoir::displayInfo() const 
{
    cout << "Назва: " << getName() << ", Ширина: " << getWidth() << ", Довжина: " << getLength()
        << ", Максимальна глибина: " << getMaxDepth() << endl;
}

bool Reservoir::isSea() const 
{
    return calculateSurfaceArea() > 1000.0;
}

bool Reservoir::isPond() const 
{
    return calculateSurfaceArea() < 10.0;
}

double Reservoir::compareSurfaceArea(const Reservoir& other) const
{
    return calculateSurfaceArea() - other.calculateSurfaceArea();
}

Reservoir Reservoir::copy() const
{
    return Reservoir(*this);
}