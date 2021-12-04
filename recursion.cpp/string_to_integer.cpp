#include <iostream>
#include <cmath>
using namespace std;
int num = 0;
bool sign = 0;
int num_to_str(string str)
{
    if (str.length() == 0)
    {
        if (sign == 1)
        {
            num = -num;
        }
        return num;
    }
    if (str[0] == '-')
    {
        sign = 1;
        num_to_str(str.substr(1));
    }

    int n = str[0] - '0';
    if (n >= 0 && n <= 9)
    {
        num += pow(10, str.length() - 1) * n;
        num_to_str(str.substr(1));
    }
    else
        num_to_str(str.substr(1));
}

int main()
{
    string str;
    cin >> str;
    num_to_str(str);
    cout << num << endl;
    return 0;
}