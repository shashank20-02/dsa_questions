#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<char> s;
    int n;
    cin >> n;
    char a;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        s.push_back(a);
    }

    n = s.size();
    for (int i = 0; i < n / 2; i++)
    {
        a = s[i];
        s[i] = s[n - 1 - i];
        s[n - 1 - i] = a;
    }
    
    return 0;
}