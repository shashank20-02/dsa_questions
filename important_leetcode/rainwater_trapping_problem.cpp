#include <bits\stdc++.h>
using namespace std;

// approach 1
// int left_max(int i, vector<int> arr)
// {
//     int left = 0;
//     for (int index = i; index >= 0; index--)
//     {
//         left = max(left, arr[index]);
//     }
//     return left;
// }

// int right_max(int i, vector<int> arr)
// {
//     int right = 0;
//     for (int index = i; index < arr.size(); index++)
//     {
//         right = max(right, arr[index]);
//     }
//     return right;
// }
int main()
{
    int n;
    cin >> n;
    vector<int> nums(n, 0);
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    int ans = 0;
    // approach 1
    // for (int i = 0; i < n; i++)
    // {
    //     int left = left_max(i, nums);
    //     int right = right_max(i, nums);
    //     int min_e = min(left, right);
    //     ans += (min_e - nums[i]);
    // }
    // approach 2
    // vector<int> prefix(n, 0), suffix(n, 0);

    // prefix[0] = nums[0];
    // suffix[n - 1] = nums[n - 1];
    // for (int i = 1; i < n; i++)
    // {
    //     prefix[i] = max(prefix[i - 1], nums[i]);
    // }
    // for (int i = n - 2; i >= 0; i--)
    // {
    //     suffix[i] = max(suffix[i + 1], nums[i]);
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     ans += (min(prefix[i], suffix[i]) - nums[i]);
    // }

    // approach 3
    int l = 0, r = n - 1, left_max = 0, right_max = 0;
    while (l <= r)
    {
        if (nums[l] <= nums[r])
        {
            if (left_max <= nums[l])
                left_max = nums[l];
            else
                ans += (left_max - nums[l]);
            l++;
        }
        else
        {
            if (right_max <= nums[r])
                right_max = nums[r];
            else
                ans += (right_max - nums[r]);
            r--;
        }
    }
    cout << ans << endl;

    return 0;
}