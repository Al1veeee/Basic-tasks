#include <cstdlib>
#include <cmath>
#include <windows.h>
#include <iostream>
using namespace std;

int znak(int m) {
  if (m > 0) {
    return(1);
  }
  else if (m == 0) {
    return(m);
  }
  else {
    return(-1);
  }
}
int main() {
  setlocale(0, "");
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);
  int x;
  if (!(cin >> x)) {
  cout << "Ошибка! Вводите только числа.";
    return 0;
  }
  else {
    cout << znak(x);
  }
}