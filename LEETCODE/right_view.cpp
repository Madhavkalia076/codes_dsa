// Given the root of a binary tree, imagine yourself standing on the right side of it, return the values of the nodes you can see ordered from top to bottom.

#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
  int val;
  Node *left, *right;
};
Node *newNode(int data)
{
  Node *node = new Node;
  node->val = data;
  node->left = NULL;
  node->right = NULL;
  return node;
}
void solve(Node *root, vector<int> &ans, int level)
{
  if (root == NULL)
  {
    return;
  }
  if (level == ans.size())
  {
    ans.push_back(root->val);
  }
  solve(root->right, ans, level + 1);
  solve(root->left, ans, level + 1);
}
vector<int> rightSideView(Node *root)
{
  vector<int> ans;
  solve(root, ans, 0);
  return ans;
}

int main()
{
  int i, j;
  Node *root = newNode(3);
  root->left = newNode(9);
  root->right = newNode(20);
  root->right->left = newNode(15);
  root->right->right = newNode(7);
  vector<int> ans;
  ans = rightSideView(root);
  cout << "Zig Zag Traversal of Binary Tree" << endl;
  for (i = 0; i < ans.size(); i++)
  {

    cout << ans[i] << " ";
  }
  return 0;
}