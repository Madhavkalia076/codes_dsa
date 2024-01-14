// Given an undirected and disconnected graph G(V, E), containing 'V' vertices and 'E' edges, the information about edges is given using 'GRAPH' matrix, where i-th edge is between GRAPH[i][0] and GRAPH[i][1]. print its DFS traversal.

// V is the number of vertices present in graph G and vertices are numbered from 0 to V-1.

// E is the number of edges present in graph G.

#include <iostream>
#include <vector>
#include <map>
#include <list>
using namespace std;

void dfs(int node, map<int, bool> &visited, map<int, list<int>> &adj, vector<int> &component)
{
  component.push_back(node);
  visited[node] = true;

  for (auto i : adj[node])
  {
    if (!visited[i])
    {
      dfs(i, visited, adj, component);
    }
  }
}

vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
  map<int, list<int>> adj;
  for (int i = 0; i < edges.size(); i++)
  {
    int u = edges[i][0];
    int v = edges[i][1];

    adj[u].push_back(v);
    adj[v].push_back(u);
  }
  vector<vector<int>> ans;
  map<int, bool> visited;
  for (int i = 0; i < V; i++)
  {
    if (!visited[i])
    {
      vector<int> component;
      dfs(i, visited, adj, component);
      ans.push_back(component);
    }
  }
  return ans;
}
int main()
{
  vector<vector<int>> edges = {{0, 1}, {0, 2}, {1, 2}, {3, 4}};
  vector<vector<int>> ans = depthFirstSearch(5, 4, edges);
  cout << "depth first traversal : " << endl;
  for (int i = 0; i < ans.size(); i++)
  {
    for (int j = 0; j < ans[i].size(); j++)
    {
      cout << ans[i][j]
           << " ";
    }
    cout << endl;
  }
  return 0;
}
