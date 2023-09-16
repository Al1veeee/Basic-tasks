#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    setlocale(0, "");
    double a, b;
    while (true) {
        cout << "First number: ";
        if (!(cin >> a)) {
            cout << "Error! Use numbers only." << endl;
            return 0;
        }
        cout << "Second number: ";
        if (!(cin >> b)) {
            cout << "Error! Use numbers only." << endl;
            return 0;
        }
        cout << "Sum of first and second numbers: " << a + b << endl;
        cout << "Difference of first and second number: " << a - b << endl;
        cout << "Product of two numbers: " << a * b << endl;
        if (b != 0) {
            cout << "Divide quotient: " << a / b << endl;
        }
        else {
            cout << "Private is impossible." << endl;
        }
        cout << "Do you want to continue calculating? (y\n): ";
        char choice;
        cin >> choice;

        if (choice != 'y' && choice != 'Y')
            break;
    }
    return 0;
}