#include <iostream>                             //������������ ������ �1
#include <cmath>                                //������� 8

using namespace std;

const double e = 2.72;                          //��������� ����������

int main()
{
    double x, y;

    cout << "Option 8\n" << "Input X value: ";  //���� ��������
    cin >> x; cout << endl;

    y = (3 + pow(e, x - 1)) /                   //���������� �������
        (x * x + fabs(1 - (1 / tan(x))));

    cout << "Result: " << y << endl;            //����� ����������

    return 0;
}
