#include <iostream>
#include <cstring> // ��� ������������� ������� ������ �� ��������

using namespace std;

int main() {
    char str1[100] = "Hello";
    char str2[] = "World";
    char str3[100];

    // strlen() - ����������� ����� ������
    cout << "����� str1: " << strlen(str1) << endl;

    // strcat() - ������������ �����
    strcat(str1, " ");
    strcat(str1, str2);
    cout << "���������� ������: " << str1 << endl;

    // strcpy() - ����������� �����
    strcpy(str3, str1);
    cout << "������������� ������: " << str3 << endl;

    // strcmp() - ��������� �����
    if (strcmp(str1, str2) == 0) {
        cout << "������ str1 � str2 �����." << endl;
    }
    else {
        cout << "������ str1 � str2 �� �����." << endl;
    }

    return 0;
}