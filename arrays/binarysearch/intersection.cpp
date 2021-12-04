#include <bits\stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> nums1(n, 0), nums2(m, 0), freq(1001, 0), res;
    for (int i = 0; i < nums1.size(); i++)
        cin >> nums1[i];
    for (int i = 0; i < nums2.size(); i++)
        cin >> nums2[i];

    for (int i = 0; i < n; i++)
        freq[nums1[i]]++;

    for (int i = 0; i < m; i++)
    {
        if (freq[nums2[i]] > 0)
        {
            freq[nums2[i]] = 0;
            res.push_back(nums2[i]);
        }
    }
}