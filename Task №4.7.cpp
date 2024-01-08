#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	int k = 0;
	int s = 0;
	int m, b, c;
	cout << "m = ";
	if (!(cin >> m)) {
		cout << "Ошибка ввода! Попробуйте ещё раз";
		return 0;
	}
	cout << "b = ";
	if (!(cin >> b)) {
		cout << "Ошибка ввода! Попробуйте ещё раз";
		return 0;
	}
	cout << "c = ";
	if (!(cin >> c)) {
		cout << "Ошибка ввода! Попробуйте ещё раз";
		return 0;
	}
	for (int i = 0; i < 10; i++) {
		s = (m * k + b) % c;
		k = s;
		cout << s << "\n";

	}
}