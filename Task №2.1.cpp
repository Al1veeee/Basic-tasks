#define _USE_MATH_DEFINES
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    setlocale(0, "");
    double h, R, r, l;
    cout << "Введите h: ";
    if (!(cin >> h)) {
        cout << "Ошибка! Вводите только числа.";
        return 0;
    }
    cout << "Введите r: ";
    if (!(cin >> r)) {
        cout << "Ошибка! Вводите только числа.";
        return 0;
    }
    cout << "Введите R: ";
    if (!(cin >> R)) {
        cout << "Ошибка! Вводите только числа.";
        return 0;
    }
    cout << "Введите l: ";
    if (!(cin >> l)) {
        cout << "Ошибка! Вводите только числа.";
        return 0;
    }
    if (sqrt(pow(h, 2) + pow((R - r), 2)) != l) {
        cout << "Конус не существует" << endl;
        system("Pause");
        return 0;
    }
    if (r >= R) {
        if (r == R && h == l) {
            cout << "V цилиндра = " << (M_PI * pow(r, 2) * h) << endl;
            cout << "S цилиндра = " << (2 * M_PI * pow(r, 2) + 2 * M_PI * r * h) << endl;
        }
        else {
            cout << "Нет решения." << endl;
        }
        system("Pause");
        return 0;
    }
    if (h < 0 || R < 0 || r < 0 || l < 0) {
        cout << "Ошибка! Отрицательных величин быть не может." << endl;
        system("Pause");
        return 0;
    }
    else {
        cout << "V = " << (1. / 3.) * M_PI * h * (pow(R, 2) + R * r + pow(R, 2)) << endl;
    }

    cout << "S = " << M_PI * (pow(R, 2) + (R + r) * l + pow(r, 2)) << endl;
    system("Pause");
    return 0;
}