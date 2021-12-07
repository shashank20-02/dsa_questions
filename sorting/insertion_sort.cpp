#include <bits\stdc++.h>
using namespace std;

void insertion_sort(vector<int> &nums)
{
    int n = nums.size();
    for (int i = 1; i < n; i++)
    {
        int temp = nums[i];
        int j = i - 1;
        while (j >= 0 && nums[j] > temp)
        {
            nums[j + 1] = nums[j];
            j--;
        }
        nums[j + 1] = temp;
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    insertion_sort(arr);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}