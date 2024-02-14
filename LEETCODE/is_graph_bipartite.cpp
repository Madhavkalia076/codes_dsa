// There is an undirected graph with n nodes, where each node is numbered between 0 and n - 1. You are given a 2D array graph, where graph[u] is an array of nodes that node u is adjacent to. More formally, for each v in graph[u], there is an undirected edge between node u and node v. The graph has the following properties:

// There are no self-edges (graph[u] does not contain u).
// There are no parallel edges (graph[u] does not contain duplicate values).
// If v is in graph[u], then u is in graph[v] (the graph is undirected).
// The graph may not be connected, meaning there may be two nodes u and v such that there is no path between them.
// A graph is bipartite if the nodes can be partitioned into two independent sets A and B such that every edge in the graph connects a node in set A and a node in set B.

// Return true if and only if it is bipartite.

#include <bits/stdc++.h>
using namespace std;

bool dfs(int node, int color, int col[], vector<vector<int>> graph)
{
  col[node] = color;
  for (auto it : graph[node])
  {
    if (col[it] == -1)
    {
      if (dfs(it, !color, col, graph) == false)
      {
        return false;
      };
    }
    else if (col[it] == color)
    {
      return false;
    }
  }
  return true;
}
bool isBipartite(vector<vector<int>> &graph)
{
  int V = graph.size();
  int col[V];
  for (int i = 0; i < V; i++)
  {
    col[i] = -1;
  }
  for (int i = 0; i < V; i++)
  {
    if (col[i] == -1)
    {
      if (dfs(i, 0, col, graph) == false)
      {
        return false;
      }
    }
  }

  return true;
}
void addEdge(vector<int> adj[], int u, int v)
{
  adj[u].push_back(v);
  adj[v].push_back(u);
}
int main()
{

  // V = 4, E = 4
  vector<vector<int>> graph = {{1, 2, 3}, {0, 2}, {0, 1, 3}, {0, 2}};

  bool ans = isBipartite(graph);
  if (ans)
    cout << "1\n";
  else
    cout << "0\n";

  return 0;
}