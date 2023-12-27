#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    setlocale(0, "");
    float x = -4;

    cout << setw(10) << "x" << setw(20) << "y(x)" << endl;

    while (x <= 4.) {
        if (x != 1) {
            cout << setw(10) << x << setw(20) << (pow(x, 2) - 2 * x + 2) / (x - 1) << endl;
        }
        else {
            cout << setw(10) << "1" << setw(20) << "Делить на ноль нельзя" << endl;
        }
        x += 0.5;
    }

    return 0;
}
