#include <bits\stdc++.h>
using namespace std;

int sortedarray_search(vector<int> nums, int key)
{
    int low = 0, high = nums.size() - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (nums[mid] == key)
        {
            return mid;
        }
        if (nums[low] < nums[mid])
        {
            if (nums[low] <= key && nums[mid] > key)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        else
        {
            if (nums[high] >= key && nums[mid] < key)
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
    vector<int> array(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    cout << "enter the key\n";
    int key;
    cin >> key;
    cout << sortedarray_search(array, key);
    return 0;
}