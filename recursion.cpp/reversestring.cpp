#include <iostream>
using namespace std;

string revstr(string str, string ans)
{
    if (str.length() == 0)
    {
        return ans;
    }

    ans = str[0] + ans;
    return revstr(str.substr(1), ans);
}

string replace_pi(string str, string ans)
{
    if (str.length() == 0)
    {
        return ans;
    }

    if (str[0] == 'p' && str[1] == 'i')
    {
        ans += "3.14";
        return replace_pi(str.substr(2), ans);
    }
    else
    {
        ans += str[0];
        return replace_pi(str.substr(1), ans);
    }
}
string xtr;
string xstr(string str, string ans)
{
    if (str.length() == 0)
    {
        return ans + xtr;
    }
    else if (str[0] == 'x')
    {
        xtr += "x";
        return xstr(str.substr(1), ans);
    }
    else
    {
        ans += str[0];
        return xstr(str.substr(1), ans);
    }
}

void tower_of_hanoi(int n, char source, char destination, char helper)
{
    if (n == 0)
    {
        return;
    }

    tower_of_hanoi(n - 1, source, helper, destination);
    cout << "moved from " << source << " to " << destination << endl;
    tower_of_hanoi(n - 1, helper, source, destination);
}
int main()
{
    int n;
    cin >> n;
    tower_of_hanoi(n, 'A', 'B', 'C');
    return 0;
}