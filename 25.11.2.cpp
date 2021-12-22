#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char equation[500];
    long long  sum = 0;
    long long  digit = 0;

    cin >> equation;
    int i = -1;
    while (equation[++i]){
        if (isdigit(equation[i]))
            digit = (digit * 10) + (equation[i] - '0');
        else if (equation[i] == '+')
        {
            sum += digit;
            digit = 0;
        }
    }
    sum += digit;
    cout << sum << endl;
    return (0);
}
