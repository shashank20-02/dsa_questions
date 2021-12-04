#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<string> op;
    int n, x = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string value;
        cin >> value;
        op.push_back(value);
    }
    for (int i = 0; i < op.size(); i++)
    {
        if (op[i] == "X++" || op[i] == "++X")
        {
            x = x + 1;
        }

        else if (op[i] == "X--" || op[i] == "--X")
        {
            x = x - 1;
        }
    }
    cout << x << endl;
}