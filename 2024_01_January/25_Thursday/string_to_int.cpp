class Solution
{
public:
  int myAtoi(string s)
  {
    int len = s.length();
    long res = 0;
    int i = 0;
    int op = 1;

    while (i < len && s[i] == ' ')
    {
      i++;
    }

    if (s[i] == '-')
    {
      op = -1;
      i++;
    }
    else if (s[i] == '+')
    {
      i++;
    }

    while (i < len)
    {
      if (s[i] >= '0' && s[i] <= '9')
      {
        res = res * 10 + (s[i] - '0');
        if (res > INT_MAX && op == 1)
        {
          return INT_MAX;
        }
        else if (res > INT_MAX && op == -1)
        {
          return INT_MIN;
        }
      }
      else
      {
        return (res * op);
      }
      i++;
    }

    return (res * op);
  }
};