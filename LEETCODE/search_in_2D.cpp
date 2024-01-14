#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
  int m = matrix.size();
  int n = matrix[0].size();
  int start = 0, end = n - 1;
  while (start < m && end >= 0)
  {
    if (matrix[start][end] == target)
    {
      return true;
    }
    else if (target > matrix[start][end])
    {
      start++;
    }
    else
    {
      end--;
    }
  }
  return false;
}
int main()
{
  vector<vector<int>> matrix = {{1, 4, 7, 11, 15}, {2, 5, 8, 12, 19}, {3, 6, 9, 16, 22}, {10, 13, 14, 17, 24}, {18, 21, 23, 26, 30}};
  int target = 5;
  bool ans = searchMatrix(matrix, target);
  cout << ans;
  return 0;
}