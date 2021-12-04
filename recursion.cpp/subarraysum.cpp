#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> iterative(vector<int> nums)
{
    int n = nums.size();
    vector<int> sol;
    for (int i = 0; i < 1 << n; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                sum += nums[j];
            }
        }
        sol.push_back(sum);
    }
    sort(sol.begin(), sol.end());
    return sol;
}
vector<int> rum;
void recursive(vector<int> nums, int ind, int sum)
{
    if (ind == nums.size())
    {
        rum.push_back(sum);
        return;
    }

    recursive(nums, ind + 1, sum + nums[ind]);
    recursive(nums, ind + 1, sum);
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        arr.push_back(value);
    }
    recursive(arr, 0, 0);
    sort(rum.begin(), rum.end());
    for (int i = 0; i < rum.size(); i++)
    {
        cout << rum[i] << " ";
    }
}