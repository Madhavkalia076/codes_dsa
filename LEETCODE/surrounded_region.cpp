// Given an m x n matrix board containing 'X' and 'O', capture all regions that are 4-directionally surrounded by 'X'.

// A region is captured by flipping all 'O's into 'X's in that surrounded region.

#include <bits/stdc++.h>
using namespace std;

void dfs(int row, int col, vector<vector<int>> &vis, int drow[], int dcol[], vector<vector<char>> board, int m, int n)
{
  vis[row][col] = 1;
  for (int i = 0; i < 4; i++)
  {
    int nrow = row + drow[i];
    int ncol = col + dcol[i];
    if (nrow >= 0 && nrow < m && ncol >= 0 && ncol < n && !vis[nrow][ncol] && board[nrow][ncol] == 'O')
    {
      dfs(nrow, ncol, vis, drow, dcol, board, m, n);
    }
  }
}
void solve(vector<vector<char>> &board)
{
  int m = board.size();
  int n = board[0].size();

  vector<vector<int>> vis(m, vector<int>(n, 0));
  int drow[] = {-1, 0, 1, 0};
  int dcol[] = {0, 1, 0, -1};
  for (int j = 0; j < n; j++)
  {
    if (!vis[0][j] && board[0][j] == 'O')
    {
      dfs(0, j, vis, drow, dcol, board, m, n);
    }
    if (!vis[m - 1][j] && board[m - 1][j] == 'O')
    {
      dfs(m - 1, j, vis, drow, dcol, board, m, n);
    }
  }
  for (int i = 0; i < m; i++)
  {
    if (!vis[i][0] && board[i][0] == 'O')
    {
      dfs(i, 0, vis, drow, dcol, board, m, n);
    }
    if (!vis[i][n - 1] && board[i][n - 1] == 'O')
    {
      dfs(i, n - 1, vis, drow, dcol, board, m, n);
    }
  }
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (!vis[i][j] && board[i][j] == 'O')
      {
        board[i][j] = 'X';
      }
    }
  }
}
int main()
{

  vector<vector<char>> mat{
      {'X', 'X', 'X', 'X'},
      {'X', 'O', 'X', 'X'},
      {'X', 'O', 'O', 'X'},
      {'X', 'O', 'X', 'X'},
      {'X', 'X', 'O', 'O'}};

  // n = 5, m = 4
  solve(mat);
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      cout << mat[i][j] << " ";
    }
    cout << "\n";
  }
  return 0;
}