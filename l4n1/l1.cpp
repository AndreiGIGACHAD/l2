#include <iostream>
#include <cstring> // Для использования функций работы со строками

using namespace std;

int main() {
    char str1[100] = "Hello";
    char str2[] = "World";
    char str3[100];

    // strlen() - определение длины строки
    cout << "Длина str1: " << strlen(str1) << endl;

    // strcat() - конкатенация строк
    strcat(str1, " ");
    strcat(str1, str2);
    cout << "Сцепленные строки: " << str1 << endl;

    // strcpy() - копирование строк
    strcpy(str3, str1);
    cout << "Скопированная строка: " << str3 << endl;

    // strcmp() - сравнение строк
    if (strcmp(str1, str2) == 0) {
        cout << "Строки str1 и str2 равны." << endl;
    }
    else {
        cout << "Строки str1 и str2 не равны." << endl;
    }

    return 0;
}