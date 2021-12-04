#include <iostream>
#include <vector>
using namespace std;

bool issafe(vector<vector<int>> arr, int x, int y, int n)
{
    if (x < n && y < n && arr[x][y] == 1)
    {
        return true;
    }
    return false;
}

bool rat_in_the_maze(vector<vector<int>> arr, int x, int y, int n, vector<vector<int>> &solArr)
{
    if (x == n - 1 && y == n - 1)
    {
        solArr[x][y] = 1;
        return true;
    }

    if (issafe(arr, x, y, n))
    {
        solArr[x][y] = 1;
        if (rat_in_the_maze(arr, x + 1, y, n, solArr))
        {
            return true;
        }
        if (rat_in_the_maze(arr, x, y + 1, n, solArr))
        {
            return true;
        }
        solArr[x][y] = 0;
        return false;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> arr;
    vector<vector<int>> solArr(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++)
    {
        vector<int> temp;
        for (int j = 0; j < n; j++)
        {
            int value;
            cin >> value;
            temp.push_back(value);
        }
        arr.push_back(temp);
    }
    rat_in_the_maze(arr, 0, 0, n, solArr);
    for (int i = 0; i < solArr.size(); i++)
    {
        for (int j = 0; j < solArr[i].size(); j++)
            cout << solArr[i][j] << " ";
        cout << endl;
    }

    return 0;
}