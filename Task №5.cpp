#include <iostream>
using namespace std;

int main()
{
	string day, curtains, lamp;
	cout << "Is it light outside?(Enter \"yes\" or \"no\"):\n"; cin >> day;
	cout << "Are the curtains drawn?\n"; cin >> curtains;
	cout << "Is the lamp on?\n"; cin >> lamp;

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