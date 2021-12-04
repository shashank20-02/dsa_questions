#include <bits\stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> nums(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int Xor = 0;
    for (int i = 0; i < n; i++)
    {
        Xor = Xor ^ nums[i];
    }
    cout << Xor << endl;
    return 0;
}