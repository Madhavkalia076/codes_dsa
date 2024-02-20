// You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

// You may assume the two numbers do not contain any leading zero, except the number 0 itself

#include <iostream>
#include <vector>
#include <vector>
#include <algorithm>
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
Node *addTwoNumbers(Node *num1, Node *num2)
{
  Node *dummy = new Node(-1);
  Node *curr = dummy;
  Node *temp1 = num1;
  Node *temp2 = num2;
  int carry = 0;
  while (temp1 != NULL || temp2 != NULL)
  {
    int sum = carry;
    if (temp1)
      sum += temp1->data;
    if (temp2)
      sum += temp2->data;
    Node *newnode = new Node(sum % 10);
    carry = sum / 10;

    curr->next = newnode;
    curr = curr->next;

    if (temp1)
      temp1 = temp1->next;
    if (temp2)
      temp2 = temp2->next;
  }
  if (carry)
  {
    Node *newnode = new Node(carry);
    curr->next = newnode;
  }
  return dummy->next;
}
int main()
{
  vector<int> arr = {2, 4, 3, 5, 7};
  Node *head1 = constructLL(arr);
  cout << "linked list1: " << endl;
  print(head1);
  cout << endl;
  vector<int> arr2 = {5, 6, 4};
  Node *head2 = constructLL(arr2);
  cout << "linked list2: " << endl;
  print(head2);
  cout << endl;
  Node *ans = addTwoNumbers(head1, head2);
  print(ans);
  return 0;
}
