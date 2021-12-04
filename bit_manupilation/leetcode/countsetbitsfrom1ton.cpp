#include <iostream>
#include <cmath>
using namespace std;
int no_of_set_bits(int n)
{
    int count = 0;
    while (n != 0)
    {
        count++;
        n = (n & (n - 1));
    }
    return count;
}
int iterative(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        count += no_of_set_bits(i);
    }
    return count;
}
int digits_power(int n)
{
    int pow = 0;
    while ((1 << pow) <= n)
    {
        pow++;
    }

    return pow - 1;
}
int recursive(int n)
{
    int sum = 0;
    int x = digits_power(n);
    if (n == 0)
    {
        return 0;
    }
    sum += (pow(2, x - 1) * x) + (n - pow(2, x) + 1) + recursive(n - pow(2, x));
    return sum;
}

int main()
{
    int n;
    cin >> n;
    cout << iterative(n) << endl;
    cout << recursive(n) << endl;
    return 0;
}