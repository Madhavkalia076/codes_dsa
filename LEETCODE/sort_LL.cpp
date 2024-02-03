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
Node *sortList(Node *head)
{
  if (head == NULL || head->next == NULL)
  {
    return head;
  }
  Node *temp = head;
  vector<int> arr;
  while (temp != NULL)
  {
    arr.push_back(temp->data);
    temp = temp->next;
  }
  sort(arr.begin(), arr.end());
  Node *ans = new Node(arr[0]);
  Node *temp1 = ans;
  for (int i = 1; i < arr.size(); i++)
  {
    Node *node = new Node(arr[i]);
    temp1->next = node;
    temp1 = node;
  }
  return ans;
}
int main()
{
  vector<int> arr = {2, 1, 3, 5, 6, 4, 7};
  Node *head = constructLL(arr);
  cout << "linked list: " << endl;
  print(head);
  Node *ans = sortList(head);
  cout << "\n after sorting" << endl;
  print(ans);
  return 0;
}