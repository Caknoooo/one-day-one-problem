class Solution
{
public:
  int romanToInt(string s)
  {
    map<char, int> mp;
    int res = 0;

    mp['I'] = 1;
    mp['V'] = 5;
    mp['X'] = 10;
    mp['L'] = 50;
    mp['C'] = 100;
    mp['D'] = 500;
    mp['M'] = 1000;

    for (int i = 0; i < s.length(); i++)
    {
      if (mp[s[i]] < mp[s[i + 1]])
      {
        res -= mp[s[i]];
      }
      else
      {
        res += mp[s[i]];
      }
    }

    return res;
  }
};