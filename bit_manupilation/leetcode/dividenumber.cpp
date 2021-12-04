#include <iostream>
#include <bits\stdc++.h>
using namespace std;
int divide(int dividend, int divisor)
{
    int sign = ((dividend < 0) ^ (divisor < 0)) ? -1 : 1;
    dividend = abs(dividend);
    divisor = abs(divisor);
    int count = 0;
    while (dividend >= divisor)
    {
        dividend -= divisor;
        count++;
    }
    if (sign == -1)
    {
        count = -count;
        return count;
    }
    return count;
}
int main()
{
    int x, y;
    cin >> x >> y;
    cout << divide(x, y);
    return 0;
}