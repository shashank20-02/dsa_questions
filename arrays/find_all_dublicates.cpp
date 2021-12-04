#include <bits\stdc++.h>
using namespace std;
vector<int> find_duplicates(vector<int> &arr)
{
    vector<int> nums;
    for (int i = 0; i < arr.size(); i++)
    {
        int index = abs(arr[i]) - 1;
        if (arr[index] < 0)
            nums.push_back(index + 1);
        else
            arr[index] = -arr[index];
    }
    return nums;
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