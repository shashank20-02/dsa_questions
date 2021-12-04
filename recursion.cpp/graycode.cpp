#include <iostream>
#include <vector>
using namespace std;

int setbit(int n, int pos)
{
    return (n | (1 << pos));
}
vector<int> graycode(int n)
{
    if (n == 1)
    {
        vector<int> arr1;
        arr1.push_back(0);
        arr1.push_back(1);
        return arr1;
    }

    vector<int> res = graycode(n - 1);
    vector<int> ans;
    for (int i = 0; i < res.size(); i++)
    {
        ans.push_back(res[i]);
    }
    for (int i = res.size() - 1; i >= 0; i--)
    {
        int temp = setbit(res[i], n - 1);
        ans.push_back(temp);
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<int> ans;
    ans = graycode(n);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}