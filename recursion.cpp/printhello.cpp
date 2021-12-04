#include <iostream>
using namespace std;

void printhello(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << "hello" << endl;
    return printhello(n - 1);
}

int sum_of_n_nums(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n + sum_of_n_nums(n - 1);
}
int power(int a, int b)
{
    if (b == 0)
        return 1;
    return a * power(a, b - 1);
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << power(a, b);
    return 0;
}