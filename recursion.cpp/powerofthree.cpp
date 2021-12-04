#include <iostream>
using namespace std;

bool powerofthree(int n)
{
    if (n == 1)
        return true;
    else if (n % 3 == 0)
        return powerofthree(n / 3);
    else
        return false;
}

int main()
{
    int n;
    cin >> n;
    cout << powerofthree(n);
    return 0;
}