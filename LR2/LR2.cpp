//����������! � ����������� VISUAL STUDIO ����� ��������� ���� � ������ ��������� - ��������

#include <iostream>                             //������������ ������ �1
#include <cmath>                                //������� 8
#include <string>
#include <iomanip>

using namespace std;

void outputChar(char CHAR) {                    //����� �������
    cout << "������: " << CHAR << endl
         << "���:" << (int)CHAR << endl
         << endl;
}

void outputString(string STR) {                 //����� ������
    cout << "������: " << STR << endl
        << "�����: " << STR.length() << endl
        << endl;
}

void outputInts(int INT, int NINT) {            //����� ������������� �������������� � �������������� �����
    int ratio;
    cout << "������� �����������: ";
    cin >> ratio; cout << endl;

    cout << "����� � ���������� � ����������������� ����: "
        << endl << "10-��: " << INT << "; " << NINT << endl
        << "16-��: " << hex << INT << "; " << hex << NINT << endl;

    cout << dec;

    cout << "����� � ����������� �������� �������: "
        << endl << setw(ratio) << INT
        << "; " << setw(ratio) << NINT << endl;

    cout << "����� �� ��������� ������: "
        << endl << setw(ratio) << setfill(' ') << INT
        << "; " << setw(ratio) << setfill(' ') << NINT << endl;

    cout << "����� �� ��������� �����: "
        << endl << setw(ratio) << setfill('0') << INT
        << "; -" << setw(ratio) << setfill('0') << NINT*(-1) << endl;

    cout << endl;
}

void outputFloats(float FLT, float NFLT) {      //����� ����� � ��������� ������
    int ratio;
    cout << "������� ��������: ";
    cin >> ratio; cout << endl;

    cout << "����� � ���������� ����: "
        << endl << fixed << setprecision(ratio) << FLT
        << "; " << NFLT << endl;

    cout << "��������������� �����: "
        << endl << scientific << FLT
        << "; " << NFLT << endl;

    cout << endl;
}

void outputUnsignedInt(unsigned int UINT) {     //����� ������������ ������ �����
    cout << "���������� �����: " << UINT << endl
        << "������������ �����: " << oct << UINT << endl
        << "����������������� �����: " << hex << UINT << endl;
    cout << dec << endl;
}

int main()
{
    setlocale(LC_ALL, "");                      //���������

    char            CHAR;
    string          STR;
    int             INT, NINT;
    float           FLT, NFLT;
    unsigned int    UINT;

    cout << "������ �����:\n �H�;\n ����� ����� <������� � ���>�\n; 896, �372;\n 682.471,�367.596;\n 792." << endl;

    cin >> CHAR;                                //���� �������
    cin.ignore(256, '\n');                      //������������� ��������
    getline(cin, STR);                          //���� ������
    cin >> INT >> NINT                          //���� ���� �����
        >> FLT >> NFLT
        >> UINT;

    cout << endl;

    outputChar(CHAR);                           //����� ������� ������
    outputString(STR);
    outputInts(INT, NINT);
    outputFloats(FLT, NFLT);
    outputUnsignedInt(UINT);

    return 0;
}
