#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <list>
using namespace std;

bool iscyclic(int src, map<int, bool> &visited, map<int, list<int>> &adj)
{
  map<int, int> parent;
  parent[src] = -1;
  visited[src] = 1;
  queue<int> q;
  q.push(src);

  while (!q.empty())
  {
    int front = q.front();
    q.pop();

    for (auto i : adj[front])
    {
      if (visited[i] == true && i != parent[front])
      {
        return true;
      }
      else if (!visited[i])
      {
        q.push(i);
        visited[i] = 1;
        parent[i] = front;
      }
    }
  }
  return false;
}

string cycleDetection(vector<vector<int>> &edges, int n, int m)
{

  map<int, list<int>> adj;
  for (int i = 0; i < edges.size(); i++)
  {
    int u = edges[i][0];
    int v = edges[i][1];
    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  map<int, bool> visited;
  for (int i = 0; i < n; i++)
  {
    if (!visited[i])
    {
      bool ans = iscyclic(i, visited, adj);
      if (ans == 1)
      {
        return "Yes";
      }
    }
  }
  return "No";
}
int main()
{
  vector<vector<int>> edges = {{1, 2}, {2, 3}};
  string ans = cycleDetection(edges, 3, 2);
  cout << "Is graph cyclic: " << ans;
  return 0;
}