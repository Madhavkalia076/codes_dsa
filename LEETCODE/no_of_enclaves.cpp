// You are given an m x n binary matrix grid, where 0 represents a sea cell and 1 represents a land cell.

// A move consists of walking from one land cell to another adjacent (4-directionally) land cell or walking off the boundary of the grid.

// Return the number of land cells in grid for which we cannot walk off the boundary of the grid in any number of moves.

#include <bits/stdc++.h>
using namespace std;
void dfs(int row, int col, vector<vector<int>> &grid, int drow[], int dcol[], int m, int n)
{
  grid[row][col] = 0; // Marking the cell as visited

  for (int i = 0; i < 4; i++)
  {
    int nrow = row + drow[i];
    int ncol = col + dcol[i];

    if (nrow >= 0 && nrow < m && ncol >= 0 && ncol < n && grid[nrow][ncol] == 1)
    {
      dfs(nrow, ncol, grid, drow, dcol, m, n);
    }
  }
}

int numEnclaves(vector<vector<int>> &grid)
{
  int m = grid.size();
  int n = grid[0].size();

  int drow[] = {-1, 0, 1, 0};
  int dcol[] = {0, 1, 0, -1};

  for (int j = 0; j < n; j++)
  {
    if (grid[0][j] == 1)
    {
      dfs(0, j, grid, drow, dcol, m, n);
    }
    if (grid[m - 1][j] == 1)
    {
      dfs(m - 1, j, grid, drow, dcol, m, n);
    }
  }

  for (int i = 0; i < m; i++)
  {
    if (grid[i][0] == 1)
    {
      dfs(i, 0, grid, drow, dcol, m, n);
    }
    if (grid[i][n - 1] == 1)
    {
      dfs(i, n - 1, grid, drow, dcol, m, n);
    }
  }

  int count = 0;
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (grid[i][j] == 1)
      {
        count++;
      }
    }
  }

  return count;
}
int main()
{

  vector<vector<int>> grid{
      {0, 0, 0, 0},
      {1, 0, 1, 0},
      {0, 1, 1, 0},
      {0, 0, 0, 0}};

  cout << numEnclaves(grid) << endl;
}