#include <bits\stdc++.h>
using namespace std;

int min_element(vector<int> nums)
{
    long int ans = INT32_MAX;
    int low = 0, high = nums.size() - 1;
    while (low < high)
    {
        int mid = (low + high) / 2;
        if (nums[mid] > nums[high])
        {
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
    if (low == 0)
        return nums[0];
    return nums[low];
}

int max_element(vector<int> nums)
{
    int low = 0, high = nums.size() - 1;
    while (low < high)
    {
        int mid = (low + high) / 2;
        if (nums[mid] > nums[low])
        {
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
 
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n, 0);
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    cout << max_element(nums);
}