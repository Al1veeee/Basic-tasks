#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <Windows.h>
using namespace std;
int per(char& s) {
	switch (s) {
	case '1': return(1);
	case '2': return(2);
	case '3': return(3);
	case '4': return(4);
	case '5': return(5);
	case '6': return(6);
	case '7': return(7);
	case '8': return(8);
	case '9': return(9);
	case '0': return(0);
	case 'B': return(11);
	case 'C': return(12);
	case 'D': return(13);
	case 'E': return(14);
	case 'F': return(15);
	}
}
int main() {
	setlocale(0, "");
	string a, rez = "";
	int b, k = 0, des = 0, c;
	cout << "Введите число: ";
	if (!(cin >> a)) {
		cout << "Ошибка ввода!" << "\n";
		return 0;
	}
	cout << "В какой она системе счисления: ";
	if (!(cin >> b)) {
		cout << "Ошибка ввода!" << "\n";
		return 0;
	}
	cout << "В какую систему счисления перевести число: ";
	if (!(cin >> c)) {
		cout << "Ошибка ввода!" << "\n";
		return 0;
	}
	reverse(a.begin(), a.end());
	for (char el : a) {
		des += per(el) * pow(b, k);
		k++;
	}
	k = 0;
	while (des != 0) {
		rez += to_string(des % c);
		des = des / c;
	}
	reverse(rez.begin(), rez.end());
	cout << "Полученное число: " << rez;
}