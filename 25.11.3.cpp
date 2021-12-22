#include <iostream>
using namespace std;

void f(){
    setlocale(LC_ALL, "Russian");
    char str[50];  
    char* p = str;

    cout << "введите фамилию, имя, отчество:" << endl;
    cin.getline(str, 50);

    while (*p != ' ')
        p++;
    cout << *++p << '.';

    while (*p != ' ')
        p++;
    cout << *++p << ". ";

    p = str;
    while (*p != ' ')
        cout << *p++;
    cout << endl;
}
