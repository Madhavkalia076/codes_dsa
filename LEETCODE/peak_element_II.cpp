#include <iostream>
#include <vector>
using namespace std;

int solve(vector<vector<int>> &mat, int row, int col)
{
  int max = -1;
  int index = -1;
  for (int i = 0; i < row; i++)
  {
    if (mat[i][col] > max)
    {
      max = mat[i][col];
      index = i;
    }
  }
  return index;
}
vector<int> findPeakGrid(vector<vector<int>> &mat)
{
  int n = mat.size();
  int m = mat[0].size();
  int low = 0, high = m - 1;
  while (low <= high)
  {
    int mid = (low + high) / 2;
    int maxindex = solve(mat, n, mid);
    int left = mid - 1 >= 0 ? mat[maxindex][mid - 1] : -1;
    int right = mid + 1 < m ? mat[maxindex][mid + 1] : -1;

    if ((mat[maxindex][mid] > left) && (mat[maxindex][mid] > right))
    {
      return {maxindex, mid};
    }
    else if (mat[maxindex][mid] < left)
    {
      high = mid - 1;
    }
    else
    {
      low = mid + 1;
    }
  }
  return {-1, -1};
}
int main()
{
  vector<vector<int>> mat = {{10, 20, 15}, {21, 30, 14}, {7, 16, 32}};
  vector<int> ans = findPeakGrid(mat);
  cout << "peak element in the  2D matrix: " << endl;
  for (int i = 0; i < 2; i++)
  {
    cout << ans[i] << " ";
  }
  return 0;
}