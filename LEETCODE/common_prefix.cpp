// Write a function to find the longest common prefix string amongst an array of strings.

// If there is no common prefix, return an empty string "".

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

string longestCommonPrefix(vector<string> &strs)
{
  string ans = "";
  sort(strs.begin(), strs.end());
  int n = strs.size();
  string first = strs[0], last = strs[n - 1];
  for (int i = 0; i < min(first.size(), last.size()); i++)
  {
    if (first[i] != last[i])
    {
      return ans;
    }
    ans = ans + first[i];
  }
  return ans;
}
int main()
{
  vector<string> strs = {"flower", "flow", "flight"};
  string ans = "";
  ans = longestCommonPrefix(strs);
  for (int i = 0; i < ans.size(); i++)
  {
    cout << ans[i];
  }
  return 0;
}