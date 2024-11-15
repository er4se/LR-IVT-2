//ПРИМЕЧАНИЕ! В КОМПИЛЯТОРЕ VISUAL STUDIO ВЫВОД КИРИЛЛИЦЫ ДАЖЕ С УЧЕТОМ КОДИРОВКИ - НЕВЕРНЫЙ

#include <iostream>                             //ЛАБОРАТОРНАЯ РАБОТА №1
#include <cmath>                                //ВАРИАНТ 8
#include <string>
#include <iomanip>

using namespace std;

void outputChar(char CHAR) {                    //Вывод символа
    cout << "Символ: " << CHAR << endl
         << "Код:" << (int)CHAR << endl
         << endl;
}

void outputString(string STR) {                 //Вывод строки
    cout << "Строка: " << STR << endl
        << "Длина: " << STR.length() << endl
        << endl;
}

void outputInts(int INT, int NINT) {            //Вывод целочисленных положительного и отрицательного чисел
    int ratio;
    cout << "Введите коэффициент: ";
    cin >> ratio; cout << endl;

    cout << "Вывод в десятичном и шестнадцатеричном виде: "
        << endl << "10-ое: " << INT << "; " << NINT << endl
        << "16-ое: " << hex << INT << "; " << hex << NINT << endl;

    cout << dec;

    cout << "Вывод с минимальной заданной шириной: "
        << endl << setw(ratio) << INT
        << "; " << setw(ratio) << NINT << endl;

    cout << "Вывод со смещением вправо: "
        << endl << setw(ratio) << setfill(' ') << INT
        << "; " << setw(ratio) << setfill(' ') << NINT << endl;

    cout << "Вывод со смещением влево: "
        << endl << setw(ratio) << setfill('0') << INT
        << "; -" << setw(ratio) << setfill('0') << NINT*(-1) << endl;

    cout << endl;
}

void outputFloats(float FLT, float NFLT) {      //Вывод чисел с плавающей точкой
    int ratio;
    cout << "Введите точность: ";
    cin >> ratio; cout << endl;

    cout << "Вывод в десятичном виде: "
        << endl << fixed << setprecision(ratio) << FLT
        << "; " << NFLT << endl;

    cout << "Эспоненциальный вывод: "
        << endl << scientific << FLT
        << "; " << NFLT << endl;

    cout << endl;
}

void outputUnsignedInt(unsigned int UINT) {     //Вывод беззнакового целого числа
    cout << "Десятичный вывод: " << UINT << endl
        << "Восьмеричный вывод: " << oct << UINT << endl
        << "Шестнадцатеричный вывод: " << hex << UINT << endl;
    cout << dec << endl;
}

int main()
{
    setlocale(LC_ALL, "");                      //Кодировка

    char            CHAR;
    string          STR;
    int             INT, NINT;
    float           FLT, NFLT;
    unsigned int    UINT;

    cout << "Формат ввода:\n ’H’;\n ’Меня зовут <фамилия и имя>’\n; 896, –372;\n 682.471,–367.596;\n 792." << endl;

    cin >> CHAR;                                //Ввод символа
    cin.ignore(256, '\n');                      //Игнорирование переноса
    getline(cin, STR);                          //Ввод строки
    cin >> INT >> NINT                          //Ввод всех чисел
        >> FLT >> NFLT
        >> UINT;

    cout << endl;

    outputChar(CHAR);                           //Вывод функций вывода
    outputString(STR);
    outputInts(INT, NINT);
    outputFloats(FLT, NFLT);
    outputUnsignedInt(UINT);

    return 0;
}
