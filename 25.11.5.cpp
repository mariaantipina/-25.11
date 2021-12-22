#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

void f()
{
    setlocale(LC_ALL, "Russian");
    const size_t N = 80;
    char sent[N];
    const size_t M = 20;
    char word[M];

    cout << "введите предложение: " << endl;
    cin.getline(sent, sizeof(sent));

    cout << "введите слово, которое нужно посчитать: " << endl;
    cin.getline(word, sizeof(word));

    size_t n = 0;
    size_t len = strlen(word);

    for (const char* src = sent;
        (src = strstr(src, word)) != nullptr; src += len)
    {
        if (not (src != sent && isalnum((unsigned char)*(src - 1)) ||
            isalnum((unsigned char)*(src + len))))
        {
            n++;
        }
    }

    cout << "количество данного слова: " << n << endl;
}
