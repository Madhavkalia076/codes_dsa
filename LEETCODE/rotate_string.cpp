// Given two strings s and goal, return true if and only if s can become goal after some number of shifts on s.

// A shift on s consists of moving the leftmost character of s to the rightmost position.

// For example, if s = "abcde", then it will be "bcdea" after one shift

#include <iostream>
#include <string>
using namespace std;
bool rotateString(string s, string goal)
{
  int n = s.size();
  if (s.size() != goal.size())
  {
    return false;
  }
  char temp;
  for (int i = 0; i < n; i++)
  {
    temp = goal[0];
    for (int j = 0; j < n - 1; j++)
    {
      goal[j] = goal[j + 1];
    }
    goal[n - 1] = temp;
    if (s == goal)
    {
      return true;
    }
  }
  return false;
}
int main()
{
  string s = "abcde";
  string goal = "cdeab";
  bool ans = rotateString(s, goal);
  cout << ans;
  return 0;
}
