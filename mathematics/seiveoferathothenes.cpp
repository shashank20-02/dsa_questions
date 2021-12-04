#include <iostream>
#include <vector>
using namespace std;

vector<bool> seive_of_erathothenes(int n)
{
    vector<bool> seive(n + 1, 1);
    for (int i = 2; i * i <= n; i++)
    {
        if (seive[i] == 1)
        {
            for (int j = i * i; j <= n; j += i)
            {
                seive[j] = 0;
            }
        }
    }
    return seive;
}

int main()
{
    int n;
    cin >> n;
    vector<bool> result = seive_of_erathothenes(n);
    for (int i = 2; i < result.size(); i++)
    {
        if (result[i] == 1)
        {
            cout << i << " ";
        }
    }

    return 0;
}