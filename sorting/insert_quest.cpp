#include <bits\stdc++.h>
using namespace std;
void insertion_sort(vector<int> &nums)
{
    int n = nums.size();
    for (int i = 1; i < n; i++)
    {
        int temp = nums[i];
        int j = i - 1;
        while (j >= 0 && nums[j] > temp)
        {
            nums[j + 1] = nums[j];
            j--;
        }
        nums[j + 1] = temp;
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n, 0);
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    vector<int> temp = nums;
    insertion_sort(temp);
    vector<int> ans(n, 0);
    for (int i = 0; i < temp.size(); i++)
    {
        for (int j = 0; j < nums.size(); j++)
        {
            if (nums[j] == temp[i])
            {
                ans[j] = i + 1;
                break;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}