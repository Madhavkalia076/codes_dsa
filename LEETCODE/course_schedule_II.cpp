// There are a total of numCourses courses you have to take, labeled from 0 to numCourses - 1. You are given an array prerequisites where prerequisites[i] = [ai, bi] indicates that you must take course bi first if you want to take course ai.

// For example, the pair [0, 1], indicates that to take course 0 you have to first take course 1.
// Return the ordering of courses you should take to finish all courses. If there are many valid answers, return any of them. If it is impossible to finish all courses, return an empty array

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  vector<int> findOrder(int V, int m, vector<vector<int>> prerequisites)
  {
    vector<int> adj[V];
    for (auto it : prerequisites)
    {
      adj[it[1]].push_back(it[0]);
    }

    int indegree[V] = {0};
    for (int i = 0; i < V; i++)
    {
      for (auto it : adj[i])
      {
        indegree[it]++;
      }
    }

    queue<int> q;
    for (int i = 0; i < V; i++)
    {
      if (indegree[i] == 0)
      {
        q.push(i);
      }
    }
    vector<int> topo;
    while (!q.empty())
    {
      int node = q.front();
      q.pop();
      topo.push_back(node);
      // node is in your topo sort
      // so please remove it from the indegree

      for (auto it : adj[node])
      {
        indegree[it]--;
        if (indegree[it] == 0)
          q.push(it);
      }
    }

    if (topo.size() == V)
      return topo;
    return {};
  }
};

int main()
{

  int N = 4;
  int M = 3;

  vector<vector<int>> prerequisites(3);
  prerequisites[0].push_back(0);
  prerequisites[0].push_back(1);

  prerequisites[1].push_back(1);
  prerequisites[1].push_back(2);

  prerequisites[2].push_back(2);
  prerequisites[2].push_back(3);

  Solution obj;
  vector<int> ans = obj.findOrder(N, M, prerequisites);

  for (auto task : ans)
  {
    cout << task << " ";
  }
  cout << endl;
  return 0;
}
