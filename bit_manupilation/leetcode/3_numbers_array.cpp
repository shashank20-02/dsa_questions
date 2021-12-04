#include <iostream>
using namespace std;

bool getbit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}

int setbit(int n, int pos)
{
    return ((n | (1 << pos)));
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans[32] = {0};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 32; j++)
        {
            if (getbit(arr[i], j))
            {
                ans[j]++;
            }
        }
    }
    int result = 0;
    for (int i = 31; i >= 0; i--)
    {
        if (ans[i] % 3)
        {
            result = setbit(result, i);
        }
    }
    cout << result << endl;
    return 0;
}
