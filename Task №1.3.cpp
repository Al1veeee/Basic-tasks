#include <iostream>
using namespace std;

int main()
{
	float b, c;
	cout << "Enter B and C" << "\n";
	if (!(cin >> b >> c)) {
		cout << "Error! Use numbers only." << endl;
		return 0;
	}
	if (b == 0 || c == 0)
	{
		cout << "No solution";
	}
	else cout << "x = " << (-c / b);
}
