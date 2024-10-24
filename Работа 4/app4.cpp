//Лабораторная работа 4
//Программирование циклов с параметром.
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	setlocale(0, "");
    double numbers[10];
    int countBiggest = 0;
    double sumInDiaposone = 0;

    cout << "Введите 10 вещественных чисел:" << endl;
    for (int i = 0; i < 10; ++i) {
        cin >> numbers[i];
    }

    for (int i = 0; i < 10; ++i) {
        if (numbers[i] >= 1.5) {
            countBiggest++;
        }

        if (numbers[i] < 0 && numbers[i] >= -1) {
            sumInDiaposone += numbers[i];
        }
    }

    cout << "Количество чисел, больших или равных 1.5: " << countBiggest << endl;
    cout << "Сумма отрицательных чисел в диапазоне [-1..0]: " << fixed << setprecision(2) << sumInDiaposone << endl;

    return 0;
}
