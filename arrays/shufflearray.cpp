#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < 2 * n; i++)
    {
        int value;
        cin >> value;
        arr.push_back(value);
    }

    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        ans.push_back(arr[i]);
        ans.push_back(arr[i + n]);
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}