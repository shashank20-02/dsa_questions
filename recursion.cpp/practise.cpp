#include <iostream>
#include <vector>
using namespace std;

void print_ascending(int n)
{
    if (n == 0)
    {
        return;
    }
    print_ascending(n - 1);
    cout << n << endl;
}

int power(int x, int y)
{
    if (y == 0)
    {
        return 1;
    }
    return x * power(x, y - 1);
}

vector<string> arr1 = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
string retfun(int n, string ans)
{
    if (n == 0)
    {
        return ans;
    }

    int rem = n % 10;
    ans = arr1[rem] + " " + ans;
    return retfun(n / 10, ans);
}

// divide and conquer

int pow(int x, int y)
{
    if (y == 0)
    {
        return 1;
    }
    else if (y % 2 == 0)
        return pow(x, y / 2) * pow(x, y / 2);
    else
        return pow(x, y / 2) * pow(x, y / 2) * x;
}

bool issorted(int start, int end, int arr[])
{
    if (start == end)
        return true;
    else if (arr[start] > arr[start + 1])
        return false;
    else
        issorted(start + 1, end, arr);
}

int count_consonents(string str)
{
    int count = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == ' ')
            continue;
        else
        {
            count++;
        }
    }
    return count;
}
int cou = 0;
int recursive_countconsonents(string str)
{
    if (str.length() == 0)
        return cou;
    else if (str[0] == 'a' || str[0] == 'e' || str[0] == 'i' || str[0] == 'o' || str[0] == 'u' || str[0] == ' ')
        recursive_countconsonents(str.substr(1));
    else
    {
        cou++;
        recursive_countconsonents(str.substr(1));
    }
}

int main()
{
    string str;
    getline(cin, str);
    cout << count_consonents(str) << endl;
    return 0;
}