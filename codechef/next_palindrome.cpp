#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string num;
        cin >> num;
        string rev_num = num;
        int n = num.length();
        for (int i = 0; i < n / 2; i++)
        {
            rev_num[n - i - 1] = rev_num[i];
        }

        if (rev_num > num)
            cout << rev_num << endl;

        else
        {
            int mid = (n - 1) / 2;
            for (int i = mid; i >= 0; i--)
            {
                if (rev_num[i] != '9')
                {
                    rev_num[i] = (rev_num[i] + 1);
                    break;
                }
                else
                {
                    rev_num[i] = '0';
                }
            }

            for (int i = n / 2; i < n; i++)
            {
                rev_num[i] = rev_num[n - 1 - i];
            }

            if (rev_num[0] == '0')
            {
                rev_num += '1';
                rev_num[0] = '1';
            }
            cout << rev_num << endl;
        }
    }
    return 0;
}