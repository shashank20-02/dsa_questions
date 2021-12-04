#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        nums.push_back(value);
    }
    vector<int> ans;

    for (int i = 0; i < n; i += 2)
    {
        int freq = nums[i], value = nums[i + 1];
        for (int i = 1; i <= freq; i++)
        {
            ans.push_back(value);
        }
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}