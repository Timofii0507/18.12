#include "hm.h"

#include <fstream>
#include <Windows.h>

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string name;
    double width, length, maxDepth;
    cout << "Введіть назву водойми: ";
    getline(cin, name);
    cout << "Введіть ширину водойми: ";
    cin >> width;
    cout << "Введіть довжину водойми: ";
    cin >> length;
    cout << "Введіть максимальну глибину водойми: ";
    cin >> maxDepth;
    Reservoir sea(name, width, length, maxDepth);
    sea.displayInfo();
    if (sea.isSea()) 
    {
        cout << "Водойма є морем." << endl;
    }
    else 
    {
        cout << "Водойма не є морем." << endl;
    }
    Reservoir seaCopy = sea.copy();
    cout << "Копія об'єкта створена." << endl;
    Reservoir pond;
    pond.setName("Пруд");
    pond.setWidth(5.0);
    pond.setLength(8.0);
    pond.setMaxDepth(2.0);

    double areaDifference = sea.compareSurfaceArea(pond);
    if (areaDifference > 0)
    {
        cout << "Площа поверхні Чорного моря більша за площу поверхні пруду на " << areaDifference << endl;
    }
    else if (areaDifference < 0) 
    {
        cout << "Площа поверхні Чорного моря менша за площу поверхні пруду на " << -areaDifference << endl;
    }
    else 
    {
        cout << "Площі поверхні водойм рівні." << endl;
    }
    ofstream outFile("reservoir.txt");
    outFile << "Інформація про водойму:" << endl;
    outFile << "Назва: " << sea.getName() << ", Ширина: " << sea.getWidth() << ", Довжина: " << sea.getLength()
        << ", Максимальна глибина: " << sea.getMaxDepth() << endl;
    outFile << "Море: " << (sea.isSea() ? "так" : "ні") << endl;
    outFile << endl;
    outFile << "Копія об'єкта:" << endl;
    outFile << "Назва: " << seaCopy.getName() << ", Ширина: " << seaCopy.getWidth() << ", Довжина: " << seaCopy.getLength()
        << ", Максимальна глибина: " << seaCopy.getMaxDepth() << endl;
    outFile << endl;
    outFile << "Порівняння з іншою водоймою:" << endl;
    outFile << "Площа поверхні Чорного моря: " << sea.calculateSurfaceArea() << endl;
    outFile << "Площа поверхні пруду: " << pond.calculateSurfaceArea() << endl;
    outFile.close();
    return 0;
}