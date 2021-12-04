#include <iostream>
using namespace std;

int main()
{
    int row;
    cin >> row;
    for (char a = 65; a <= (65 + row) - 1; a++)
        cout << a << " ";
    for (char a = (65 + row) - 2; a >= 65; a--)
        cout << a << " ";
    cout << endl;
    for (int i = 1; i <= row; i++)
    {
        for (char a = 65; a <= (65 + row) - (i + 1); a++)
            cout << a << " ";
        for (int j = 1; j <= 2 * i - 1; j++)
            cout << "  ";
        for (char a = (65 + row) - (i + 1); a >= 65; a--)
            cout << a << " ";
        cout << endl;
    }
    return 0;
}