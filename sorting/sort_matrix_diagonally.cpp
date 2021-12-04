#include <bits\stdc++.h>
using namespace std;
void sort_mat(vector<vector<int>> &arr, int i, int j, int row, int col)
{
    vector<int> temp;
    int r = i, c = j;
    while (r < row && c < col)
    {
        temp.push_back(arr[r][c]);
        r++;
        c++;
    }
    sort(temp.begin(), temp.end());

    r = i;
    c = j;
    int ind = 0;
    while (r < row && c < col && ind <= temp.size())
    {
        arr[r][c] = temp[ind];
        r++;
        c++;
        ind++;
    }
}
// [5,17,4,1,52,7],[11,11,25,45,8,69],[14,23,25,44,58,15],[22,27,31,36,50,66],[84,28,75,33,55,68]
int main()
{
    vector<vector<int>> mat = {{11, 25, 66, 1, 69, 7}, {23, 55, 17, 45, 15, 52}, {75, 31, 36, 44, 58, 8}, {22, 27, 33, 25, 68, 4}, {84, 28, 14, 11, 5, 50}};
    int row = mat.size();
    int col = mat[0].size();

    for (int i = 0; i < row; i++)
        sort_mat(mat, 0, i, row, col);

    for (int i = 1; i < col; i++)
        sort_mat(mat, i, 0, row, col);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << " , ";
    }
    return 0;
}