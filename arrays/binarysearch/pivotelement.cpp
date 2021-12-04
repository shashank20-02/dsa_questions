#include <bits\stdc++.h>
using namespace std;

int main()
{
    int n, lsum = 0, rsum = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        rsum += v[i];
    }

    for (int i = 0; i < v.size(); i++)
    {
        rsum -= v[i];
        if (lsum == rsum)
        {
            cout << i;
            return 0;
        }
        lsum += v[i];
    }
    cout << "-1" << endl;
    return 0;
}