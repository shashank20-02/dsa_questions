#include <iostream>
using namespace std;

string ans = "";
string removedub(string str)
{

    if (str.length() == 0)
    {
        return ans;
    }

    if (str[0] == str[1])
    {
        removedub(str.substr(1));
    }
    else
    {
        ans += str[0];
        removedub(str.substr(1));
    }
}

int main()
{
    string str;
    cin >> str;
    removedub(str);
    cout << ans;
}