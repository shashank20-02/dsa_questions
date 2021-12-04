#include <bits\stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> target(n, 0);
    vector<string> solution;
    for (int i = 0; i < n; i++)
    {
        cin >> target[i];
    }
    cin >> n;
    int k = 0;
    for (int i = 1; i <= n; i++)
    {
        bool flag = 0;
        if (k == target.size())
        {
            break;
        }
        solution.push_back("push");
        ++k;
        for (int j = 0; j < target.size(); j++)
        {
            if (target[j] == i)
                flag = 1;
        }
        if (flag == 0)
        {
            solution.push_back("pop");
            k--;
            flag = 0;
        }
    }
    for (int i = 0; i < solution.size(); i++)
    {
        cout << solution[i] << " ";
    }
    return 0;
}