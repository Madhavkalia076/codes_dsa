#include <iostream>
#include <vector>
#include <queue>
#include <map>

using namespace std;
void bfs(vector<vector<int>> &adj, int node, vector<int> &ans, map<int, bool> &visited)
{
  queue<int> q;
  q.push(node);
  visited[node] = 1;
  while (!q.empty())
  {
    int front = q.front();
    q.pop();
    ans.push_back(front);
    for (auto i : adj[front])
    {
      if (!visited[i])
      {
        q.push(i);
        visited[i] = 1;
      }
    }
  }
}
vector<int> bfsTraversal(int n, vector<vector<int>> adj)
{
  map<int, bool> visited;
  vector<int> ans;
  bfs(adj, 0, ans, visited);
  return ans;
}
int main()
{
  vector<vector<int>> adj = {{1, 2, 3}, {4}, {5}, {}, {}, {}};
  vector<int> ans = bfsTraversal(5, adj);
  for (int i = 0; i < ans.size(); i++)
  {
    cout << ans[i] << " ";
  }
  return 0;
}