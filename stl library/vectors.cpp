#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    int s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        v.push_back(s);
    }

    sort(v.begin(), v.end());
    for (auto i = v.begin(); i != v.end(); i++)
    {
        cout << *i << " ";
    }
    return 0;
}
