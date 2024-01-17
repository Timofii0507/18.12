#include "hm.h"

#include <fstream>
#include <Windows.h>

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string name;
    double width, length, maxDepth;
    cout << "������ ����� �������: ";
    getline(cin, name);
    cout << "������ ������ �������: ";
    cin >> width;
    cout << "������ ������� �������: ";
    cin >> length;
    cout << "������ ����������� ������� �������: ";
    cin >> maxDepth;
    Reservoir sea(name, width, length, maxDepth);
    sea.displayInfo();
    if (sea.isSea()) 
    {
        cout << "������� � �����." << endl;
    }
    else 
    {
        cout << "������� �� � �����." << endl;
    }
    Reservoir seaCopy = sea.copy();
    cout << "���� ��'���� ��������." << endl;
    Reservoir pond;
    pond.setName("����");
    pond.setWidth(5.0);
    pond.setLength(8.0);
    pond.setMaxDepth(2.0);

    double areaDifference = sea.compareSurfaceArea(pond);
    if (areaDifference > 0)
    {
        cout << "����� ������� ������� ���� ����� �� ����� ������� ����� �� " << areaDifference << endl;
    }
    else if (areaDifference < 0) 
    {
        cout << "����� ������� ������� ���� ����� �� ����� ������� ����� �� " << -areaDifference << endl;
    }
    else 
    {
        cout << "����� ������� ������ ���." << endl;
    }
    ofstream outFile("reservoir.txt");
    outFile << "���������� ��� �������:" << endl;
    outFile << "�����: " << sea.getName() << ", ������: " << sea.getWidth() << ", �������: " << sea.getLength()
        << ", ����������� �������: " << sea.getMaxDepth() << endl;
    outFile << "����: " << (sea.isSea() ? "���" : "�") << endl;
    outFile << endl;
    outFile << "���� ��'����:" << endl;
    outFile << "�����: " << seaCopy.getName() << ", ������: " << seaCopy.getWidth() << ", �������: " << seaCopy.getLength()
        << ", ����������� �������: " << seaCopy.getMaxDepth() << endl;
    outFile << endl;
    outFile << "��������� � ����� ��������:" << endl;
    outFile << "����� ������� ������� ����: " << sea.calculateSurfaceArea() << endl;
    outFile << "����� ������� �����: " << pond.calculateSurfaceArea() << endl;
    outFile.close();
    return 0;
}