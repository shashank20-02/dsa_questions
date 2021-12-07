#include <bits\stdc++.h>
using namespace std;

bool binary_search(int low, int high, int key, vector<int> nums)
{
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (nums[mid] == key)
            return true;
        else if (nums[mid] > key)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return false;
}
vector<vector<int>> threeSum(vector<int> &nums)
{
    int n = nums.size();
    vector<vector<int>> ans;
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int sum = nums[low] + nums[high];
        int diff = 0 - sum;
        if (binary_search(low, high, diff, nums))
        {
            vector<int> temp;
            temp.push_back(nums[low]);
            temp.push_back(nums[high]);
            temp.push_back(diff);
            sort(temp.begin(), temp.end());
            ans.push_back(temp);
        }
        else
        {
            if (sum == 0)
            {
                low++;
                high--;
            }
            else if (sum < 0)
                low++;
            else
                high--;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    return 0;
}