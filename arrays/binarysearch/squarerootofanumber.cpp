#include <bits\stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    double epsilon = 1e-8;
    double low = 1, high = n, mid;
    while ((high - low) > epsilon)
    {
        mid = (low + high) / 2.0;
        if (mid * mid < n)
        {
            low = mid;
        }
        else
        {
            high = mid;
        }
    }
    cout << floor(high) << endl;
    cout << int(low) << endl;
    cout << int(mid) << endl;
    return 0;
}