// Given two strings s and t, return true if t is an anagram of s, and false otherwise.

// An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

#include <iostream>
#include <map>
#include <string>

using namespace std;
bool isAnagram(string s, string t)
{
  if (s.size() != t.size())
  {
    return false;
  }
  map<char, int> check;
  for (char temp : s)
  {
    check[temp]++;
  }
  for (char temp1 : t)
  {
    if (check.find(temp1) != check.end())
    {
      check[temp1]--;
    }
    else
    {
      return false;
    }
  }
  for (auto &entry : check)
  {
    if (entry.second != 0)
    {
      return false;
    }
  }
  return true;
}
int main()
{
  // string s = "anagram";
  // string t = "nagaram";

  string s = "dog";
  string t = "cat";
  int ans = isAnagram(s, t);
  cout << ans;
  return 0;
}