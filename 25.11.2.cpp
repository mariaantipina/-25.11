#include <iostream>
#include <string>
#include <sstream> 
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int sum = 0, number;
    string s;
    cout << "введите строку:" << endl;
    getline(cin, s);

    stringstream ss(s);
    while (ss >> number){
        sum += number;
    }

    cout << "sum=" << sum << endl;
    return 0;
}