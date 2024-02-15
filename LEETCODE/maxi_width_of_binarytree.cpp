// Given the root of a binary tree, return the maximum width of the given tree.

// The maximum width of a tree is the maximum width among all levels.

// The width of one level is defined as the length between the end-nodes (the leftmost and rightmost non-null nodes), where the null nodes between the end-nodes that would be present in a complete binary tree extending down to that level are also counted into the length calculation.

// It is guaranteed that the answer will in the range of a 32-bit signed integer

#include <bits/stdc++.h>

using namespace std;

struct TreeNode
{
  int data;
  struct TreeNode *left, *right;
};

int widthOfBinaryTree(TreeNode *root)
{
  if (root == NULL)
  {
    return 0;
  }
  long long ans = 0;
  queue<pair<TreeNode *, long long>> q;
  q.push({root, 0});
  while (!q.empty())
  {
    long minn = q.front().second;
    long size = q.size();
    long long first, last;
    for (int i = 0; i < size; i++)
    {
      long long temp_index = q.front().second - minn;
      TreeNode *node = q.front().first;
      q.pop();
      if (i == 0)
      {
        first = temp_index;
      }
      if (i == size - 1)
      {
        last = temp_index;
      }
      if (node->left)
      {
        q.push({node->left, temp_index * 2 + 1});
      }
      if (node->right)
      {
        q.push({node->right, temp_index * 2 + 2});
      }
    }
    ans = max(ans, last - first + 1);
  }
  return ans;
}
struct TreeNode *newNode(int data)
{
  struct TreeNode *node = (struct TreeNode *)malloc(sizeof(struct TreeNode));
  node->data = data;
  node->left = NULL;
  node->right = NULL;

  return (node);
}

int main()
{

  struct TreeNode *root = newNode(1);
  root->left = newNode(3);
  root->left->left = newNode(5);
  root->left->left->left = newNode(7);
  root->right = newNode(2);
  root->right->right = newNode(4);
  root->right->right->right = newNode(6);

  int maxWidth = widthOfBinaryTree(root);
  cout << "The maximum width of the Binary Tree is " << maxWidth;

  return 0;
}