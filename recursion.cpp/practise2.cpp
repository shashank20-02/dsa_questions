#include <iostream>
#include <cmath>
#define mod 1000000007;
using namespace std;

string decimal_to_binary(int n, string ans)
{
    if (n == 1)
    {
        ans = "1" + ans;
        return ans;
    }
    else if (n == 0)
    {
        ans = "0" + ans;
        return ans;
    }
    int rem = n % 2;
    ans = to_string(rem) + ans;
    return decimal_to_binary(n / 2, ans);
}
