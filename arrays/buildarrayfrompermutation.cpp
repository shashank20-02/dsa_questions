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
    for (int i = 0; i < nums.size(); i++)
    {
        int value = nums[i];
        ans.push_back(nums[value]);
    }

    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}