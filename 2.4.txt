#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;


int main() {
    setlocale(0, "");
    int n;
    cout << "Введите N: "; cin >> n;
    if (n <= 0) {
        cout << "Ошибка! N - не натуральное число." << endl;
        return 0;
    }
    for (int i = n; i < n + 10; i++) {
        if (i != n + 9) {
            cout << i << ", ";
        }
        else {
            cout << i << "." << endl;
        }
    }
    return 0;
}