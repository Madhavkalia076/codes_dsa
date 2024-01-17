// A valid parentheses string is either empty "", "(" + A + ")", or A + B, where A and B are valid parentheses strings, and + represents string concatenation.

// For example, "", "()", "(())()", and "(()(()))" are all valid parentheses strings.
// A valid parentheses string s is primitive if it is nonempty, and there does not exist a way to split it into s = A + B, with A and B nonempty valid parentheses strings.

// Given a valid parentheses string s, consider its primitive decomposition: s = P1 + P2 + ... + Pk, where Pi are primitive valid parentheses strings.

// Return s after removing the outermost parentheses of every primitive string in the primitive decomposition of s.

#include <iostream>
#include <string>
using namespace std;
string remove(string s)
{
  string ans = "";
  int count = 0;
  for (int i = 0; i < s.size(); i++)
  {
    if (s[i] == '(')
    {
      count++;
      if (count > 1)
      {
        ans = ans + '(';
      }
    }
    else
    {
      if (count > 1)
      {
        ans = ans + ')';
      }
      count--;
    }
  }
  return ans;
}
int main()
{
  string s = "(()())(())(()(()))";
  for (int i = 0; i < s.size(); i++)
  {
    cout << s[i];
  }
  cout << endl;
  string ans = remove(s);
  for (int i = 0; i < ans.size(); i++)
  {
    cout << ans[i];
  }
  return 0;
}
