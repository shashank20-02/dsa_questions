#include <iostream>
#include <vector>
using namespace std;

int josephus(int n, int k)
{
    if (n == 1)
        return 1;

    int sum = josephus(n - 1, k);
    return (sum + k) % n - 1;
}

int main()
{
    int n, k;
    cin >> n >> k;
    cout << josephus(n, k);
    return 0;
}