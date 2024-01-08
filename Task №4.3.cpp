#include <cstdlib>
#include <cmath>
#include <windows.h>
#include <fstream>
#include <map>
#include <iostream>
using namespace std;

void triangle_square()
{
    double semip, a, b, c;
    cout << "Введите 3 стороны треугольника через пробел: ";
    cin >> a >> b >> c;
    semip = (a + b + c) / 2;
    if (a <= 0 || b <= 0 || c <= 0) cout << "Ошибка. Введены неверные значения!";
    else if ((a + b) > c && (a + c) > b && (b + c) > a) {
        cout << "Площадь треугольника: " << sqrt(semip * (semip - a) * (semip - b) * (semip - c));
    }
    else cout << "Такой треугольник не может существовать!";
}

void rectangle_square()
{
    double a, b;
    cout << "Введите 2 стороны прямоугольника через пробел: ";
    cin >> a >> b;
    if (a <= 0 || b <= 0) cout << "Ошибка. Введены неверные значения!";
    else if (a == b) cout << "Это квадрат! его площадь: " << a * b;
    else cout << "Площадь прямоугольника: " << a * b;
}

void circle_square()
{
    double r, Pi = 3.1415926535;
    cout << "Введите радиус круга";
    cin >> r;
    if (r <= 0) cout << "Ошибка. Введено неверное значение";
    else cout << "Площадь круга:" << Pi * r * r;
}

void dz4_3()
{
    string figure;
    cout << "Вычисление площади фигуры" << endl;
    cout << "Площадь какой фигуры необходимо вычислить? (треугольник, квадрат или круг)" << endl;
    cin >> figure;
    map<string, int> mapping;

    mapping["треугольник"] = 1;
    mapping["квадрат"] = 2;
    mapping["круг"] = 3;

    switch (mapping[figure]) {
    case 1:
        rectangle_square();
        break;
    case 2:
        triangle_square();
        break;
    case 3:
        circle_square();
        break;
    default:
        cout << "Ошибка!";
    }
}
int main()
{
    setlocale(0, "");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    SetConsoleOutputCP(CP_UTF8);
    dz4_3();
}