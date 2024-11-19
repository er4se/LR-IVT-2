#include <iostream>             //ЛАБОРАТОРНАЯ РАБОТА №2
                                //ВАРИАНТ 8
using namespace std;

class Object {                  //Класса Object
protected:
    int A, B, C;                //Защищенные атрибуты integer

public:                         //Публичные конструктор и дружественная функция
    Object(int X, int Y, int Z) : A(X), B(Y), C(Z) {}   
    friend int operator% (const Object& main, const Object& divider);
};
                                //Перегрузка оператора
int operator% (const Object& main, const Object& divider) {

    return (main.A % divider.A)
         + (main.B % divider.B)
         + (main.C % divider.C);
}

int main()
{
    int A, B, C;
                                //Ввод значений Объекта 1
    cout << "Input first object values: ";
    cin >> A >> B >> C;
    Object main(A, B, C);
                                //Ввод значений Объекта 2
    cout << "\nInput second object values: ";
    cin >> A >> B >> C;
    Object divider(A, B, C);

    cout << "\nYour answer is: " << main % divider;
}