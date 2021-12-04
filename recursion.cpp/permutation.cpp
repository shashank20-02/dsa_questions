#include <iostream>
#include <vector>
using namespace std;
// approach 2
void permute(vector<int> &nums, int ind)
{
    if (ind == nums.size())
    {
        for (int i = 0; i < nums.size(); i++)
        {
            cout << nums[i] << " ";
        }
        cout << endl;
        return;
    }

    for (int i = ind; i < nums.size(); i++)
    {
        swap(nums[ind], nums[i]);
        permute(nums, ind + 1);
        swap(nums[ind], nums[i]);
    }
}
// approach 1
void permutate(vector<int> nums, vector<int> &ds, vector<vector<int>> &ans, int freq[])
{
    if (ds.size() == nums.size())
    {
        for (int i = 0; i < ds.size(); i++)
        {
            cout << ds[i] << " ";
        }
        cout << endl;
        return;
    }

    for (int i = 0; i < nums.size(); i++)
    {
        if (!freq[i])
        {
            ds.push_back(nums[i]);
            freq[i] = 1;
            permutate(nums, ds, ans, freq);
            ds.pop_back();
            freq[i] = 0;
        }
    }
}
int main()
{
    int n;
    vector<int> arr;
    vector<int> ds;
    vector<vector<int>> ans;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        arr.push_back(value);
    }
    int freq[arr.size()] = {0};
    permutate(arr, ds, ans, freq);

    return 0;
}