#include <iostream>
#include <cmath>
#include <vector>
#include <bits\stdc++.h>
bool getbit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}
using namespace std;
int main()
{
    string s, ans = "";
    vector<string> A;
    cin >> s;
    int n = s.length();
    for (int i = 1; i < (1 << n); i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (getbit(i, j))
            {
                ans += s[j];
            }
        }
        A.push_back(ans);
        ans = "";
    }
    sort(A.begin(), A.end());
    for (int i = 0; i < A.size(); i++)
    {
        cout << A[i] << endl;
    }

    return 0;
}