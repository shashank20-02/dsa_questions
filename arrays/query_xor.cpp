#include <bits\stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    vector<int> array;
    while (--T)
    {
        int query, Q, N;
        cin >> query;
        for (int i = 1; i <= query; i++)
        {
            cin >> Q >> N;
            if (Q == 1)
            {
                array.push_back(N);
            }
            else
            {
                for (int i = 0; i < array.size(); i++)
                {
                    array[i] = array[i] ^ N;
                }
            }
        }
        for (int i = 0; i < array.size(); i++)
        {
            cout << array[i] << " ";
        }
        cout << endl;
    }
    return 0;
}