#include <iostream>
#include <string>
using namespace std;

int myAtoi(string s)
{
  int i = 0;
  int sign = 1;
  long ans = 0;
  while (i < s.length() && s[i] == ' ')
    i++;
  if (s[i] == '-')
  {
    sign = -1;
    i++;
  }
  else if (s[i] == '+')
    i++;
  while (i < s.length())
  {
    if (s[i] >= '0' && s[i] <= '9')
    {
      ans = ans * 10 + (s[i] - '0');
      if (ans > INT8_MAX && sign == -1)
        return INT8_MIN;
      else if (ans > INT8_MAX && sign == 1)
        return INT8_MAX;
      i++;
    }
    else
      return ans * sign;
  }
  return (ans * sign);
}
int main()
{
  string s = "4183 is hello";
  int x = myAtoi(s);
  cout << x;
  return 0;
}