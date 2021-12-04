#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> A = {1, 2, 4, 3, 3, 2, 2, 3, 1, 1};
    vector<int> ans(32, 0);

    for (int i = 0; i < A.size(); i++)
    {
        for (int j = 0; j < ans.size(); j++)
        {
            if (A[i] == j)
            {
                ans[j]++;
            }
        }
    }

    for (int i = 0; i < ans.size(); i++)
    {
        if (ans[i] == 1)
        {
            cout << i << endl;
        }
    }

    return 0;
}