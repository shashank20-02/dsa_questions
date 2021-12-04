#include <iostream>
using namespace std;
int mysquare(int n)
{
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        ans += n;
    }
    return ans;
}

int square(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }

    else if ((n & (1 << 0)) == 0)
    {
        return 4 * square(n / 2);
    }
    else
    {
        return 4 * square(n / 2) + 4 * (n / 2) + 1;
    }
}

int main()
{
    int n;
    cin >> n;
    cout << mysquare(n) << endl;
    cout << square(n) << endl;
    return 0;
}