// There is a singly-linked list head and we want to delete a node node in it.

// You are given the node to be deleted node. You will not be given access to the first node of head.

// All the values of the linked list are unique, and it is guaranteed that the given node node is not the last node in the linked list.

// Delete the given node. Note that by deleting the node, we do not mean removing it from memory.

#include <iostream>
#include <vector>
using namespace std;
class node
{
public:
  int data;
  node *next;

  node(int x)
  {
    this->data = x;
    this->next = NULL;
  }
};
node *constructLL(vector<int> arr)
{
  node *head = new node(arr[0]);
  node *temp = head;
  for (int i = 1; i < arr.size(); i++)
  {
    node *curr = new node(arr[i]);
    temp->next = curr;
    temp = curr;
  }
  return head;
}
void print(node *head)
{
  node *curr = head;
  while (curr != NULL)
  {
    cout << curr->data << " ";
    curr = curr->next;
  }
}
void deletenode(node *val)
{
  node *temp = val;
  while (val->next != NULL)
  {
    val->data = val->next->data;
    temp = val;
    val = val->next;
  }
  temp->next = NULL;
}
int main()
{
  vector<int> arr = {10, 20, 30, 40, 50};
  node *head = constructLL(arr);
  cout << "before deleting the node : ";
  print(head);
  deletenode(head->next);
  cout << endl
       << "after deletion: " << endl;
  print(head);

  return 0;
}