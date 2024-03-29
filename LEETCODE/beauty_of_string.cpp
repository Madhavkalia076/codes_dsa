// The beauty of a string is the difference in frequencies between the most frequent and least frequent characters.

// For example, the beauty of "abaacc" is 3 - 1 = 2.
// Given a string s, return the sum of beauty of all of its substrings.

#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int beautySum(string s)
{
  int res = 0;
  for (int i = 0; i < s.length(); i++)
  {
    unordered_map<char, int> mp;
    for (int j = i; j < s.length(); j++)
    {
      mp[s[j]]++;
      if (mp.size() == 1)
      {
        res = res + 0;
      }
      else
      {
        int minn = INT8_MAX;
        int maxx = INT8_MIN;

        for (auto it = mp.begin(); it != mp.end(); it++)
        {
          minn = min(minn, it->second);
          maxx = max(maxx, it->second);
        }
        res = res + (maxx - minn);
      }
    }
  }
  return res;
}
int main()
{
  string s = "madhav";
  int ans = beautySum(s);
  cout << ans;
  return 0;
}