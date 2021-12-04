#include <bits\stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int mx_profit = 0;
    // better approach - O(N) space O[N];
    // vector<int> aux(n, 0);
    // aux[n - 1] = arr[n - 1];
    // for (int i = n - 2; i >= 0; i--)
    // {
    //     aux[i] = max(aux[i + 1], arr[i]);
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     mx_profit = max(mx_profit, aux[i] - arr[i]);
    // }

    // best approach
    int min_so_far = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        min_so_far = min(min_so_far, arr[i]);
        mx_profit = max(mx_profit, arr[i] - min_so_far);
    }
    cout << mx_profit << endl;
    return 0;
}