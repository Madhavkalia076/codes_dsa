// You are given a string num, representing a large integer. Return the largest-valued odd integer (as a string) that is a non-empty substring of num, or an empty string "" if no odd integer exists.

// A substring is a contiguous sequence of characters within a string.

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string largestOddNumber(string num)
{
  if (num.back() % 2 == 1)
  {
    return num;
  }
  int i = num.length() - 1;
  while (i >= 0)
  {
    int n = num[i];
    if (n % 2 == 1)
    {
      return num.substr(0, i + 1);
    }
    i--;
  }
  return "";
}
int main()
{
  string num = "452";
  string ans = "";
  for (int i = 0; i < ans.size(); i++)
  {
    cout << ans[i];
  }
  return 0;
}