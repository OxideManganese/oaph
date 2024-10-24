# include <iostream>
# include <math.h>
int main()
{
    setlocale(LC_ALL, "ru");
	using namespace std;
    double x, epsilon, sum, term, exact;
    int sign;

    cout << "Введите значение x (-1 < x < 1): ";
    cin >> x;

    cout << "Введите точность epsilon: ";
    cin >> epsilon;

    // Инициализация переменных
    sum = term = sign = 1;


    //Цикл с постусловием
    do {
        sign = -sign;
        term *= x * sign;
        sum += term;
    } while (abs(term) > epsilon);

    exact = 1 / (x + 1);
    cout << "Результат вычисления функции 1/(x+1): " << exact << endl;
    cout << "Результат с разложением в ряд: " << sum << endl;

    return 0;
}