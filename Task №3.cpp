#include <iostream>
#include <math.h>
#include <fstream>
#include <algorithm>
#include <string>
#include <windows.h>
using namespace std;

void dz3_1()
{
    double S, p, n, r, m; // S - сумма кредита, p - процентная ставка, n - срок кредита, r - процентная ставка в десятичном формате, m - размер ежемесячного платежа
    cout << "S = ";
    if (!(cin >> S)) {
        cout << "Ошибка! Вводите только числа.";
        return;
    }
    cout << "p = ";
    if (!(cin >> p)) {
        cout << "Ошибка! Вводите только числа.";
        return;
    }
    cout << "n = ";
    if (!(cin >> n) || (n <= 0)) {
        cout << "Ошибка! Вводите числа и только больше нуля.";
        return;
    }

    if (S <= 0) {
        cout << "Числа не могут быть меньше нуля! \n";
        return;
    }

    r = p / 100;

    if (p == 0) {
        m = S / (12 * n);
    }
    else {
        m = S * r * pow(1 + r, n) / (12 * (pow(1 + r, n) - 1));
    }

    if (12 * (pow(1 + r, n) - 1) < 0) {
        cout << "Ошибка! Вы не можете разделить на 0! \n";
        return;
    }

    cout << "m = " << m << endl;
}


void dz3_2()
{
    double S, n, mTest, m, r, rTemp = 0.0001;   //S - сумма кредита, n - срок кредита, mTest - размер ежемесячного платежа который необходимо достичь
    cout << "S = ";                        //m - текущий размер ежемесячного платежа, r - процентная ставка, rTemp - временная переменная
    if (!(cin >> S)) {
        cout << "Ошибка! Вводите только числа.";
        return;
    }
    cout << "n = ";
    if (!(cin >> n)) {
        cout << "Ошибка! Вводите только числа.";
        return;
    }
    cout << "mTest = ";
    if (!(cin >> mTest)) {
        cout << "Ошибка! Вводите только числа.";
        return;
    }
    cout << "m = ";
    if (!(cin >> m)) {
        cout << "Ошибка! Вводите только числа.";
        return;
    }

    if (n == 0 or S <= 0) {
        cout << "Неверный год или сумма кредита!\n";
        return;
    }

    while (m < mTest) {
        r = rTemp;
        m = S * r * pow(1 + r, n) / (12 * (pow(1 + r, n) - 1));
        rTemp = rTemp + 0.0001;
    }

    cout << "p = " << r * 100 << "%" << endl;
}

void dz3_3() {
    char userText[1000];

    cout << "Введите текст: " << endl;
    cin.getline(userText, 1000);

    ofstream fout("ffqq1.txt");

    if (!fout.is_open()) {
        cout << "Не удалось открыть файл для записи." << endl;
        return;
    }

    fout << userText;
    fout.close();

    ifstream fin("ffqq1.txt");

    if (!fin.is_open()) {
        cout << "Не удалось открыть файл для чтения." << endl;
        return;
    }

    char readline[1000];

    while (fin.getline(readline, 300)) {
        for (int i = 0; i < strlen(readline); i++) {
            cout << readline[i];
        }
        cout << "\n";
    }
    fin.close();
}

void dz3_4()
{
    char readline[1000];
    ifstream fin("ffqq2.txt");
    bool commaAdded = false;

    while (fin.getline(readline, 300))
    {
        if (strlen(readline) == 0)
            continue;

        for (int i = 0; i < strlen(readline); i++)
        {
            if (isdigit(readline[i]) || readline[i] == '-')
            {
                cout << readline[i];
                commaAdded = false;
            }
            else if (isalpha(readline[i]))
            {
                if (!commaAdded)
                {
                    cout << ",";
                    commaAdded = true;
                }
            }
        }

        cout << ",";
    }

    fin.close();
}

void customSort(string& x) {
    int n = x.length();
    bool swapped;
    do {
        swapped = false;
        for (int i = 0; i < n - 1; i++) {
            if (tolower(x[i]) > tolower(x[i + 1])) {
                swap(x[i], x[i + 1]);
                swapped = true;
            }
        }
    } while (swapped);
}

void dz3_5() {
    string x;
    int i = 0;
    cout << "Введите любые символы (буквы или цифры)." << endl;
    getline(cin, x);

    customSort(x);

    cout << x << endl;
}

int main()
{
    setlocale(0, "");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    //dz3_1();
    //dz3_2();
    //dz3_3();
    //dz3_4();
    //dz3_5(); 

    return 0;
}
