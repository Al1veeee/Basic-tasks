#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;


int main() {
    setlocale(0, "");
    double x, a;
    cout << "Введите x: ";
    if (!(cin >> x)) {
        cout << "Ошибка! Вводите только числа.";
        return 0;
    }
    cout << "Введите a: ";
    if (!(cin >> a)) {
        cout << "Ошибка! Вводите только числа.";
        return 0;
    }
    if (x < 1) {
        if (x == 0) {
            cout << "x не может быть равен 0." << endl;
            system("Pause");
            return 0;
        }
        cout << "x < 1, w = " << a * log(abs(x)) << endl;
    }
    else {
        if (a - pow(x, 2) >= 0) {
            cout << "x >= 1; w = " << sqrt(a - pow(x, 2)) << endl;
        }
        else {
            cout << "Корень из отрицательного числа" << endl;
        }
    }
    return 0;
}