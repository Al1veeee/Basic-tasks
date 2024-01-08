#include <fstream>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
	ofstream File_of("text.txt");
	int m = 10;
	for (int i = 1; i <= m; i++) {
		if (i != m) {
			File_of << i << "\n";
		}
		else {
			File_of << i;
		}
	}
	File_of.close();
	ifstream File_in("text.txt");
	string line;
	int sum = 0;
	while (!File_in.eof()) {
		getline(File_in, line);
		sum += stoi(line);
	}
	File_in.close();
	cout << sum;
}