#include <bits\stdc++.h>
using namespace std;
void move_elements(vector<int> &arr, int pos)
{
    int key = arr[pos];
    for (int i = pos; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = key;
}

vector<int> permutate_from_query(vector<int> queries, int m)
{
    vector<int> permute, sol;
    for (int i = 1; i <= m; i++)
    {
        permute.push_back(i);
    }

    for (int i = 0; i < queries.size(); i++)
    {
        auto it = find(permute.begin(), permute.end(), queries[i]);
        int index = it - permute.begin();
        sol.push_back(index);
        move_elements(permute, index);
    }
    return sol;
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cin >> key;
    move_elements(arr, key);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}