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
    cout << "введите слово:" << endl;
    getline(cin, s);
    cout << (isSymmetric(s) ? " - палиндром" : " - обычная строка");
    return 0;
}