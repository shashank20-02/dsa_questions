#include <bits\stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int l, r;
    cin >> l >> r;
    l = (l == n) ? l : l % n;
    r = r % n;
    int sum = 0;
    for (int i = l - 1; i < n; i++)
    {
        sum += arr[i];
        cout << sum << " ";
    }
    for (int i = r - 1; i >= 0; i--)
    {
        sum += arr[i];
        cout << sum << " ";
    }

    // cout << sum;
    return 0;
}