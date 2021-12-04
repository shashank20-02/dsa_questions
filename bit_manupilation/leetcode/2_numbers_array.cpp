#include <iostream>
using namespace std;
bool getbit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}

int main()
{
    int n, sum = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum = sum ^ arr[i];
    }
    int a, b;
    int temp = sum;
    int i;
    for (i = 0; i <= temp; i++)
    {
        if (getbit(temp, i))
        {
            break;
        }
    }
    for (int j = 0; j < n; j++)
    {
        if (getbit(arr[j], i))
        {
            sum = sum ^ arr[j];
        }
    }
    a = sum;
    b = temp ^ a;
    cout << a << " " << b << endl;
    return 0;
}