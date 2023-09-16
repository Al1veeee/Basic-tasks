#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
    setlocale(0, "");
    double a, b, c, d;
    cout << "Enter A: "; cin >> a;
    cout << "Enter B: "; cin >> b;
    cout << "Enter C: "; cin >> c;
    d = b * b - 4 * a * c;
    if (d < 0) {
        cout << "No solution" << endl;
    }
    else if (d == 0) {
        if (a == 0) {
            cout << "Division is impossible" << endl;
            return 0;
        }
        cout << "x = " << (-b + sqrt(d)) / (2 * a);
    }
    else {
        if (a == 0) {
            cout << "Division is impossible" << endl;
            return 0;
        }
        cout << "x_1 = " << (-b + sqrt(d)) / (2 * a) << endl;
        cout << "x_2 = " << (-b - sqrt(d)) / (2 * a) << endl;
    }
    system("pause");