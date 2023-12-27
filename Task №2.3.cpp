#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;


int main() {
    setlocale(0, "");
    double x, y, b;
    cout << "Введите x: "; 
    if (!(cin >> x)) {
        cout << "Ошибка! Вводите только числа.";
        return 0;
    }
    cout << "Введите y: "; 
    if (!(cin >> y)) {
        cout << "Ошибка! Вводите только числа.";
        return 0;
    }
    cout << "Введите b: "; 
    if (!(cin >> b)) {
        cout << "Ошибка! Вводите только числа.";
        return 0;
    }
    if ((b - y) <= 0 || (b - x) < 0) {
        cout << "Числа должны соответствовать условиям: b - x <= 0 или b - y < 0" << endl;

        return 0;
    }
    cout << "z = " << log(b - y) * sqrt(b - x) << endl;

    return 0;
}