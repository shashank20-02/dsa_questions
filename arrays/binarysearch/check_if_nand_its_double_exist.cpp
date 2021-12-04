#include <bits\stdc++.h>
using namespace std;

bool binary_search1(vector<int> arr, int k, int low, int high)
{
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (k == arr[mid])
        {
            return true;
        }
        if (k > arr[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return false;
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

    sort(nums.begin(), nums.end());

    for (int i = 0; i < n; i++)
    {
        int key = nums[i] * 2;
        if (binary_search1(nums, key, 0, nums.size()))
        {
            cout << "true" << endl;
            return 0;
        }
    }

    cout << "false " << endl;
}