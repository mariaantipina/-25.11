#include <iostream>
#include <string>
using namespace std;
bool isSymmetric(const string& str)
{
    int start = 0, end = str.size() - 1;
    while (start < end)
        if (str[start++] != str[end--])
            return false;
    return true;
}
int main(){
    setlocale(LC_ALL, "Russian");
    string s;
    cout << "������� �����:" << endl;
    getline(cin, s);
    cout << (isSymmetric(s) ? " - ���������" : " - ������� ������");
    return 0;
}