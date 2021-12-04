#include <bits\stdc++.h>
using namespace std;

vector<int> two_sum(vector<int> nums, int target)
{
    int low = 0, high = nums.size() - 1;
    vector<int> res;
    while (low <= high)
    {
        int mid = nums[low] + nums[high];
        if (mid == target)
        {
            res.push_back(low + 1);
            res.push_back(high + 1);
            return res;
        }
        if (mid > target)
            high--;
        else
            low++;
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n, 0);
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    int target;
    cin >> target;
    vector<int> ans = two_sum(nums, target);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}