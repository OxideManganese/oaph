#include <iostream>

using namespace std;

int main() {
    setlocale(0, "");
    const int N = 6;
    const int M = 5;
    int matrix[N][M];
    int minRowSum;
    int minRowIndex = -1;
    int n = 0;
    int i = 0;
    int j = 0;

    cout << "Введите элементы матрицы " << N << "x" << M << ":" << endl;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> matrix[i][j];
        }
    }

    cout << "Введите номер элемента n (i, j), который нужно возвести в квадрат: " << endl;
    cout << "i: ";
    cin >> i;
    cout << "j: ";
    cin >> j;
    
    // Проверка, что номер элемента n(i, j) в пределах матрицы
    if (i >= 0 && i < N && j >= 0 && j < M) {
        n = matrix[i][j];
        matrix[i][j] *= matrix[i][j]; // Возводим в квадрат элемент n(i, j)
    } else {
        cout << "Некорректный номер элемента n(i, j)." << endl;
        return 1; // Выход из программы с кодом ошибки
    }
    
    minRowSum = matrix[0][0];
    // Находим строку с минимальной суммой
    for (int row = 0; row < N; ++row) {
        int rowSum = 0;
        for (int col = 0; col < M; ++col) {
            rowSum += matrix[row][col];
        }
        if (rowSum < minRowSum) {
            minRowSum = rowSum;
            minRowIndex = row;
        }
    }

    cout << "Строка с минимальной суммой элементов: " << minRowIndex << endl;
    cout << "Матрица с возведенным в квадрат элементом n(i, j):" << endl;
    for (int row = 0; row < N; ++row) {
        for (int col = 0; col < M; ++col) {
            cout << matrix[row][col] << " ";
        }
        cout << endl;
    }

    return 0;
}
