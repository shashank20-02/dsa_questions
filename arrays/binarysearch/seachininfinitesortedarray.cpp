#include <bits\stdc++.h>
using namespace std;

int search_infinite(vector<int> nums, int key)
{
    int low = 0, high = 1;
    while (nums[high] < key)
    {
        low = high;
        high = (high << 1);
    }
    return binary_search(nums.begin() + low, nums.begin() + high, key);
}
int main()
{
    int n;
    cin >> n;
    vector<int> array(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    return 0;
}