#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, first;
    cin >> n;
    // int arr[n];
    vector<int> arr;
    cin >> first;
    int in;
    for (int i = 0; i < n; i++)
    {
        cin >> in;
        arr.push_back(i);
    }
    // int coded[n + 1];
    vector<int> coded;
    coded.push_back(first);
    int Xor = first;
    for (int i = 1; i < n + 1; i++)
    {
        Xor = (Xor ^ arr[i - 1]);
        coded[i] = Xor;
    }

    for (int i = 0; i < n + 1; i++)
    {
        cout << coded[i] << " ";
    }
}