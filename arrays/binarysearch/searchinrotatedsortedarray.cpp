#include <bits\stdc++.h>
using namespace std;

int search_in_rotated_sorted_array(vector<int> v, int key)
{
    int low = 0, high = v.size() - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (key == v[mid])
        {
            return mid;
        }
        if (v[low] <= v[mid])
        {
            if (key >= v[low] && key <= v[mid])
            {
                high = mid - 1;
            }
            else
                low = mid + 1;
        }
        else
        {
            if (key >= v[mid] && key <= v[high])
            {
                low = mid + 1;
            }
            else
                high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "enter the value of key" << endl;
    cin >> key;
    cout << search_in_rotated_sorted_array(arr, key);
    return 0;
}