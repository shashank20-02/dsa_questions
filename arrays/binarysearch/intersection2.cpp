#include <bits\stdc++.h>
using namespace std;
vector<int> freq(1001, 0);
vector<int> intersection(vector<int> nums1, vector<int> nums2)
{
    int n = nums1.size(), m = nums2.size();
    vector<int> sol;
    for (int i = 0; i < n; i++)
    {
        freq[nums1[i]]++;
    }

    for (int i = 0; i < m; i++)
    {
        if (freq[nums2[i]] > 0)
        {
            sol.push_back(nums2[i]);
            freq[nums2[i]]--;
        }
    }
    return sol;
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> nums1(n, 0), nums2(m, 0), sol;
    for (int i = 0; i < n; i++)
        cin >> nums1[i];
    for (int i = 0; i < m; i++)
        cin >> nums2[i];

    for (int i = 0; i < sol.size(); i++)
    {
        cout << sol[i] << " ";
    }

    return 0;
}