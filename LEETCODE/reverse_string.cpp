// Given an input string s, reverse the order of the words.

// A word is defined as a sequence of non-space characters. The words in s will be separated by at least one space.

// Return a string of the words in reverse order concatenated by a single space.

// Note that s may contain leading or trailing spaces or multiple spaces between two words. The returned string should only have a single space separating the words. Do not include any extra spaces.

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string reverseWords(string s)
{
  reverse(s.begin(), s.end());
  int l = 0, r = 0, i = 0, n = s.size();
  while (i < n)
  {
    while (i < n && s[i] != ' ')
      s[r++] = s[i++];

    if (l < r)
    {                                        // if we can find a non-empty word then
      reverse(s.begin() + l, s.begin() + r); // reverse current word
      if (r == n)
        break;
      s[r++] = ' '; // set empty space
      l = r;
    }
    ++i; // now i == n or s[i] == ' ', so we skip that character!
  }
  if (r > 0 && s[r - 1] == ' ')
    --r; // skip last empty character if have
  s.resize(r);
  return s;
}
int main()
{
  string s = "my name is madhav";
  cout << "original string: " << endl;
  for (int i = 0; i < s.size(); i++)
  {
    cout << s[i];
  }
  cout << endl;
  string ans = reverseWords(s);
  cout << "words  in the reverse order: " << endl;
  for (int i = 0; i < ans.size(); i++)
  {
    cout << ans[i];
  }
  return 0;
}