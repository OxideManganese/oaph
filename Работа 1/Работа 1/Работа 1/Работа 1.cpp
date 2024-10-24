//Лабораторная работа 1
//с использованием библиотеки классов языка С++
// потоковый ввод-вывод
# include <iostream>
# include <cmath>

int main() {

    setlocale(0, "");
    // Исходные данные
    double A = 6.84;
    double B = 3.22;
    double C = 4;
    double D = 2.5;

    // Вычисление Y
    double Y = (pow(sin(C), 3) * pow(cos(A), 2)) / (5 * pow(sin(D), B));

    // Вывод результата с использованием cout
    std::cout << "Результат (с использованием cout): " << Y << std::endl;

    // Вывод результата с использованием printf
    printf("Результат (с использованием printf): %F", Y);

    return 0;
}
