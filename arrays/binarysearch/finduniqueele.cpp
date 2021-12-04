#include <bits\stdc++.h>
using namespace std;

// approach 1 - TC O[n^2];
int main()
{
    string str;
    cin >> str;
    int count = 1;
    for (int i = 0; i < str.length(); i++)
    {
        for (int j = i + 1; j < str.length(); j++)
        {
            if (str[j] == str[i])
            {
                count++;
            }
        }
        if (count == 1)
        {
            cout << str[i] << endl;
            break;
        }
        count = 1;
    }
    return 0;
}
