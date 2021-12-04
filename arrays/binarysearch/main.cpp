#include <bits\stdc++.h>
using namespace std;
// iteratively
// O[log(n)] time complexity
// O[1] space complexity

int binary_search1(int arr[], int k, int low, int high)
{
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (k == arr[mid])
        {
            return mid;
        }
        if (k > arr[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

// recursively
// occupies extra space O[log(n)] space complexity
//  O[log(n)] time complexity
int binary_search2(int arr[], int k, int low, int high)
{
    if (low > high)
    {
        return -1;
    }

    int mid = (low + high) / 2;
    if (k == arr[mid])
    {
        return mid;
    }
    else if (k > arr[mid])
    {
        binary_search2(arr, k, mid + 1, high);
    }
    else
    {
        binary_search2(arr, k, low, mid - 1);
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "enter the key\n"
         << endl;
    cin >> key;
    cout << binary_search1(arr, key, 0, n) << endl;
    cout << binary_search2(arr, key, 0, n) << endl;
    return 0;
}