#include <bits\stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> nums(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    // brute force
    // int sum = 1, mx_product = INT_MIN;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i; j < n; j++)
    //     {
    //         for (int k = i; k <= j; k++)
    //         {
    //             sum *= nums[k];
    //         }
    //         mx_product = max(mx_product, sum);
    //         sum = 1;
    //     }
    // }
    // cout << mx_product << endl;

    // optimised solution
    int current_sum = 1, mx_sum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        current_sum *= nums[i];
        mx_sum = max(mx_sum, current_sum);
        if (current_sum == 0)
            current_sum = 1;
    }
    cout << mx_sum << endl;
    return 0;
}