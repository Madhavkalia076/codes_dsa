// Given the head of a singly linked list, group all the nodes with odd indices together followed by the nodes with even indices, and return the reordered list.

// The first node is considered odd, and the second node is even, and so on.

// Note that the relative order inside both the even and odd groups should remain as it was in the input.

// You must solve the problem in O(1) extra space complexity and O(n) time complexity.

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
Node *oddEvenList(Node *head)
{
  if (head == NULL || head->next == NULL)
  {
    return head;
  }
  Node *temp = head;
  Node *curr = temp->next;
  Node *newhead = temp->next;

  while (temp->next != NULL && curr->next != NULL)
  {
    temp->next = curr->next;
    temp = curr->next;
    curr->next = temp->next;
    curr = temp->next;
  }
  temp->next = newhead;
  return head;
}
int main()
{
  vector<int> arr = {2, 1, 3, 5, 6, 4, 7};
  Node *head = constructLL(arr);
  cout << "linked list: " << endl;
  print(head);
  cout << "list after seggration : " << endl;
  Node *ans = oddEvenList(head);
  print(ans);
  return 0;
}