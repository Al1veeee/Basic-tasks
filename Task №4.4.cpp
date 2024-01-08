#include <iostream>
using namespace std;

int main() {
    char flag[13][30];

	for (int x = 0; x < 8; x++) {
		for(int y = 0; y < 6; y++) {
			flag[x][y] = '*';
		}
	}

	for (int x = 0; x < 8; x++) {
		for(int y = 6; y < 30; y++) {
			flag[x][y] = '_';
		}
	}

	for (int x = 8; x < 13; x++) {
	    for (int y = 0; y < 30; y++) {
	        flag[x][y] = '_';
	    }
	    cout << endl;
	}	

	// Вывод
	for (int x = 0; x < 13; x++) {
	    for (int y = 0; y < 30; y++) {
	        cout << flag[x][y];
	    }
	    cout << endl;
	}

}