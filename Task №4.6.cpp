#include <iostream>
#include <Windows.h> 
using namespace std;


int funSymbol(char symbol) {
	switch (symbol) {
	case 'I': return    1; break;
	case 'V': return    5; break;
	case 'X': return   10; break;
	case 'L': return   50; break;
	case 'C': return  100; break;
	case 'D': return  500; break;
	case 'M': return 1000; break;
	}
	return 0;
}


int main()
{
	setlocale(0, "");
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, 0x0d);
	string x = ""; // вводимое число
	cout << "x = ";
	cin >> x;

	for (int i = 0; i < x.size(); i++) // проверка всех line[i] на 0
		if (funSymbol(x[i]) == 0) {
			cout << "Неверный ввод";
			SetConsoleTextAttribute(h, 0x00);
			return 1;
		}

	int number = 0; // итоговое число-ответ
	int last = funSymbol(x[0]); // line[i-1] = начальный символ
	int counter = 1; // счётчик мест числа

	for (int i = 1; i < x.size(); i++) { // пробегание по всем символам line[i] строки
		if (counter > 2) {
			cout << "Неверный ввод";
			return 2;
		}

		int rimLine = funSymbol(x[i]); // символ line[i] в римской записи

		if (last == rimLine) // если line[i-1] = line[i]
			counter++;

		if (last < rimLine) // если меньшая цифра перед большей
			number -= (last * counter);

		if (last > rimLine) // если большая перед меньшей
			number += (last * counter);

		if (last != rimLine) // если line[i-1] не= line[i]
			counter = 1;

		last = rimLine; // line[i-1] становится line[i]
	}

	if (last == funSymbol(x[x.size() - 1])) {
		number += funSymbol(x[x.size() - 1]) * counter;
	}

	cout << "Число = " << number << endl;
	SetConsoleTextAttribute(h, 0x00);
	return 0;
}
