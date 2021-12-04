#include <iostream>
#include <vector>
using namespace std;

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

    vector<int> index;

    for (int i = 0; i < n; i++)
    {
        int v;
        cin >> v;
        index.push_back(v);
    }
    vector<int> ans;
    for (int i = 0; i < index.size(); i++)
    {
        if (index[i] == ans.size())
        {
            ans.push_back(nums[index[i]]);
        }
        else
        {
            for (int j = index[i]; j < ans.size(); j++)
            {
                ans[j + 1] = nums[j];
            }
            ans[index[i]] = nums[index[i]];
        }
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}