#include <bits\stdc++.h>
using namespace std;

void insertion_sort(vector<int> &nums)
{
    int n = nums.size();
    for (int i = 0; i < n - 1; i++)
    {
        int min_index = i, min_e = nums[i];
        for (int j = i; j < n; j++)
        {
            if (min_e > nums[j])
            {
                min_e = nums[j];
                min_index = j;
            }
        }
        nums[min_index] = nums[i];
        nums[i] = min_e;
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
    insertion_sort(nums);
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}