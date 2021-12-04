#include <iostream>
#include <bits\stdc++.h>
using namespace std;

int copy_set_bits(int n, int m, int l, int r)
{
    for (int i = l; i <= r; i++)
    {
        if ((m & (1 << (i - 1))))
        {
            if ((n & (1 << (i - 1))) == 0)
            {
                n = (n | (1 << (i - 1)));
            }
        }
    }
    return n;
}
int main()
{
    int n, m, l, r;
    cin >> n >> m >> l >> r;
    int res = copy_set_bits(n, m, l, r);
    cout << res;

    return 0;
}