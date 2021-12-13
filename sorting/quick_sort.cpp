#include <bits\stdc++.h>
using namespace std;

void swap_tt(vector<int> &nums, int i, int j)
{
    int temp = nums[i];
    nums[i] = nums[j];
    nums[j] = temp;
}

int partition(vector<int> &nums, int lo, int hi)
{
    int mid = (lo + hi) / 2;
    int pivot = nums[mid];
    int i = lo, j = hi;
    while (i <= j)
    {
        while (nums[i] <= pivot)
            i++;
        while (nums[j] > pivot)
            j--;
        if (i < j)
            swap_tt(nums, i, j);
    }
    swap_tt(nums, j, lo);
    return j;
}
void quick_sort(vector<int> &nums, int lo, int hi)
{
    if (lo < hi)
    {
        int pivot = partition(nums, lo, hi);
        quick_sort(nums, lo, pivot - 1);
        quick_sort(nums, pivot + 1, hi);
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n, 0);
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    quick_sort(nums, 0, nums.size() - 1);
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}