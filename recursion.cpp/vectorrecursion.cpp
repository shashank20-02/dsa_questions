#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void mergearrs(vector<int> &arr1, vector<int> arr2)
{
    if (arr2.size() == 0)
        return;

    int n = arr2.size();
    int temp = arr2[n - 1];
    arr1.push_back(temp);
    arr2.pop_back();
    return mergearrs(arr1, arr2);
}

int main()
{
    int a, b, value;
    cin >> a >> b;
    vector<int> arr1, arr2;
    for (int i = 0; i < a; i++)
    {
        cin >> value;
        arr1.push_back(value);
    }
    for (int i = 0; i < b; i++)
    {
        cin >> value;
        arr1.push_back(value);
    }
    sort(arr1.begin(), arr1.end());
    for (int i = 0; i < arr1.size(); i++)
    {
        cout << arr1[i] << " ";
    }

    return 0;
}