#include <iostream>
#include <vector>
#include <bits\stdc++.h>
using namespace std;

int main()
{
    int n, ec;
    cin >> n >> ec;
    vector<int> arr;
    vector<bool> ans;
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        arr.push_back(value);
    }
    int max = *max_element(arr.begin(), arr.end());
    for (int i = 0; i < n; i++)
    {
        int value = arr[i] + ec;
        if (value >= max)
        {
            ans.push_back(1);
        }
        else
            ans.push_back(0);
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}