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
  string s = "aabcb";
  int ans = beautySum(s);
  cout << ans;
  return 0;
}