#include <iostream>
#include <vector>
using namespace std;

bool issafe(vector<vector<int>> board, int row, int col, int x)
{
    for (int i = 0; i < 9; i++)
    {
        if (board[i][col] == x)
            return false;
        if (board[row][i] == x)
            return false;
        if (board[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == x)
            return false;
    }
    return true;
}

bool sudokosolver(vector<vector<int>> &board)
{
    for (int i = 0; i < board.size(); i++)
    {
        for (int j = 0; j < board[0].size(); j++)
        {
            if (board[i][j] == 0)
            {
                for (int k = 1; k <= 9; k++)
                {
                    if (issafe(board, i, j, k))
                    {
                        board[i][j] = k;
                        if (sudokosolver(board))
                            return true;
                        board[i][j] = 0;
                    }
                }
                return false;
            }
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> board;

    for (int i = 0; i < n; i++)
    {
        vector<int> temp;
        for (int j = 0; j < n; j++)
        {
            int value;
            cin >> value;
            temp.push_back(value);
        }
        board.push_back(temp);
    }
    sudokosolver(board);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}