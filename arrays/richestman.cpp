#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int row, col;
    vector<vector<int>> arr;
    cin >> row >> col;
    for (int i = 0; i < row; i++)
    {
        vector<int> temp;
        for (int j = 0; j < col; j++)
        {
            int value;
            cin >> value;
            temp.push_back(value);
        }
        arr.push_back(temp);
    }

    int maxx = INT8_MIN, sum = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        maxx = max(maxx, sum);
        sum = 0;
    }

    cout << maxx << endl;
}