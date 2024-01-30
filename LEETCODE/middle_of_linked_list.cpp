// Given the head of a singly linked list, return the middle node of the linked list.

// If there are two middle nodes, return the second middle node.

#include <iostream>
#include <vector>
using namespace std;
class Node
{
public:
  int data;
  Node *next;
  Node(int d)
  {
    this->data = d;
    this->next = NULL;
  }
};

Node *constructLL(vector<int> &arr)
{
  Node *head = new Node(arr[0]);
  Node *temp = head;
  for (int i = 1; i < arr.size(); i++)
  {
    Node *node = new Node(arr[i]);
    temp->next = node;
    temp = node;
  }

  return head;
}
void print(Node *head)
{
  Node *curr = head;
  while (curr != NULL)
  {
    cout << curr->data << " ";
    curr = curr->next;
  }
}

Node *middleNode(Node *head)
{
  if (head == NULL)
  {
    return NULL;
  }
  Node *slow = head;
  Node *fast = head;
  while (fast != NULL && fast->next != NULL)
  {
    slow = slow->next;
    fast = fast->next->next;
  }
  return slow;
}
int main()
{
  vector<int> arr = {1, 2, 3, 4, 5};
  Node *head = constructLL(arr);
  cout << "linked list: " << endl;
  print(head);
  cout << "list after the middle node: " << endl;
  Node *ans = middleNode(head);
  print(ans);
  return 0;
}