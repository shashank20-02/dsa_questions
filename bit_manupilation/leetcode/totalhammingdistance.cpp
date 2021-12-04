#include <iostream>
#include <vector>
using namespace std;
int totalsetbits(int n)
{
    int count = 0;
    while (n != 0)
    {
        count++;
        n = (n & (n - 1));
    }
    return count;
}
int totalHammingDistance(vector<int> &nums)
{
    int ham = 0, sum = 0;
    for (int i = 0; i < nums.size() - 1; i++)
    {
        ham = (nums[i] ^ nums[i + 1]);
        sum += totalsetbits(ham);
    }
    if (nums.size() > 2)
        sum += totalsetbits((nums[0] ^ nums[nums.size() - 1]));

    return sum;
}
int main()
{
    int n, value;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        cin >> value;
        nums.push_back(value);
    }
    cout << totalHammingDistance(nums) << endl;
    return 0;
}