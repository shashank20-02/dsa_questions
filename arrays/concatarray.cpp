#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> nums, ans;
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        nums.push_back(value);
    }

    for (int i = 0; i < 2 * n; i++)
    {
        ans.push_back(nums[i % n]);
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
}