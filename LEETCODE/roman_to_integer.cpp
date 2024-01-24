// covert roman to numerial:

#include <iostream>
#include <string>
#include <map>

using namespace std;
int numeric(string s)
{
  map<char, int> m;
  m['I'] = 1;
  m['V'] = 5;
  m['X'] = 10;
  m['L'] = 50;
  m['C'] = 100;
  m['D'] = 500;
  m['M'] = 1000;

  int ans = 0;

  for (int i = 0; i < s.size(); i++)
  {
    if (m[s[i]] < m[s[i + 1]])
    {
      ans = ans - m[s[i]];
    }
    else
    {
      ans = ans + m[s[i]];
    }
  }
  return ans;
}
int main()
{
  cout << "enter the roman value: " << endl;
  string s;
  getline(cin, s);
  cout << "integer value: ";
  int ans = numeric(s);
  cout << ans;
  return 0;
}