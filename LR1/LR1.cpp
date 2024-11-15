#include <iostream>                             //ЛАБОРАТОРНАЯ РАБОТА №1
#include <cmath>                                //ВАРИАНТ 8

using namespace std;

const double e = 2.72;                          //Константа экспоненты

int main()
{
    double x, y;

    cout << "Option 8\n" << "Input X value: ";  //Ввод значения
    cin >> x; cout << endl;

    y = (3 + pow(e, x - 1)) /                   //Вычисление функции
        (x * x + fabs(1 - (1 / tan(x))));

    cout << "Result: " << y << endl;            //Вывод результата

    return 0;
}
