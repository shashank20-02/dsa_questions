#include <bits\stdc++.h>
using namespace std;
//brute force approach.
// boyer moore's voting algorithm .
int majority_element(vector<int> nums)
{
    int n = nums.size();
    int candidate = -1, count = 0;
    for (int i = 0; i < n; i++)
    {
        if (count == 0)
            candidate = nums[i];
        if (nums[i] == candidate)
            count++;
        else
            count--;
    }
    count++;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == candidate)
            count++;
    }
    if (count > n / 2)
        return candidate;
    else
        return -1;
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
    cout << majority_element(nums) << endl;
    return 0;
}