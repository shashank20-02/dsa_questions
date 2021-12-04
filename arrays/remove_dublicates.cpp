#include <bits\stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> nums(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    int k = 0;
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] != nums[i - 1])
        {
            nums[++k] = nums[i];
        }
    }

    for (int i = 0; i < k + 1; i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}