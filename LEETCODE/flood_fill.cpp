// An image is represented by an m x n integer grid image where image[i][j] represents the pixel value of the image.

// You are also given three integers sr, sc, and color. You should perform a flood fill on the image starting from the pixel image[sr][sc].

// To perform a flood fill, consider the starting pixel, plus any pixels connected 4-directionally to the starting pixel of the same color as the starting pixel, plus any pixels connected 4-directionally to those pixels (also with the same color), and so on. Replace the color of all of the aforementioned pixels with color.

// Return the modified image after performing the flood fill.

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int color)
{
  int n = image.size();
  int m = image[0].size();
  int pre = image[sr][sc];

  queue<pair<int, int>> q;
  q.push({sr, sc});
  image[sr][sc] = color;
  int drow[] = {-1, 0, 1, 0};
  int dcol[] = {0, 1, 0, -1};
  while (!q.empty())
  {
    int r = q.front().first;
    int c = q.front().second;
    q.pop();

    for (int i = 0; i < 4; i++)
    {
      int nrow = r + drow[i];
      int ncol = c + dcol[i];

      if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && image[nrow][ncol] != color && image[nrow][ncol] == pre)
      {
        image[nrow][ncol] = color;
        q.push({nrow, ncol});
      }
    }
  }

  return image;
}
int main()
{

  vector<vector<int>> image{
      {1, 1, 1},
      {1, 1, 0},
      {1, 0, 1}};

    vector<vector<int>> ans = floodFill(image, 1, 1, 2);
  for (auto i : ans)
  {
    for (auto j : i)
      cout << j << " ";
    cout << "\n";
  }

  return 0;
}
