// Given two strings s and t, determine if they are isomorphic.

// Two strings s and t are isomorphic if the characters in s can be replaced to get t.

// All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.

#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

bool isIsomorphic(string s, string t)
{
  if (s.size() != t.size())
  {
    return false;
  }

  unordered_map<char, char> sToT;
  unordered_map<char, char> tToS;

  for (int i = 0; i < s.size(); i++)
  {
    char ch_s = s[i];
    char ch_t = t[i];

    // Check mapping from s to t
    if (sToT.find(ch_s) != sToT.end())
    {
      if (sToT[ch_s] != ch_t)
      {
        return false;
      }
    }
    else
    {
      sToT[ch_s] = ch_t;
    }

    // Check mapping from t to s
    if (tToS.find(ch_t) != tToS.end())
    {
      if (tToS[ch_t] != ch_s)
      {
        return false;
      }
    }
    else
    {
      tToS[ch_t] = ch_s;
    }
  }

  return true;
}
int main()
{
  string s = "fos";
  string t = "add";
  cout << isIsomorphic(s, t);
  return 0;
}
