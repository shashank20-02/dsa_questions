#include <bits\stdc++.h>
using namespace std;

int binary_search1(vector<int> nums, int k)
{
    int low = 0, high = nums.size();
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (k == nums[mid])
        {
            return mid;
        }
        else if (k > nums[mid])
        {
            if (nums[mid] > nums[mid + 1])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
    }
}

int mountain_array(vector<int> nums)
{
    int mx = *max_element(nums.begin(), nums.end());
    return binary_search1(nums, mx);
}
int main()
{
    int n;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        int v;
        cin >> v;
        nums.push_back(v);
    }
    cout << mountain_array(nums) << endl;
    return 0;
}