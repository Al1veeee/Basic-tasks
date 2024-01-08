#include <vector>
#include <iostream>
#include <Windows.h>
using namespace std;
int main() {
	setlocale(0, "");
	int A[3][4];
	float B[4][2];
	A[0][0] = 5;
	A[0][1] = 2;
	A[0][2] = 0;
	A[0][3] = 10;
	A[1][0] = 3;
	A[1][1] = 5;
	A[1][2] = 2;
	A[1][3] = 5;
	A[2][0] = 20;
	A[2][1] = 0;
	A[2][2] = 0;
	A[2][3] = 0;
	B[0][0] = 1.20;
	B[0][1] = 0.50;
	B[1][0] = 2.80;
	B[1][1] = 0.40;
	B[2][0] = 5.00;
	B[2][1] = 1.00;
	B[3][0] = 2.00;
	B[3][1] = 1.50;
	float c = 0, ic, k = 0, ik, sumk = 0, sumc = 0, oldk = 0, oldc = 0, ikm, icm, oldkm = 1000000000, oldcm = 1000000000;
	for (size_t i = 0; i < 3; i++) {
		c = 0;
		k = 0;
		for (size_t j = 0; j < 4; j++) {
			c += A[i][j] * B[j][0];
			k += A[i][j] * B[j][1];
		}
		sumk += k;
		sumc += c;
		if (k > oldk) {
			oldk = k;
			ik = i + 1;
		}
		if (c + k > oldc) {
			oldc = c + k;
			ic = i + 1;
		}
		if (k < oldkm) {
			oldkm = k;
			ikm = i + 1;
		}
		if (c + k < oldcm) {
			oldcm = c + k;
			icm = i + 1;
		}
	}
	cout << "1) " << "Максимум " << ic << " продавец : " << oldc << "\n   Минимум " << icm << " продавец : " << oldcm << "\n";
	cout << "2) " << "Максимум " << ik << " продавец : " << oldk << "\n   Минимум " << ikm << " продавец : " << oldkm << "\n";
	cout << "3) " << "Общая сумма : " << sumc + sumk << "\n";
	cout << "4) " << "Всего комиссионных : " << sumk << "\n";
	cout << "5) " << "общая сумма денег, прошедших через руки продавцов : " << sumc << "\n";


}