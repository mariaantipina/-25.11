#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char word[500];

    setlocale(LC_ALL, "Russian");
    setlocale(LC_ALL,".1251");
    cin >> word;
    for (int i = 0; i < strlen(word) / 2; i++) {
        if (word[i] != word[strlen(word) - i - 1]) {
            cout << "false" << endl;
            return (1);
        }
    }
    cout << "true" << endl;
    return (0);
}
