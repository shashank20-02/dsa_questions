#include <iostream>
using namespace std;

int main()
{
    int x, y, point = 0;
    cin >> x >> y;
    int Xor = x ^ y;
    int i = 0;
    while (Xor != 0)
    {
        if ((Xor & (1 << 0)) != 0)
        {
            point += i;
        }

        i++;
        Xor = (Xor >> 1);
    }
    cout << point << endl;
}