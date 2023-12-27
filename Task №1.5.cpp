#include <iostream>
using namespace std;

int main()
{
	string day, curtains, lamp;
	cout << "Is it light outside?(Enter \"yes\" or \"no\"):\n"; cin >> day; //Светло ли наружи?
	cout << "Are the curtains drawn?\n"; cin >> curtains; //Шторы раскрыты?
	cout << "Is the lamp on?\n"; cin >> lamp; //Лампа включена

	if (((day == "yes") && (curtains == "yes")) || (lamp == "yes"))
	{
		cout << "The room is bright";
	}
	else if (((day == "yes") || (day == "no")) && ((curtains == "yes") || (curtains == "no")) && ((lamp == "yes") || (lamp == "no")))
	{
		cout << "It's dark in the room";
	}
	else
	{
		cout << "Enter only YES or NO";
	}
}
