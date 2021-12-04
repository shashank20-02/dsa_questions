#include <bits\stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int mx_profit = 0, max_pro = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            max_pro = max(max_pro, arr[j] - arr[i]);
        }
        mx_profit += max_pro;
        cout << max_pro << endl;
        max_pro = 0;
    }
    cout << mx_profit << endl;
    return 0;
}